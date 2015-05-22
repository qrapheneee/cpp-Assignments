/*
 *  Question5.cpp
 *
 *  Name:           [ Inim Andrew Esiet]
 *  Department:     [ Computer Science ]
 *  Matric. No:     [ 47123818DC ]
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #5
 */

#include <iostream>
#include <math.h>   // library to use pow() function to calculate squares and cubes
using namespace std;

int main()
{
    int a;
    // display welcome messages to user
    cout << "Welcome - This program calculates the squares and cubes\n";
    cout << "of the integers from 0 to 10 and prints using tabs\n\n";
    
    // TODO: Hint use pow(base, power) to calculate squares and cubes
   cout<<"Integer\t\tSquare\t\tCube\n";
a=0;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=1;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=2;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=3;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=4;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=5;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=6;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=7;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=8;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=9;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
a=10;
cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}