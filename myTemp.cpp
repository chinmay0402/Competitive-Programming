//author: chinmay0402
//One day your whole life will flash before your eyes, make sure you make it worth watching
#include<bits/stdc++.h>
using namespace std;

//policy based data structures
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

#define ll long long int
#define lld long double
#define fl float
#define vs vector<string>
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define fst first
#define scd second
#define sll set<ll>
#define mll map<ll,ll>
#define flash ios_base::sync_with_base(false);cin.tie(NULL);
#define INF (ll)10000000000000000
#define MOD (ll)1000000007
#define pb push_back
#define mll map<ll,ll>
#define test ll t;cin>>t;while(t--)
#define sortv(v) sort(v.begin(),v.end())
#define max3(a,b,c) max(a,max(b,c))
#define lcm(a,b) (a*b/__gcd(a,b))

#define forn(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define fornr(i,n) for(ll i=n-1;i>=0;i--)
#define forab(i,a,b,c) for(ll i=a;i<=b;i+=c)

template<typename T>
void read(T &x){
 cin>>x;
}
template<typename T,typename T1>
void read(T &x, T1 &y){
 cin>>x>>y;
}
template<typename T,typename T1, typename T2>
void read(T &x, T1 &y, T2 &z){
 cin>>x>>y>>z;
}
template<typename T,typename T1, typename T2, typename T3>
void read(T &x, T1 &y, T2 &z , T3 &a){
 cin>>x>>y>>z>>a;
}
template<typename T>
void reada(T oneD,ll n){
 for(ll i=0;i<n;i++)
  cin>>oneD[i];
}
template <typename T>
void readv(vector< T > &oneD,ll n){
 forn(i,n){
  ll x;
  read(x);
  oneD.push_back(x);
 }
}

#define iread1(n) ll n;read(n);
#define iread2(n,m) ll n,m;read(n,m);
#define iread3(x,y,z) ll x,y,z;read(x,y,z);

ll gcd(ll a, ll b){
 if(a==0)
  return b;
 else
  return gcd(b%a,a);
}

ll gcdExt(ll a,ll b, ll &x, ll &y){
 if(a==0){
  x=0;
  y=1;
  return b;
 }
 ll x1,y1;
 ll gcd=gcdExt(b%a,a,x1,y1);
 x=y1-(b/a)*x1;
 y=x1;
 return gcd;
}

ll pwr(ll a, ll b){
 ll res=1;
 while(b>0){
  if(b&1)
   res=res*a;
  a*=a;
  b>>=1;
 }
 return res;
}

ll pwrm(ll a, ll b, ll m){
 a%=m;
 ll res=1;
 while(b>0){
  if(b&1)
   res=res*a%m;
  a=a*a%m;
  b>>=1;
 }
 return res;
}

ll pwrm_which_works_too(ll a, ll b, ll m){
 a%=m;
 if(a==0)
  return 0;
 else if(b==0)
  return 1;
 else if(b&1)
  return (a*pwrm(a,b/2,m)%m*pwrm(a,b/2,m)%m)%m;
 else
  return (pwrm(a,b/2,m)%m*pwrm(a,b/2,m)%m)%m;
}

ll no_of_divisors(ll n){ 
 ll c = 0; 
 for (ll i = 1; i <= sqrt(n); i++) { 
  if (n % i == 0){ 
   if(n/i==i)
    c=c+1;
   else
    c=c+2;
  }
 }
 return c; 
} 

vector<bool>sieve(1000000,true);
void Sieve(){
 sieve[0]=false;
 sieve[1]=false;
 for(ll i=2;i*i<=1000000;i++){
  if(sieve[i]==true){
   for(ll j=i*i;j<1000000;j+=i)
    sieve[j]=false;
  }
 }
}

vll sieve_spf(1000001);
void Sieve_spf(){
 ll n=1000001;
 
 forn(i,n)
  sieve[i]=i;
 
 sieve[0]=-1;
 sieve[1]=-1;
 
 forab(i,2,n,2)
  sieve[i]=2;
 
 forab(i,3,n,2)
  if(sieve[i]==i)
   forab(j,i*i,n,i)
    if(sieve[j]==j)
     sieve[j]=i;
}


int main(){
 
 #ifdef ENABLE_FILE_IO
 freopen("in", "r", stdin);
 freopen("out", "w", stdout);
 #endif

 //START OF PROGRAM LOGIC
 
 //END OF PROGRAM LOGIC
 return 0;
}