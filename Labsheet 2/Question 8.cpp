/*Write a program that allows the input of two sides of a triangle and the angle between the two sides
and it displays the length of the 3 rd side, the remaining angles as well as the area of the triangle.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float h1,h2,hout,theta,rad,angle1,angle2,area;
    cout<<"Input the 2 sides and the angle in degrees"<<endl;
    cin>>h1>>h2>>theta;
    rad = (theta/180)*M_PI;

    hout = sqrt((h1*h1)+(h2*h2)-2*h1*h2*cos(rad));

    angle1 = acos(((hout*hout)-(h2*h2)-(h1*h1))/(-2*h2*h1));
    angle1 = (180*angle1)/M_PI;
    angle2 = 180-(theta+angle1);

    area = 0'5*h1*h2*sin(rad);

    cout<<"The remaining side is of length: "<<hout<<endl;
    cout<<"The remaining angles are "<<angle1<<" and "<<angle2<<endl;
    cout<<"The area of the triangle is "<<area<<endl;


    return 0;
}
