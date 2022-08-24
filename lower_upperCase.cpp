#include<iostream>
using namespace std;

int main(){

    char a;
    cout<< "Enter any string"<< endl;
    cin>> a;
     if(a>='A' && a<='Z'){
        cout<< "the string is in upper case" << endl;
     }
     else if(a>='1' && a<='9'){
        cout<< "it is a digit." <<endl;
     }

     else{
        cout<< "it is lower case string"<< endl;

     }
     return 0;


}