#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        int col = row;

        while(col <2*row) {
            
            cout<<col;
            col++;
            
        }
        cout<<endl;
        row++;

    }
    return 0;
}