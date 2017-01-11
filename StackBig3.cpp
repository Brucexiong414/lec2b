/**
 * Filename: StackBig3.cpp
 * Class: CS251
 *
 * @author Julie A. Adams
 * Description: This file impliments an abstract data type stack class using
 *              data hiding. This file does not use exception handling.
 */

#include "StackBig3.h"


Stack::Stack(size_t size) : _top(0), _size(size), _stack(new T[size]) {}


Stack::Stack(const Stack &inStack) : _top(inStack._top), _size(inStack._size), _stack(new T[inStack._size]) {
    for (size_t i = 0; i < inStack._size; i++) {
        _stack[i] = inStack._stack[i];
    }
}


Stack::~Stack(void) {
    delete [] _stack;
}

Stack & Stack::operator=(const Stack &inStack) {
    if (this != &inStack) {
        T *temp_stack = new T[inStack._size];
        delete [] _stack;
        for (size_t i = 0; i < inStack._size; i++) {
            temp_stack[i] = inStack._stack[i];
        }
        _stack = temp_stack;
        _top = inStack._top;
        _size = inStack._size;
    }
    return *this;
}


void Stack::push(const T &item) {
    _stack[_top] = item;
    _top++;
}


void Stack::pop(T &item) {
    item = _stack[--_top];
}


int Stack::top(T &item) {
    item = _stack[_top - 1];
    return item;
}


bool Stack::isEmpty(void) const {
    return _top == 0;
}


bool Stack::isFull(void) const {
    return _top == _size;
}
