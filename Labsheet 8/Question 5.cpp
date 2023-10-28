#include <iostream>
#include <cmath>

float square(float x, float y, float z){
    return (40.0*pow(x,2))+(50.0*pow(y,2))+(20.0*pow(z,2));
}

using namespace std;

int main()
{
    float x, y, z;
    cout<<"Input x"<<endl;
    cin>>x;
    cout<<"Input y"<<endl;
    cin>>y;
    cout<<"Input z"<<endl;
    cin>>z;

    cout<<square(x,y,z);

    return 0;
}
