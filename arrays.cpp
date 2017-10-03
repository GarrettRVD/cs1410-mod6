#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    int age[SIZE];     // Define an array of 3 integers

    for(int i = 0; i < SIZE; i++)   // Take input
    {
        cout << "Enter your age: ";
        cin >> age[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nage " << i << " is " << age[i];
    }

    cout << "Done!" << endl;

    return 0;
}