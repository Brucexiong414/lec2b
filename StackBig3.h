/**
 * Filename: StackBig3.h
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using
 *              data hiding. This file does not use exception handling.
 */

#ifndef STACKBIG3_H
#define STACKBIG3_H

// This header defines "uint32_t"
#include <stdlib.h>
#include <stdint.h>


// Type of Stack element
typedef int T;

class Stack {
public:
    /* Constructors */
    Stack(uint32_t size);
    Stack(const Stack &inStack);
    /* Destructor */
    ~Stack(void);

    Stack & operator=(const Stack &);

    void push(const T &item);
    void pop(T &item);
    int top(T &cur_top);
    bool isEmpty(void) const;
    bool isFull(void) const;

private:
    uint32_t _top, _size;
    T *_stack;
};

#endif
