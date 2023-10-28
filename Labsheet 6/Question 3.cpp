/*Write a program that uses nested loops to input the marks of 5 students in 3 subjects and
calculate their total marks and average.*/
#include <iostream>

using namespace std;

int main()
{
    for(int num_students = 1; num_students<=5; num_students++){
            cout<<"Student "<<num_students<<endl;
    float total = 0.0;
        for(int subj = 1; subj<=3;subj++){
            cout<<"Enter mark for subject "<<subj<<" :";
            float mark;
            cin>>mark;
            total = total + mark;
        }
        cout<<"Student "<<num_students<<" has a total mark of "<<total<<endl;
        cout<<"Student "<<num_students<<" has an average mark of "<<total/3<<endl<<endl;
    }
    return 0;
}
