#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
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

void printBit(int a)
{
	for(int i=10;i>=0;i--)
	{
		cout<<((a>>i)&1);
	}
	cout<<endl;
}
int main()
{
	int n=9;
	printBit(n);

	int setindex =2;
	//cheak set or not
	if((1<<setindex)&n)
	{
		cout<<"set bits"<<endl;
	}
	else 
	{
		cout<<"Not set bits"<<endl;
	}
	//after set
	int a=((1<<2)|n);
	printBit(a); 
	//after reset
	int b=(~(1<<2)&a);
	printBit(b);
	//afterToggle
	int c=((1<<2)^b);
	printBit(c);
	int d=((1<<2)^c);
	printBit(d);

	// count how much digit set in the integer
	int ct=0;
	 for(int i=31;i>=0;i--)
	 {
	 	if(((1<<i)&c)!=0)
	 	{
			ct++;
	 	}
	 }
	 cout<<ct<<endl;
	 // count how much digit set in the integer build in function

	 ct=__builtin_popcount(c);
	 cout<<ct<<endl;

	 //for long long built in function
	 cout<<__builtin_popcountll((1LL<<31)-1)<<endl;

	 //even or odd
	 int number=20;
	 if(number&1==1)
	 	cout<<number<<" is Odd"<<endl;
	 else 
	 	cout<<number<<" is Even"<<endl;
	 number=21;
	 if(number&1==1)
	 	cout<<number<<" is Odd"<<endl;
	 else 
	 	cout<<number<<" is Even"<<endl;

	 //divid and multiply into 2
	 number =6;
	 cout<<(number>>1)<<endl;
	 cout<<(number<<1)<<endl;
	 number =5;
	 cout<<(number>>1)<<endl;
	 cout<<(number<<1)<<endl;

	 //uppercase to lower and lower to upper case



}