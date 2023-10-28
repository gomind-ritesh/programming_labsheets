/*The figure below shows a concrete cylindrical pillar with a cylindrical hole in the middle. The hole is
of two parts. One part is of height h1, with radius r1, the other part is of height h2, with radius r2. The pillar has height h and radius r. Write a program, that takes as inputs the values of h, r, h1, r1
and r2 and calculates the volume of concrete required to construct such a pillar with the given
values.
Note: h = h1 + h2 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float h,h1,h2,r,r1,r2;
    float vol1,vol2,vollarge;

    cout<<"Input h,h1,r,r1,r2"<<endl;
    cin>>h>>h1>>r>>r1>>r2;

    vollarge = 3.142*pow(r,2)*h;
    vol1 = 3.142*pow(r1,2)*h1;
    vol2 = 3.142*pow(r2,2)*(h-h1);

    cout<<"Volume of concrete needed: "<<(vollarge-(vol1+vol2))<<endl;
    return 0;
}
