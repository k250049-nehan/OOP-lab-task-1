#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i];
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<endl<<"Number of even numbers in the array: "<<even<<endl;
    cout<<"Number of odd numbers in the array: "<<odd<<endl;
    return 0;
}