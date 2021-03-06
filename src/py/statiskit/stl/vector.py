from . import _stl
from . import __stl

from functools import wraps
import sys

__all__ = []

__module__ = sys.modules[__name__]
for var in dir(__stl.statiskit.stl):
    if var.startswith('Vector'):
        setattr(__module__, var, getattr(__stl.statiskit.stl, var))
        __all__.append(var)

def decorator(cls):

    if not hasattr(cls, "__decorated__") or not cls.__decorated__:
        
        cls.__decorated__ = True

        def wrapper__init__(f):
            @wraps(f)
            def __init__(self, *args):
                if len(args) == 1 and isinstance(args[0], self.__class__):
                    f(self, args[0])
                else:
                    f(self)
                    for arg in args:
                        self.push_back(arg)
            return __init__

        cls.__init__ = wrapper__init__(cls.__init__)

        def wrapper_at(f):

            @wraps(f)
            def __getitem__(self, index):
                if isinstance(index, slice):
                    return [self[index] for index in range(*index.indices(len(self)))]
                else:
                    if index < 0:
                        index += len(self)
                    if not 0 <= index < len(self):
                        raise IndexError("vector index out of range")
                    return f(self, index)

            @wraps(f)
            def __setitem__(self, index, value):
                if isinstance(index, slice):
                    for index, value in zip(range(*index.indices(len(self))), value):
                        self[index] = value
                else:
                    if index < 0:
                        index += len(self)
                    if not 0 <= index < len(self):
                        raise IndexError("vector index out of range")
                    return f(self, index, value)

            return __getitem__, __setitem__

        cls.__getitem__, cls.__setitem__ = wrapper_at(cls.at)
        del cls.at

        def __str__(self):
            return "(" + ", ".join(str(value) for value in self) + ")"

        cls.__str__ = __str__

        def __repr__(self):
            return "(" + ", ".join(repr(value) for value in self) + ")"

        cls.__repr__ = __repr__

        def _repr_latex_(self):
            return "$\\left(" + ", ".join(getattr(value, "_repr_latex_", getattr(value, "__repr__"))() for value in self) + "\\right)$"

        cls._repr_latex_ = _repr_latex_

for cls in __stl.std._Vector:
    decorator(cls)