/*Write a program that prints the following menu indefinitely until a 0 (zero) is entered:*/
#include <iostream>

using namespace std;

void sum(){
    int n;
    float x;
cout<<"Please input the number: "<<endl;
cin>>n;
x = float(n);
cout<<"Sum of first n counting numbers: "<<(x/2)*((2)+(n-1))<<endl<<endl;
}

void odd_sum(){
    int n;
    float x;
cout<<"Please input the number: "<<endl;
cin>>n;
x = float(n);
if (n%2 == 0){
    n = n-1;
}
cout<<"Sum of the first n odd numbers: "<<(x/2)*((2)+(2*(n-1)))<<endl<<endl;
}

void division_two(){
    int n;
    int counter = 0;
    cout<<"Please input a number: ";
    cin>>n;
    while(n!=1){
        n = (n/2);
        counter++;
    }
cout<<"The number of times "<<n<<" can be divided by 2 (using integer division) before reaching 1 is "<<counter<<endl<<endl;
}

int main()
{
    int choice = -1;

    while (choice!=0){
        cout<<"**********************************"<<endl;
        cout<<"********Counting in Maths*********"<<endl;
        cout<<"**********************************"<<endl;
        cout<<"1.Sum of first n counting numbers"<<endl;
        cout<<"2.Sum of first nth odd numbers"<<endl;
        cout<<"3.Number of division by two"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"**********************************"<<endl;
        cout<<"Enter your choice (0-3):";
        cin>>choice;

        switch (choice){
        case 1:
            sum();
            break;
        case 2:
            odd_sum();
            break;
        case 3:
            division_two();
            break;
        default:
            cout<<"Incorrect choice input"<<endl<<endl;
        }

    }
    return 0;
}
