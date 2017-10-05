// File: funcArray.cpp
// Created by Garrett Van Dyke on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Structures, Classes, Constants
const int SIZE = 3;

// Prototypes
void AgeInput(int iage[SIZE]);   // Arrays are passed by reference
//void AgeInput(int iage[]);     // Another notation
void ShowAge(int iage[SIZE]);

// Main Program
int main()
{
    int age[SIZE];                      // Define an array of 3 integers

    AgeInput(age);

    ShowAge(age);

    cout << "\nDone!" << endl;

    return 0;
}

// Function Definitions
void AgeInput(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)   // Take input
    {
        cout << "Enter your age: ";
        cin >> iage[i];
    }
}

void ShowAge(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nage " << i << " is " << iage[i];
    }
}