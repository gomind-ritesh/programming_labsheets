/*Write a program that asks the user his/her year of birth and calculates his/her age. If
he/she is below 18 years old, the program must display “You are a child aged &lt;age&gt;!”.
Otherwise, it must display “You are an adult aged age years old!”. (Assume that the age
is calculated based on the year only)*/
#include <iostream>

using namespace std;

int main()
{
    int birthyear,age;

    cout<<"Input your year of birth: "<<endl;
    cin>>birthyear;
    age = 2023-birthyear;

    if (age<18){
        cout<<"You are a child aged "<<age<<" years old";
    }
    else {
        cout<<"You are an adult aged "<<age<< "years old";
    }
    return 0;
}
