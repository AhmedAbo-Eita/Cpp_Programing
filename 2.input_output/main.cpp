#include <iostream>
using namespace std;

int main()
{
    string s; 
    //take input from user
    cout<<"Enter the string: ";
    getline(cin,s);

    //print the entered data
    cout<<"Your entered data: "<<s<<"\n";

    //add letter to string 
    s.push_back('Y');
    cout<<"Your entered data: "<<s<<"\n";

    //remove the letter
    s.pop_back();
    cout<<"Your entered data: "<<s<<"\n";

}