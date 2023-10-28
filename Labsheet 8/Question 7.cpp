/*Write a function that takes as parameter the marks scored by a student in a module and returns
the grade obtained, based on the following criteria:

Marks>=70 : A
60<=Marks <70: B
50<=Marks < 60: C
40<= Marks <50: D
Marks<40: F

Write the required main function code to allow a user to input the marks of a student and the
program displays the grade of the student.
Note: use multiple return statements.*/
#include <iostream>

using namespace std;

char getGrade(int marks)
{
    switch (marks){
        case 70 ... 100:
            return 'A';
            break;
        case 60 ... 69:
            return 'B';
            break;
        case 50 ... 59:
            return 'C';
            break;
        case 40 ... 49:
            return 'D';
            break;
        default:
            return 'F';
            break;
    }
}

int main()
{
    int the_mark;
    cout<<"Please input mark"<<endl;
    cin>>the_mark;

    cout<<getGrade(the_mark);
    return 0;
}
