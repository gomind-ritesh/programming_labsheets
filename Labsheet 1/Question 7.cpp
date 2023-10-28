/*Consider the program in question 6. Given that concrete is sold as full containers of size y m3
, (where
y is an integer). Modify the program so that it also allows as input the value of y and the cost of a
container and displays the cost of concrete for a pillar. */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float h,h1,h2,r,r1,r2;
    float vol1,vol2,vollarge, price;
    int cont_size;

    cout<<"Input h,h1,r,r1,r2"<<endl;
    cin>>h>>h1>>r>>r1>>r2;

    cout<<"Input the size of the container"<<endl;
    cin>>cont_size;
    cout<<"Input the cost of the container"<<endl;
    cin>>price;

    vollarge = 3.142*pow(r,2)*h;
    vol1 = 3.142*pow(r1,2)*h1;
    vol2 = 3.142*pow(r2,2)*(h-h1);

    cout<<"Volume of concrete needed: "<<(vollarge-(vol1+vol2))<<endl;
    cout<<"The total cost is: "<<((vollarge-(vol1+vol2))/cont_size)*price<<endl;
    return 0;
}
