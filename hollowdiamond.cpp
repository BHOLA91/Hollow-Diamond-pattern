#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of pattern ";
    int n,i,j;
    cin>>n;
    for( i=0;i<n;i++){
        for ( j=0;j<n-i-1;j++){
            cout<<" ";

        }
        cout<<"*";
        for (j=0;j<2*i-1;j++){
            cout<<" ";
        }
            
        if (i!=0){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--){
        for ( j=0;j<n-i;j++){
            cout<<" ";

        }
        cout<<"*";
        for (j=2*i-3;j>0;j--){
            cout<<" ";
        }
        if (i!=1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}