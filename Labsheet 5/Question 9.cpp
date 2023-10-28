/*To calculate x to power n, (where n is a positive integer), we can use a loop that multiplies x by
itself n times.*/
#include <iostream>

using namespace std;

int main()
{
    int x,n;
    int i = 1;
    int p = 1;

    cout<<"Enter the values of x and n"<<endl;
    cin>>x>>n;

    while(i<=n){
        p=p*x;
        i++;
    }
    cout<<"x to the power of n is :"<<p;
    return 0;
}
