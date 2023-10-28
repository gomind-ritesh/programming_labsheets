/*Write a program that allows the input of the 2 (shorter) sides of a right-angled triangle and it calculates
and displays the length of the hypotenuse, using Pythagora’s theorem.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Please input the shorter sides of the right-angled triangle"<<endl;
    cin>>a>>b;
    c = sqrt((a*a)+(b*b));
    cout<<"The length of the hypotenuse is "<<c<<endl;
    return 0;
}
