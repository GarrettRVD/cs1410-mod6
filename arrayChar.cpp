// File: arrayChar.cpp
// Created by Garrett Van Dyke on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
const int MAX = 80;         // Always has the null character, only 79 spaces

// Prototypes


// Main Program
int main()
{
    char st[MAX];

    /*cout << "Enter your first name: ";
    cin >> st;

    cout << "Hello " << st << endl;*/

    // Let the compiler calculate the space, String constants
    char hi[] = "Hello Weber State University Students!";
    cout << hi << endl;

    // To support embedded blanks, use cin.get() function
    cout << "Enter your full name: ";
    cin.get(st,MAX);
    cout << "Hello " << st << endl;

    return 0;
}

// Function Definitions