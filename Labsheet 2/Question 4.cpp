/*Write a program that allows the inputs of x and y coordinates of two points (x1,y1) and (x2,y2), and
determines the distance between them. d = √((x2 – x1) 2 + (y2 – y1) 2 )*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1,x2,y1,y2;

    cout<<"Input the first coordinate"<<endl;
    cin>>x1,y1;
    cout<<"Input the second coordinate"<<endl;
    cin>>x2>>y2;

    cout<<"The distance is "<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));


    return 0;
}
