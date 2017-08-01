/**********************
Name: Reuben Youngblom
Date: October 5th 2016
Description: Assignment 2b, temperature converstion
**********************/

#include <iostream>
using namespace std;

int main ()  //main function
{

double celsius;   //creates double for C temperature

cout << "please enter a celsius temperature:" << endl;  //prompts user for C temperature

cin >> celsius;  //takes input as C temperature

double fahrenheit = (( (9.0/5.0) *celsius) + 32.0);   //formula to convert to Fahrenheit (double so it can handle decimals)

cout << "the equivalent fahrenheit temperature is:" << endl;   // prints this line

cout << fahrenheit << endl;   //prints F conversion

return 0;
}
