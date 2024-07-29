# C++クラスをbindする

```
emscripten::_class<Class>("class_string")
    .constructor<Type List>() // constructor
    .function("export_string", &class_name::method) // method
    .class_function("export_string", &class_name::method) // static method
    .property("property_string", &class_name::getter, class_name::setter) // setterは省略可能
    ;
 ```

 