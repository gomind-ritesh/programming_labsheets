/*Write a recursive function TwoPowerN to calculate 2n

. Implement the main program as well.*/

#include <iostream>

using namespace std;

int TwoPowerN(int n)
{
    if (n==0){
        return 1;
    }
    else
    {
        return 2*TwoPowerN(n-1);
    }

}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = TwoPowerN(n);
    cout<<"2^"<< n<< " = "<<result<<endl;

    return 0;
}
