#include <string>
#include <array>
#include <iostream>
#include <emscripten/bind.h>
struct Point2f {
    float x;
    float y;
};

struct PersonRecord {
    std::string name;
    int age;
};

struct ArrayInStruct {
    int field[2];
};

PersonRecord findPerson(Point2f point){
    std::cout << "X " << point.x << std::endl;
    std::cout << "X " << point.y << std::endl;

    PersonRecord person = {"my name" , 99};
    return person;
}
EMSCRIPTEN_BINDINGS(value_examples){
    emscripten::value_array<Point2f>("Point2f")
    .element(&Point2f::x)
    .element(&Point2f::y);

    emscripten::value_object<PersonRecord>("PersonRecord")
    .field("name", &PersonRecord::name)
    .field("age", &PersonRecord::age);

    emscripten::value_object<ArrayInStruct>("ArrayInStruct")
    .field("field", &ArrayInStruct::field);

     emscripten::value_array<std::array<int, 2>>("array_int_2")
        .element(emscripten::index<0>())
        .element(emscripten::index<1>())
        ;

    emscripten::function("findPerson", &findPerson);
}


