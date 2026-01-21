#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to find its factorial: ";
    cin>>n;
    if(n==0){
        n=1;
    }
    else{
        for(int i=n-1;i>=1;i--){
            n=n*i;
        }
    }
    cout<<"Factorial: "<<n<<endl;
    return 0;
}