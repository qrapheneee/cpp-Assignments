/*
 *  Question2.cpp
 *
 *  Name:           [ Inim Andrew Esiet ]
 *  Department:     [ Computer Science ]
 *  Matric. No:     [ 47123818DC ]
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int firstInteger;
    int secondInteger;
    
    // display welcome messages to user
    cout << "Welcome - This program reads two integers\n";
    cout << "and determines if first is a multiple of second\n\n";
    
    // Read first integer
    cout << "Enter first integer value -\n  ";
cin>>firstInteger;;
    // Read second integer
    cout << "Enter second integer value -  ";
    cout<<"input your second value\n";
cin>>secondInteger;
    
    // Determine if first is a multiple of second
    if (secondInteger%firstInteger==0);
cout<<firstInteger<<"is a multiple of"<<secondInteger;
else 
cout<<firstInteger<<"is not a multiple of"<<secondInteger;

    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}