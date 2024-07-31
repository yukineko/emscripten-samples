#include <string>
#include <array>
#include <iostream>
#include <emscripten.h>
#include <emscripten/bind.h>
class C {};
C* passThorough(C* ptr){
    return ptr;
}
C* createC(){
    return new C();
}
EMSCRIPTEN_BINDINGS(examples){
    emscripten::class_<C>("C");
    emscripten::function("passThrough", &passThorough, emscripten::allow_raw_pointers());
    emscripten::function("createC", &createC, emscripten::return_value_policy::take_ownership());
}


