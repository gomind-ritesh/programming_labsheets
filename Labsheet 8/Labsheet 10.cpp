/*Write a function ‘computePower’ that raises any value ‘x’ to an integer power ‘n’, by repeated
multiplication, using: (1) Iteration and (2) Recursion. Implement the main program as well.*/
#include <iostream>

using namespace std;

int computePower(int x, int n)
{
    int result = 1;
    int mult = 0;

    if (n==0)
        {
        return 1;
        }
    else{
        while(mult<n)
    {
        result = x * result;
        mult++;
    }
    return result;
    }
}

int computePowerRec(int x, int n)
{
    if (n==0){
        return 1;
    }
    else
    {
        return x*computePowerRec(x,n-1);
    }

}

int main()
{
    cout<<computePower(2,5);
    cout<<endl;
    cout<<computePowerRec(2,5);
    return 0;
}
