#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    int age[SIZE];                      // Define an array of 3 integers
    int age2[SIZE] = {99, 21, 33};      // Declare and initialize an array of three members

    for(int i = 0; i < SIZE; i++)   // Take input
    {
        cout << "Enter your age: ";
        cin >> age[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nage " << i << " is " << age[i];
        cout << "\nage2 " << i << " is " << age2[i];
    }

    age[0] = 123;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nAfter age " << i << " is " << age[i];
    }

    cout << "\nDone!" << endl;

    return 0;
}