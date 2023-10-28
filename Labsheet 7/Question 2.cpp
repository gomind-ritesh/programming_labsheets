/*Write a program to read the contents of the file Squares.txt and display
the contents on the screen in the same format as in Question 1.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string output;
    ifstream filereader;

    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\Squares.txt");
    while (!filereader.eof()){
        getline(filereader,output);
        cout<<output<<endl;
    }
    return 0;
}
