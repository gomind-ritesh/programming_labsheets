/*Write a program that allows you to input the name of a file and it opens
the file for output. The program allows you to continuously input an
integer representing a student id number (a string), followed by three
values of float types representing marks in three tests. The data are to be
saved in the file. Perform a change of line after the information for each
student. The program stops when you give an empty string for student id.
Note: an empty string has value “”.*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream filewriter;
    string studentID = "x";
    string filename;
    float test1,test2,test3;

    cout<<"Enter the name of the file you want to create: ";
    cin>>filename;
    cout<<endl;
    filewriter.open(filename);
    filewriter<<"ID          Test1     Test2     Test3"<<endl;
    do{
            cout<<"Enter student ID: ";
            cin>>studentID;
            if (studentID !=""){
                     cout<<"Enter mark for test 1: ";
                     cin>>test1;
                     cout<<"Enter mark for test 2: ";
                     cin>>test2;
                     cout<<"Enter mark for test 3: ";
                     cin>>test3;

        filewriter<<studentID<<"     "<<test1<<"     "<<test2<<"     "<<test3<<"\n";
            }
    }
    while(studentID !="");


    filewriter.close();

    return 0;
}
