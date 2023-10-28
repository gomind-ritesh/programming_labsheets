#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float opp, hyp, theta;
    cout<<"Input the length of the ladder and the incline"<<endl;
    cin>>hyp>>theta;
    theta=(theta/360)*M_PI;
    opp=hyp*sin(theta);
    cout<<"The wall can be up to "<<opp<<" units long"<<endl;
    return 0;
}
