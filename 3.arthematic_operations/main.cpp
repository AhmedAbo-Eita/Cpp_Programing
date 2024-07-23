/*
    this code is used to sum two inputs takes from user
    and print the result
*/
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum;
    //take the value of two numbers from user 
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"Enter second number: ";
    cin>> num2;
    // add two numbers
    sum = num1+num2;
    //print the output
    cout<<"the sum = : "<<sum<<"\n";

    return 0;
}