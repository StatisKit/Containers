#include "_stl.h"

bool  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_ebd24ba22b5a57ba98343f75023d77a0)()const= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::empty;
::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_8ae51fee6ed45f33acf4a1926506397b)()const= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size;
::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_7153735b781d505b9146233becb01637)()const= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::max_size;
::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_3b8d68ccc39d5592a2ce2b25aeec2516)(::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_type const &)= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::erase;
void  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_52dab5b0978456aa9d00eb760b635f03)()= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::clear;
::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_4d624c7e98c054ad937392978d9dbd31)(::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_type const &)const= &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::count;

namespace autowig {
}

void wrapper_858bbf0613575e2ebe4b0e5902107ad6(pybind11::module& module)
{

    struct function_group
    {
        static ::statiskit::stl::SetLessDoubleGenerator  function_e2d89d727bb55c85a14e5778e924d099(::statiskit::stl::SetLessDouble const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_992b8adef62d5217a35458a6c04194e7(::statiskit::stl::SetLessDouble & parameter_0, double const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >, autowig::HolderType< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::Type > class_858bbf0613575e2ebe4b0e5902107ad6(module, "_Set_858bbf0613575e2ebe4b0e5902107ad6", "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def(pybind11::init<  >());
    class_858bbf0613575e2ebe4b0e5902107ad6.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >());
    class_858bbf0613575e2ebe4b0e5902107ad6.def("empty", method_pointer_ebd24ba22b5a57ba98343f75023d77a0, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("__len__", method_pointer_8ae51fee6ed45f33acf4a1926506397b, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("max_size", method_pointer_7153735b781d505b9146233becb01637, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("erase", method_pointer_3b8d68ccc39d5592a2ce2b25aeec2516, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("clear", method_pointer_52dab5b0978456aa9d00eb760b635f03, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("count", method_pointer_4d624c7e98c054ad937392978d9dbd31, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("__iter__", function_group::function_e2d89d727bb55c85a14e5778e924d099, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("insert", function_group::function_992b8adef62d5217a35458a6c04194e7, "");

}