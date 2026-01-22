#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;
    
    int **a=new int*[r1];
    for(int i=0;i<r1;i++)
        a[i]=new int[c1];

    int **b=new int*[r2];
    for(int i=0;i<r2;i++)
        b[i]=new int[c2];

    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin>>a[i][j];

    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin>>b[i][j];

    if(r1==r2 && c1==c2){
        cout<<"Addition:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++)
                cout<<a[i][j]+b[i][j]<<" ";
            cout<<endl;
        }

        cout<<"Subtraction:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++)
                cout<<a[i][j]-b[i][j]<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<"Addition and subtraction not possible\n";
    }

    if(c1==r2){
        int **mul=new int*[r1];
        for(int i=0;i<r1;i++)
            mul[i]=new int[c2];

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                mul[i][j]=0;
                for(int k=0;k<c1;k++)
                    mul[i][j]+=a[i][k]*b[k][j];
            }
        }

        cout<<"Multiplication:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++)
                cout<<mul[i][j]<<" ";
            cout<<endl;
        }

        for(int i=0;i<r1;i++)
            delete[] mul[i];
        delete[] mul;
    }
    else{
        cout<<"Multiplication not possible\n";
    }

    for(int i=0;i<r1;i++)
        delete[] a[i];
    delete[] a;

    for(int i=0;i<r2;i++)
        delete[] b[i];
    delete[] b;

    return 0;
}