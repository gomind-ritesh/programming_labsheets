/*Write a program that accepts two points, like in question 5 above, and determines the distance
between them. d = √((x2 – x1)2+ (y2 – y1)2)*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2;

    cout<<"Enter the first coordinate"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the second coordinate"<<endl;
    cin>>x2>>y2;

    cout<<"The distance between the 2-coordinates is: "<<pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
    return 0;
}
