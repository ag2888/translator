// Ankit Goel's Header
#pragma once

#include <stdint.h>
#include <string>

using namespace java::lang;
// Foward Declarations 

struct __Test10090;

struct __Test10090_VT;

typedef __rt::Ptr<__Test10090> Test10090;

struct __Test10090 { 

    // The data layout for java.lang.plainClassName
      __Test10090_VT* __vptr;


     // The Constructor

          __Test10090(); 
    // The instance methods of java.lang.plainClassName
    static Test10090 init_Construct( Test10090); 

    // The Function returning the class Object representing java.lang.plainClassName 
    static Class __class(); 
    static void init(  __Test10090*  );

    static void main(__rt::Ptr<__rt::Array<String> > args);
    static __Test10090_VT __vtable;

 };

struct __Test10090_VT{
    Class __isa;
    void (*__delete)(__Test10090*);
    int32_t (*hashCode)(Test10090);
    bool (*equals)(Test10090 , Object);
    Class (*getClass)(Test10090);
    String (*toString) (Test10090);


    __Test10090_VT()
    : __isa(__Test10090::__class()),
    __delete(&__rt::__delete<__Test10090>),
      hashCode((int32_t(*)(Test10090))&__Object::hashCode),
      equals((bool(*)(Test10090 , Object)) &__Object::equals), 
      getClass((Class(*)(Test10090)) &__Object::getClass), 
      toString((String(*)(Test10090)) &__Object::toString) { 
    }
};



