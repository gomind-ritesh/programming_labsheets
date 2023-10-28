/*Write a program that will allow a user to input a set of numbers (using 0
to stop input). The program will then calculate the square of each of the
number and store the numbers and their squares in a file named
Squares.txt, in a tabular format. Suppose user inputs 3 5 1 7 9 0, the file
Squares.txt should contain:
Number Square
3 9
5 25
1 1
7 49
9 81*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int nums, numsqr;
    string line;

    ofstream filewriter;

    cout<<"Input a series of numbers. Use 0 to terminate"<<endl;
    filewriter.open("C:\Users\User\Desktop\Programming Labsheets\Labsheet 7 files\Squares.txt");
    filewriter<<"Number       Square"<<"\n";
    while (nums !=0){
        cin>>nums;
        if (nums!=0){
            numsqr = nums*nums;
        filewriter<<nums<<"            "<<numsqr<<"\n";

        }

    }
    filewriter.close();
    return 0;
}
