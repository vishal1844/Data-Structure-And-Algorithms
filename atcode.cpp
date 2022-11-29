#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,l=1,m,t=0;
  unordered_set<int>st;
  int n;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
  }
  if(st.size()==1) cout<<0<<endl;
  else{
    while(st.size()!=1){
        //sort(st.begin(),st.end());
       // cout<<"helo";
       m=-1;
      for(auto itr:st){
        if(m<itr){
            m=itr;
        }
      }

        if(m%2==0){
          k=m/2;
          st.erase(m);
          st.insert(k);
          t++;
          //break;
        }
        else if(m%3==0){
          k=m/3;
          st.erase(m);
          st.insert(k);
          t++;
         // break;
        }
        else if(m%2!=0&&m%3!=0){
            cout<<-1<<endl;
            //cout<<"hello";
            l=0;
            break;
        } 
      }
    //   if(l==0)
    //   break;
    }
    if(l==1){
      cout<<t<<endl;
    }
      return 0;
    }
          
      