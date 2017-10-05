// File: inputOutputString.cpp
// Created by Garrett Van Dyke on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <string>
using namespace std;
// Constants, Classes, Structures


// Prototypes


// Main Program
int main()
{
    string full_name, nickname, address;

    cout << "Enter your full name: ";
    getline(cin, full_name);                    // Take embedded blanks

    cout << "Enter your nickname: ";
    cin >> nickname;                            // Will take one word

    cout << "Enter your address on separate lines\n";
    cout << "Terminate input with '$'\n";
    getline(cin, address, '$');

    cout << full_name << endl;
    cout << nickname << endl;
    cout << address << endl;

    return 0;
}

// Function Definitions