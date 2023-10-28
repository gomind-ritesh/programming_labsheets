#include <iostream>
#include <cmath>

using namespace std;

double sphereVolume(double radius){
    return ((4*M_PI)/3)*pow(radius,3);
}
int main()
{
    double rad;
    cout<<"Input the radius of the smaller ball"<<endl;
    cin>>rad;
    double smallVol = sphereVolume(rad);
    cout<<"Input the radius of the bigger ball"<<endl;
    cin>>rad;
    double bigVol = sphereVolume(rad);
    cout<<"volume of liquid is "<<bigVol-smallVol;
    return 0;
}
