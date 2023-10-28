/*Make a copy of the program for question 1 and modify it so that it works for complex roots only.
Note: Complex roots mean negative discriminants. The square root won’t work. What you should do is
obtain the absolute value, find the square root, separate your calculation into a real and imaginary part
(x+yi) then display using
cout&lt;&lt;x&lt;&lt;”+”&lt;&lt;y&lt;&lt;”i”&lt;&lt;endl;*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"This program finds the complex roots to a quadratic"<<endl;
    cout<<"Please enter the coefficients(a,b,c)";
    cin>>a>>b>>c;

    float y = sqrt(-1*((b*b)-4*a*c))/2a;
    float x = -b/2a;
    cout<<"The solutions are: "<<x<<" + "<<y<<" and "<<x<<" - "<<y<<endl;
    return 0;
}
