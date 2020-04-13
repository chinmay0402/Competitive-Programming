#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t;
 cin>>t;
 while(t--){
  ll n,a,b;
  cin>>n>>a>>b;
  char c='a';
  set<char>s;
  while(b--){
   s.insert(c);
   c++;
  }
  string str;
  for(auto x:s)
   str+=x;
  string ans;
  ll k=n;
  while(n>=0){
   n-=str.length();
   ans+=str;
  }
  if(ans.length()==k)
   cout<<ans<<"\n";
  else{
   ans=ans.substr(0,k);
   cout<<ans<<"\n";
  }
 }
 return 0;
}