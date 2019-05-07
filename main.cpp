#include <iostream>
#include <string>
#include <typeinfo>
 
struct Base {}; // non-polymorphic
struct Derived : Base {};
 
struct Base2 { virtual void foo() {} }; // polymorphic
struct Derived2 : Base2 {};
 
int main() {
    int myint = 50;
    std::string mystr = "string";
    double *mydoubleptr = nullptr;
 
    std::cout << "myint has type: " << typeid(myint).name() << '\n'
              << "mystr has type: " << typeid(mystr).name() << '\n'
              << "mydoubleptr has type: " << typeid(mydoubleptr).name() << '\n'
              << "Base has type: " << typeid(Base).name() << '\n'
              << "Derived2 has type: " << typeid(Derived2).name() << '\n';

}