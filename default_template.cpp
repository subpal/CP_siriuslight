#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0), cout << setprecision(10) << fixed;
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef long double ld;

const ll inf = 1e9+100, N = 2e5+5;
const ll INF = 1e18+100, MOD = 1e9+7;

ll powmod(ll a,ll b,ll m=MOD){ll r=1;while(b>0){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r;}
ll power(ll a,ll b){ll r=1;while(b>0){if(b&1)r=r*a;a=a*a;b>>=1;}return r;}
ll gcd(ll a,ll b){if(!b)return a;return gcd(b,a%b);}
ll inv(ll a, ll m = MOD){return powmod(a,m-2,m);}
ll lcm(ll a,ll b){return(a*b)/gcd(a,b);}

int main(){
	FIO;
	

}
