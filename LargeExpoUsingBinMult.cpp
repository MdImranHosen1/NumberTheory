#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define     Yes   printf("Yes\n")
#define     No    printf("No\n")
#define     YES   printf("YES\n")
#define     NO    printf("NO\n")
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mod 1000000007
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)

#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x; while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

const int lim = 1048576;
const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 5e5 + 5;
const int NN            = 1e6 + 5;

//when mod is 10^18 then we have to apply this approch

ll binMutiply(ll a,ll b)
{
  int ans=0;
  while(b>0)
  {
    if(b&1!=0)
    {
      ans=(ans+a)%mod;
    }
    a=(a+a)%mod;
    b>>=1;
  }
  return ans;
}

ll binExcIte(ll n,ll p)
{
  ll ans=1;
  while(p)
  {
    if((p&1)!=0)
    {
      ans=binMutiply(ans,n);
    }
    n=binMutiply(n,n);
    p>>=1;
  }
  return ans;
}


int main()
{
  ll n,p;
  cin>>n>>p;
  cout<<binExcIte(n,p);
}
