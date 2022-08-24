#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int i=1;
    int n;
    cout<<"enter the number till you want the sum" << endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<< sum<<endl;
    return 0;
}