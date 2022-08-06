#include <iostream>

using namespace std;

int main() {
    int r, c;
    cout << " Enter number of rows ";
    cin >> r;

    cout << " Enter Number of columns. ";
    cin >> c;

    int **matrix=new int*[r];

    for( int i=0; i< r ; i++){
        matrix[i]=new int[c];
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << " Enter the element " << i << ":" << j;
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
             cout<< matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}