#include<iostream>
using namespace std;
int main(){
int a;
int prime=1;
cout<<"Enter a number: ";
cin>>a;
if(a<=1){
    prime=0;
}
else{
for(int i=2;i<a;i++){
    if(a%i==0){
        prime=0;
        break;
    }
}
}
if(prime==1){
    cout<<a<<" is a prime number"<<endl;
}
else{
    cout<<a<<" is not a prime number"<<endl;
}

return 0;
}