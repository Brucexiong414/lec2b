/**
 * Filename: AssignCopy.h
 * Class: CS3251
 *
 * @author G. Hemingway
 * Description: Gain some intuition on copy-vs-assignment
 *
**/
#include <iostream>


class Foo {
public:
    Foo(const int a=0) : _val(a) {
        std::cout <<  "Default constructor" << std::endl;
    }

    Foo(const Foo &rhs) : _val(rhs._val) {
        std::cout << "Copy constructor" << std::endl;
    }

    Foo & operator=(const Foo &rhs) {
        std::cout << "Equals operator" << std::endl;
        _val = rhs._val;
        return *this;
    }

    int value(void) {
        return _val;
    }

private:
    int _val;
};


int main(void) {
    Foo x(9);
    std::cout << "x's value is: " << x.value() << std::endl;

    //Foo y(x);
    //std::cout << "y's value is: " << y.value() << std::endl;

    //Foo z = x;
    //std::cout << "z's value is: " << z.value() << std::endl;

    return 0;
}
