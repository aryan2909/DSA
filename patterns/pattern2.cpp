// display pattern like: 
// 111
// 222
// 333

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number of rows and coloumns: ";
    cin>>n;


    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<i;

            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}