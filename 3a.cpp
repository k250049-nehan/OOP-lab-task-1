#include<iostream>
using namespace std;
int main(){
    int a,b,op;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"1: +"<<endl<<"2: -"<<endl<<"3: *"<<endl<<"4: /"<<endl;
    cout<<"Enter the number of operation u want to perform from above: ";
    cin>>op;

    if(op==1){
        cout<<a<<"+"<<b<<"=";
        while (b!=0){
    if(b>0){
        a++;
        b--;
    } 
    else{
        a--;
        b++;
    }
    }
        cout<<a<<endl;
    }
    else if(op==2){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    }
    else if(op==3){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
    else if(op==4){
        if(b!=0){
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
        }
        else{
            cout<<"Denominator cannot be zero."<<endl;
        }
    }
    else{
        cout<<"incorrect command chosen"<<endl;
    }
}