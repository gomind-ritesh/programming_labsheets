/*Write a program that allows the coefficients a,b and c of a quadratic equation of the
form ax 2 + bx + c=0 and it displays the roots of the equation, whether the roots are real
or complex.*/
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"This program finds the roots to a quadratic"<<endl;
    cout<<"Please enter the coefficients(a,b,c)"<<endl;;
    cin>>a>>b>>c;

    float discRoot = sqrt((b*b)-4*a*c);
    if (pow(discRoot,2)>0){
            float root1 = (-b+discRoot/(2*a));
            float root2 = (-b-discRoot/(2*a));
            cout<<"The solutions are: "<<root1<<" and "<<root2<<endl;
    }
    else{
        float y = sqrt(-1*((b*b)-4*a*c))/2*a;
        float x = -b/2*a;
        cout<<"The solutions are: "<<x<<" + "<<y<<" and "<<x<<" - "<<y<<endl;
    }
    return 0;
}
