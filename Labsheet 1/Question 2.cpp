/*Write a program that asks the user his id number (use a simple integer value), score in
CSE1017Y and CSE1019Y and output the user’s name with his average score. */

#include <iostream>

using namespace std;

int main()
{
    double diameter,radius,size,price;
    cout<<"Enter the diameter of the pizza:"<<endl;
    cin>>diameter;
    radius = diameter/2;
    size = radius* radius * 3.142;

    cout<<"Enter the price of the pizza:"<<endl;
    cin>>price;

    cout<<"The price per square cm is:"<<(price/size);


    return 0;
}
