/*Write a function sumArray() that has as parameters two arrays A and B and calculates and stores
the sum of corresponding elements of the arrays. Include any additional parameter(s) you
consider necessary.*/
#include <iostream>

int sumArray(int A(), int B(), n)
{
    return A(n) + B(n);
}

/*Write a main() function that uses the function inputArray() to perform the input of two integer
arrays X1 and X2 and uses sumArray() to calculate the sum of corresponding values of X1 and X2.
It then displays the calculated values.*/

void inputArray(){
    int num_elements;
    cout<<"Input the number of elements in X1"<<endl;
    int X1(num_elements);
    for (int i = 0; i<num_elements; i++){
        cout<<"Enter element "<<i+1<<"for X1"<<endl;
       cin>>X1(i);
    }

        int num_elements;
    cout<<"Input the number of elements in X2"<<endl;
    int X2(num_elements);
    for (int i = 0; i<num_elements; i++){
        cout<<"Enter element "<<i+1<<"for X2"<<endl;
       cin>>X2(i);
    }


}
using namespace std;

int main()
{
    inputArray();

    return 0;
}
