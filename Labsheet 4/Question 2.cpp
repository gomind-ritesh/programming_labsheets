/*A company pays its workers on a weekly basis, based on number of years of service and number of
hours worked in the week as follows:
 Workers having a minimum of 15 years of service are paid Rs 200 per hour for the 1 st 40
hours and Rs 300 per hour for up to another 20 hours.
 Other workers are paid at Rs 150 per hour for the first 45 hours and Rs 250 per hour for
up to another 15 hours.

Write a program that allows as input the number of years of service of a worker and the total
number of hours worked in a week and displays the total salary earned by the worker for the week.
Workers cannot work in the company for more than 30 years and they cannot work for more than
60 hours in a week. Your program should display appropriate error messages in case of
unreasonable data being input.*/
#include <iostream>

using namespace std;

int main()
{
    int years_worked;
    float hours_worked,salary;

    cout<<"Please input the number of years you have worked for this company: ";
    cin>>years_worked;
    while(years_worked>30){
        cout<<"Unreasonable number of years input. Please input again: ";
        cin>>years_worked;
    }

    cout<<"Please enter the number of hours you have worked this week: ";
    cin>>hours_worked;
    while(hours_worked>60){
        cout<<"Unreasonable amount of hours input. Please input again: ";
        cin>>hours_worked;
    }

    if (years_worked>=15){
        if (hours_worked>40){
            salary = (40*200)+(300*(hours_worked-40));
        }
        else{
            salary = (hours_worked*200);
        }
    }
    else{
         if (hours_worked>45){
            salary = (45*150)+(250*(hours_worked-45));
        }
        else{
            salary = (hours_worked*150);
        }
    }
    return 0;

    cout<<"Your wages this week are: "<<salary;
}
