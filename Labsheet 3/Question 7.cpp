/*Write a program that reads an integer value, num, and determines if it is a perfect square.
If it is a perfect square, then the program displays a message saying that num is a perfect
square.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num;

    cout<<"Please input a number"<<endl;
    cin>>num;

    if (floor(sqrt(num)) == ceil(sqrt(num))){
        cout<<num<<" is a perfect square.";
    }
    else {
        cout<<num<<" is not a perfect square. ";
    }
    return 0;
}
