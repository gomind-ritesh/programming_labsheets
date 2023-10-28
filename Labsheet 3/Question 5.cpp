/*Write a program that allows the input of two numbers and tells the user which of the
two numbers is larger.
Note: Assume that the two numbers entered are not equal.*/
#include <iostream>

using namespace std;

int main()
{
    float x,y;

    cout<<"Please input 2 numbers"<<endl;
    cin>>x>>y;

    if(x>y){
        cout<<"The first number is larger"<<endl;
    }
    else
        cout<<"The second number is larger"<<endl;
    return 0;
}
