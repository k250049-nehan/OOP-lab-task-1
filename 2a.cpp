#include<iostream>
using namespace std;
int main(){
    int pf,oop,dld,ict;
    int total,avg;
    cout<<"Enter marks in PF: ";
    cin>>pf;
    cout<<"Enter marks in OOP: ";
    cin>>oop;
    cout<<"Enter marks in DLD: ";
    cin>>dld;
    cout<<"Enter marks in ICT: ";
    cin>>ict;

    total=pf+oop+dld+ict;

    avg=(pf+oop+dld+ict)/4;

    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average Marks: "<<avg<<endl;

    if(avg>=90){
        cout<<"Grade A"<<endl;
    }
    else if(avg>=80 && avg<=89){
        cout<<"Grade B"<<endl;
    }
    else if(avg>=70 && avg<=79){
        cout<<"Grade C"<<endl;
    }
    else if(avg>=60 && avg<=69){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Grade F"<<endl;
    }

    return 0;
}