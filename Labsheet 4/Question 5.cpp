/*Write a program that allows as input the number of years of service of an employee and his salary.
The program should display whether the employee is eligible for a free car, the engine capacity of
the car and the optional car allowance.
Note: No employee of the company earns less than Rs 5000 or more than Rs 100,000. Your programs
should check for these and display an error accordingly.*/
#include <iostream>

using namespace std;

int main()
{
    int salary, years;
    cout<<"Please input your salary"<<endl;
    cin>>salary;

    while (salary<5000 || salary > 100000){
        cout<<"Salary written is out of bounds. Input again"<<endl;
        cin>>salary;
    }

    cout<<"Please input the number of years you have been in service"<<endl;
    cin>>years;

    switch (salary){
    case 75000 ... 100000:
        cout<<"Car Engine Capacity = 2000 and Car Allowance = 10000"<<endl;
        break;
    case 60000 ... 74999:
         cout<<"Car Engine Capacity = 1800 and Car Allowance = 8000"<<endl;
        break;
    case 50000 ... 59999:
        if (years>=10){
             cout<<"Car Engine Capacity = 1800 and Car Allowance = 8000"<<endl;
        }
        else{
            cout<<"Car Engine Capacity = 1600 and Car Allowance = 6000"<<endl;
        }
        break;
    case 40000 ... 49999:
         if (years>=20){
             cout<<"Car Engine Capacity = 1500 and Car Allowance = 5000"<<endl;
        }
        else{
            cout<<"Not eligible for a free car"<<endl;
        }
        break;
    case 30000 ... 39999:
            if (years>=25){
             cout<<"Car Engine Capacity = 1400 and Car Allowance = 4000"<<endl;
        }
        else{
            cout<<"Not eligible for a free car"<<endl;
        }
    default:
        cout<<"Not eligible for a free car"<<endl;
    }

    return 0;
}
