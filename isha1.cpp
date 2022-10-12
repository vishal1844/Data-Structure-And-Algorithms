#include<bits/stdc++.h>
using namespace std;  
#define ll long long 
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n,0),b(n,0);
    int onesa=0;
    int zeroa=0;
    int c=0;
    for(int i=0;i<n;++i){
       cin>>a[i]; 
       if(a[i]==0){
        zeroa++;
       }
       else if(a[i]==1)
       onesa++;
    } 
    int oneb=0;
    int zerob=0;
    for(int i=0;i<n;++i){
    cin>>b[i]; 
    if(b[i]==0)
      zerob++;
    else
     oneb++;
    }
    if(oneb==onesa && zeroa==zerob){
       cout<<"1"<<endl;
       return ;
    }  
    else{
     
        for(int i=0;i<n;++i){
            if(a[i]!=b[i]){
                if(a[i]==1)
                  c++;
            }
        }
    }
    cout<<c<<endl;
    return ;

}
int main()
{
    int t;
    cin>>t; 
    while(t--){
    solve();
    }
    return 0;
}