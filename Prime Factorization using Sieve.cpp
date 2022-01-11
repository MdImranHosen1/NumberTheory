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

vector<int>prime(N, -1);
vector<int>lw(N, 0);
vector<int>hg(N, 0);
int solve()
{
  prime[0] = prime[1] = 1;
  for (int i = 2; i < N; ++i)
  {
    if (prime[i] == -1) {
      lw[i] = hg[i] = i;
      for (int j = i * 2; j < N; j += i)
      {
        prime[j] = 1;
        hg[j] = i;
        if (lw[j] == 0)
        {
          lw[j] = i;
        }
      }
    }
  }
  int n;
  cin >> n;
  std::map<int, int> map;

  while (n > 1)
  {
    int prime_factor = hg[n];
    while (n % prime_factor == 0)
    {
      n /= prime_factor;
      map[prime_factor]++;
    }
  }
  for (auto a : map)
  {
    cout << a.first << " " << a.second << endl;
  }

  return 0;
}

int main() {
  ll i, test = 1;
  //cin>>test;
  for (i = 0; i < test; ++i)
  {
    solve();
  }
  return 0;
}


