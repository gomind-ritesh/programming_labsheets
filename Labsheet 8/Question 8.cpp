/*Write a program that has the following functions:
◦ a function doubled_value() which takes as input 3 integers and returns the double of each.
◦ A main function that calls the function doubled_value() with values 1, 3, 7 and displays the results.*/
#include <iostream>

using namespace std;

void doubled_value(){
    int num1, num2, num3;
    cout<<"Input num1"<<endl;
    cin>>num1;
    cout<<"Input num2"<<endl;
    cin>>num2;
    cout<<"Input num3"<<endl;
    cin>>num3;
    cout<<2*num1<<endl<<2*num2<<endl<<2*num3;


}




int main()
{
    doubled_value();

    return 0;
}
