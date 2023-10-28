/*A function, cyl_Area() that has as parameter the radius of a cylinder and its height and returns
the total outer surface area of the cylinder.*/
#include <iostream>
#include <cmath>

using namespace std;

double cyl_Area(float radius, float height){
    float SurfArea;
    SurfArea = 2*(M_PI*radius*radius) + 2*(M_PI*radius*height);
    return SurfArea;
}

/*◦ A function cyl_Paint() that has as parameters the radius of a cylindrical tank (closed at both
ends), the height of the tank and the price of painting per unit area and calculates and returns the
price of painting the outside of the tank. The function should make use of the function cyl_Area().*/

double cyl_Paint(float rad, float hei, float price)
{
    float TotalCost;
    TotalCost = price *cyl_Area(rad,hei);
    return TotalCost;
}

/*◦ A main() function that allows the input of the radius and height of a cylindrical tank as well as the
price of painting a unit area of the tank and displays the price of painting the tank.*/


int main()
{
    float mainrad, mainhei, mainprice;
    cout<<"Please input the radius of the tank"<<endl;
    cin>>mainrad;
    cout<<"Please input the height of the tank"<<endl;
    cin>>mainhei;
    cout<<"Please input the price of the paint"<<endl;
    cin>>mainprice;

    cout<<cyl_Paint(mainrad,mainhei,mainprice);

    return 0;
}
