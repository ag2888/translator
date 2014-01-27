// Ankit goel's pretty printing
#include "java_lang.h" 
#include "Header.h" 
#include <sstream> 
using namespace java::lang;

 Class __Test10090::__class() { 
    static Class k  = 
    new __Class(__rt::literal("java.lang.Test10090") , __Object::__class());
    return k; 
 }


void __Test10090::main(__rt::Ptr<__rt::Array<String> > args) { 

__rt::Ptr<__rt::Array<String> > array1 =  new __rt::Array<String>(5);

    std::cout << array1->__vptr->getClass(array1)->__vptr->toString( array1->__vptr->getClass(array1) );

__rt::Ptr<__rt::Array<int> > array12 =  new __rt::Array<int>(5);

    std::cout << array12->__vptr->getClass(array12)->__vptr->toString( array12->__vptr->getClass(array12) );
}


__Test10090::__Test10090() : __vptr(&__vtable) {
}

__Test10090_VT __Test10090:: __vtable;

Test10090 __Test10090::init_Construct(Test10090 __this ) {


    return __this; 
 } 

 // Array Specialization for Java Classes 

 namespace __rt { 
 template<>
 java::lang::Class Array<Test10090>::__class() {
 static java::lang::Class k = 
 new java::lang::__Class(literal("[LTest10090;"),
                         java::lang::__Object::__class(),
                         __Test10090::__class());
 return k; 
 }
 }


