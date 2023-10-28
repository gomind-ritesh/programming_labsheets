/* Question 1: Write a program that requests the user to input the radius of a circle and it calculates and
displays the area of the circle (Assume pi to be 3.142)*/
#include <iostream>

using namespace std;

int main()
{
    float radius;
    cout<<"Please enter a radius for the calculation"<<endl;
    cin>>radius;

    cout<<"The area of the circle is "<<(3.142*(radius*radius));

    return 0;
}
