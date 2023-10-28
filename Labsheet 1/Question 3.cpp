/*Write a program that asks the user his id number (use a simple integer value), score in
CSE1017Y and CSE1019Y and output the user’s name with his average score. */

#include <iostream>

using namespace std;

int main()
{
    string Stud_ID;
    int score1,score2;

    cout<<"Please enter your ID number:"<<endl;
    cin>>Stud_ID;
    cout<<"Please enter your score in CSE1017Y:"<<endl;
    cin>>score1;
    cout<<"Please enter your score in CSE1019Y:"<<endl;
    cin>>score2;

    cout<<"ID:"<<Stud_ID<<endl;
    cout<<"Your score in CSE1017Y:"<<score1<<endl;
    cout<<"Your score in CSE1019Y:"<<score2<<endl;
    cout<<"Your average score is :"<<((score1+score2)/2)<<endl;

    return 0;
}
