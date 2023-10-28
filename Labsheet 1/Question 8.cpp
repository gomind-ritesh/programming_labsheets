/*VTwo points in a plane are specified using the coordinates (x1, y1) and (x2, y2). Write a program that
calculates the slope of a line through two non-vertical points entered by the user.
Hint: m = (y2 – y1)/(x2 – x1)*/
#include <iostream>

using namespace std;

int main()
{
    int x1,x2,y1,y2;

    cout<<"Enter the first coordinate"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the second coordinate"<<endl;
    cin>>x2>>y2;

    cout<<"The slope between the 2-coordinates is: "<<(y2-y1)/(x2-x1);
    return 0;
}
