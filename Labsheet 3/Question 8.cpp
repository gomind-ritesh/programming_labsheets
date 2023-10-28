/*A lecturer gives 5-point quizzes that are graded as follows: 5 – A, 4 – B, 3 – C, 2 – D, 1 – E,
0 – F.
Write a program that accepts a quiz score as input and uses a decision structure to
display the above grades.*/
#include <iostream>

using namespace std;

int main()
{
    int point;

    cout<<"Please input points earned: "<<endl;
    cin>>point;

    switch(point){
    case 5:
        cout<<"A";
        break;
    case 4:
        cout<<"B";
        break;
    case 3:
        cout<<"C";
        break;
    case 2:
        cout<<"D";
        break;
    case 1:
        cout<<"E";
        break;
    case 0:
        cout<<"F";
        break;
    }
    return 0;
}
