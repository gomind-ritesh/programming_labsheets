/*Write a program that allows the user to input the radius of a circle, and it calculates and
displays the area. The program should only accept non-zero positive values for the
radius and display an error message if the user tries to input a zero or negative value.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float radius;

    cout<<"Enter radius: ";
    cin>>radius;
    while(radius<=0){
        cout<<"Radius cannot be <=0. Please input again"<<endl;
    cin>>radius;
    }

    cout<<"The area of the circle is "<<M_PI*pow(radius,2)<<endl;
    return 0;
}
