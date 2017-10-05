// File: multiDarray.cpp
// Created by Garrett Van Dyke on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
const int ROWS = 3;
const int COL = 2;

// Prototypes
void AgeInput(int iage[ROWS][COL]);
void ShowAge(int iage[ROWS][COL]);

// Main Program
int main()
{
    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2},
                           {21, 22},
                           {31, 32}};

    AgeInput(age);
    ShowAge(age);

    cout << endl;

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "age2 " << i << "-" << j << " = " << age2[i][j] << endl;
        }
    }

    return 0;
}

// Function Definitions
void AgeInput(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "Enter your age ";
            cin >> iage[i][j];
        }
        cout << endl;
    }
}

void ShowAge(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "age " << i << "-" << j << " = " << iage[i][j] << endl;
        }
    }
}