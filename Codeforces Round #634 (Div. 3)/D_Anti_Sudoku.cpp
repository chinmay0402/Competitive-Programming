#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t;
 cin>>t;
 while(t--){
  string a[9];
  for(ll i=0;i<9;i++)
   cin>>a[i];
  if(a[0][0]!='1')
   a[0][0]='1';
  else
   a[0][0]='2';
   
  if(a[3][1]!='1')
   a[3][1]='1';
  else
   a[3][1]='2';
   
  if(a[1][3]!='1')
   a[1][3]='1';
  else
   a[1][3]='2';
    
  if(a[6][2]!='1')
   a[6][2]='1';
  else
   a[6][2]='2';
   
  if(a[4][4]!='1')
   a[4][4]='1';
  else
   a[4][4]='2';
   
  if(a[7][5]!='1')
   a[7][5]='1';
  else
   a[7][5]='2';
   
  if(a[2][6]!='1')
   a[2][6]='1';
  else
   a[2][6]='2';
  
  if(a[5][7]!='1')
   a[5][7]='1';
  else
   a[5][7]='2';
   
  if(a[8][8]!='1')
   a[8][8]='1';
  else
   a[8][8]='2';
   
  for(ll i=0;i<9;i++)
   cout<<a[i]<<"\n";
 }
 return 0;
}