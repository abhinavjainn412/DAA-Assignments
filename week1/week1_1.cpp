#include<iostream>
using namespace std;
main(){
    int n,i,x=0,a[1000],ele,j,t,ll=0;
    cin>>t;
    for(j=0;j<t;j++){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>ele;
    for(i=0;i<n;i++){
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
    cout<<x<<"\n";
    x=0;
    }
    return 0;
}

