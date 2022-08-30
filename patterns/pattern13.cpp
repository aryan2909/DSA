// display:
// ABC
// BCD
// CDE

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char ch='A';

    int row=1;
    while(row<=n){

        int col=1;
        while(col<=n){
            char ch='A'+row+col-2;
            cout<< ch<< " ";
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;

}