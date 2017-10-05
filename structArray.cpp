// File: structArray.cpp
// Created by Garrett Van Dyke on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
struct Part
{
    int modelNumber;
    int partNumber;
    float cost;
};

const int SIZE = 4;

// Prototypes
void PartInput(struct Part ip[SIZE]);

// Main Program
int main()
{
    Part p[SIZE];

    PartInput(p);

    return 0;
}

// Function Definitions
void PartInput(struct Part ip[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >> ip[i].modelNumber;

        cout << "Enter part number: ";
        cin >> ip[i].partNumber;

        cout << "Enter part cost: ";
        cin >> ip[i].cost;

        cout << endl;
    }
}