/*
 *  Question1.cpp
 *
 *  Name:           [ Inim Andrew Esiet ]
 *  Department:     [ Computer Science]
 *  Matric. No:     [ 47123818DC ]
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    
    // TODO: Enter code to read integer and store in variable value
    cout << "Please enter an integer value -  ";
cout<<"Welcome\nInput your value\n";
cin>>value;

    // TODO: Enter code to determine if integer is odd or even
    if (value% 2==0)
cout<<value<<"\tis an even number";
else cout<<value<<"\tis an odd number";
    
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}