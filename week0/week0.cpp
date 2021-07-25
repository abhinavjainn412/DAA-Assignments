#include<iostream>
using namespace std;
main(){
    int n,i,x=0,a[1000],ele,j,ll=0;
    cout<<"enter size of array - ";
    cin>>n;
    cout<<"enter element - ";
    cin>>ele;
    cout<<"enter elements -";
    for(i=0;i<n;i++){
        cin>>a[i];
        x++;
        if(a[i]==ele){
            cout<<"Present ";
            break;
        }
        else
            ll++;
    }
    if(ll==n){
        cout<<"Not Present ";
    }
    cout<<x;
    return 0;
}
