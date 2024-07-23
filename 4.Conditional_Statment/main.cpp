/*
    this code take the mark of student from user
    and print its grade (excellent-very good- good - fair -fail)
*/
#include <iostream>
using namespace std;
int main()
{
    //take mark of student from user 
    float mark=0;
    cout<<"Enter the grade of student : ";
    cin>>mark;

    //print the grade due to the mark
    if(mark>=85)
    {
        cout<<"The grade is Excellent\n";
    }
    else if(mark<85 && mark>=75)
    {
        cout<<"The grade is Very good\n";
    }
    else if(mark<75 && mark>=65)
    {
        cout<<"The grade is good\n";
    }
    else if(mark<65 && mark>=60)
    {
        cout<<"The grade is fair\n";
    }
    else
    {
        cout<<"The grade is fail\n";
    }

    return 0;
}