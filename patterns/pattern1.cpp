// display pattern like: 
// ***
// ***
// ***


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"entre the number of stars you want in each row and coloumn: ";
    cin>>n;

    int i=1;    //i is for rows

    while(i<=n){
        int j=1;    //j is for coloumns
        while(j<=n){

            cout<<"*";
            j=j+1;
        }

        cout<<endl;
        i=i+1;
    }
}