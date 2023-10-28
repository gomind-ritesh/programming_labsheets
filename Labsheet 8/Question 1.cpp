#include <iostream>
/*Write a program that contains the following:
◦ A function maxPosn() that has as parameters an array X of integers and an integer n,
representing number of values in X and returns the position of the maximum value in X.
◦ A main() function that declares an array A of size 10, allows the input of values for elements of A
and uses the function maxPosn() to obtain the position of the highest value in A.
◦ The main() function should display the highest value in A.*/

using namespace std;

int maxPosn(int X[], int n)
{
    int highest = 0;
    int highPos = 0;

    for(int i = 0; i<n; i++)
        {
        if (X[i] > highest){
            highest = X[i];
            highPos = i;
        }
    }

    return highPos;
}


int main()
{
    int A[10];
    for(int j = 0; j < 10; j++){
        cout<<"Enter the value for A"<<j+1<<endl;
        cin>>A[j];
    }

    return(maxPosn(A,10));
    return 0;
}
