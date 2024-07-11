#include <emscripten/bind.h>
#include <iostream>
using namespace emscripten;

float lerp(float a, float b, float t){
    float result = (1 - t) * a + t * b;
    std::cout << "result " << result << std::endl;
    
    return result;
}

EMSCRIPTEN_BINDINGS(my_module) {
     function("lerp", &lerp);
}