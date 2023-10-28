/*◦ A function printMatrix() has as parameters a matrix and number of rows and displays the
elements in the form of a table. The number of columns in the matrix is 5.*/


#include <iostream>
using namespace std;

void printMatrix(int thematrix[][5], int n){
for(int i = 0; i<n; i++){
    cout<<thematrix[i][0]<<" "<<thematrix[i][1]<<" "<<thematrix[i][2]<<" "<<thematrix[i][3]<<" "<<thematrix[i][4]<<endl;
}

}
/*◦ A function inputMatrix() that has as parameters a matrix M and an integer n1, and it performs
the input of a matrix of size n1x5.*/
void inputMatrix(int M[][5], int n1){
for(int i = 0; i<n1; i++){
    for(int j = 0; j<5;j++){
        cout<<"Input "<<i+1<<","<<j+1<<endl;
        cin>>M[i][j];
    }
}
}

/*◦ A function sumMatrix() to find the sum of two matrices of 5 columns. The number of rows
should be a parameter.*/
void sumMatrix(int A[][5], int B[][5], int Total[][5], int num_rows){
    for(int i = 0; i<num_rows;i++){
        for(int j = 0;j<5;j++){
            Total[i][j] = A[i][j]+B[i][j];
        }
        cout<<endl;
    }
}




int main()
{
    int n;

    cout<<"Input n"<<endl;
    cin>>n;
    int A[n][5];
    int B[n][5];

    inputMatrix(A,n);
    inputMatrix(B,n);

    int Out[n][5];
    sumMatrix(A,B,Out,n);

    printMatrix(Out,n);


    return 0;
}

