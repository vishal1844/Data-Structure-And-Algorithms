#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    string a,b;
    cin>>a;
    cin>>b;
    int i,j,k=0,l,t=0,m;
    int n=a.size();
    //map<char,int>mp;
    m=b.size();
    if(a==b) cout<<"="<<endl;
    // else if(n==m){
    //         if((a[n-1]=='S'&&b[n-1]=='L')||(a[n-1]=='S'||b[n-1]=='M'))
    //         cout<<"<"<<endl;
    //         else if((a[n-1]=='L'&&b[n-1]=='S')||(a[n-1]=='L'&&b[n-1]=='M'))
    //         cout<<">"<<endl;
    //         else if((a[n-1]=='M'&&b[m-1]=='S'))
    //         cout<<">"<<endl;
    //         else
    //         cout<<"<"<<endl;
    // }
    else{
        for(i=0;i<n;i++){
            if(a[i]=='X') t++;
        }
        for(i=0;i<m;i++){
            if(b[i]=='X') k++;
        }
        if(a[n-1]=='S'&&b[m-1]=='S'){
            if(t>k){
                cout<<"<"<<endl;
				//cout<<rjj";
            }
            else
            cout<<">"<<endl;
        }
		else if(((a[n-1]=='L')&&(b[m-1]=='L'))||(a[n-1]=='M'&&b[m-1]=='M')){
			 if(t>k){
                cout<<">"<<endl;
				//cout<<"hekp";
            }
            else
            cout<<"<"<<endl;
		}
        else if((a[n-1]=='S'&&b[m-1]=='L')||(a[n-1]=='S'&&b[m-1]=='M'))
            cout<<"<"<<endl;
        else if((a[n-1]=='L'&&b[m-1]=='S')||(a[n-1]=='L'&&b[m-1]=='M'))
            cout<<">"<<endl;
        else if((a[n-1]=='M'&&b[m-1]=='S'))
            cout<<">"<<endl;
        else
            cout<<"<"<<endl;
			//cout<<"ggg";
        
        
    } 
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
