#include <string>
#include <emscripten/bind.h>
using namespace emscripten;
    

class MyClass {
    public:
        MyClass(int _x, std::string _y): x(_x), y(_y){}

        void increment(){
            ++x;
        }
        int getX() const{
            return x;
        };
        void setX(int _x){
            x = _x;
        }
        static std::string getStringFromInstance(const MyClass& instance){
            return instance.y;
        }
    private:
        int x;
        std::string y;
};

EMSCRIPTEN_BINDINGS(my_class){
    class_<MyClass>("MyClass")
    .constructor<int, std::string>()
    .function("increment", &MyClass::increment)
    .property("x", &MyClass::getX, &MyClass::setX)
    .property("x_readonly", &MyClass::getX)
    .class_function("getStringFromInstance", &MyClass::getStringFromInstance)
    ;

}