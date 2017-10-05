// File: arrayAsClassMember.cpp
// Created by Garrett Van Dyke on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
const int MAX = 10;

class Stack
{
private:
    int st[MAX];    // stack: array of ints
    int top;        // number of top of stack
public:
    Stack()
    {
        top = -1;
    }

    void push(int var)  // Put member on stack
    {
        st[++top] = var;    // Increment before use because top starts at -1
    }

    int pop()           // Take number of stack
    {
        return st[top--];   // use then decrement for next use
    }
};

// Prototypes


// Main Program
int main()
{
    Stack s1;

    s1.push(11);
    s1.push(44);

    cout << "1 " << s1.pop() << endl;   // 44
    cout << "2 " << s1.pop() << endl;   // 11

    s1.push(12);
    s1.push(31);
    s1.push(94);
    s1.push(144);

    cout << "3 " << s1.pop() << endl;   // 144
    cout << "4 " << s1.pop() << endl;   // 94

    return 0;
}

// Function Definitions