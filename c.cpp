#include <bits/stdc++.h>
using namespace std; 
using namespace std::chrono;

typedef long long int ll; typedef long double ld;
typedef pair<ll,ll> pll; typedef vector<pair<ll,ll> > vpll; typedef vector<ll> vll; typedef vector<vector<ll> > vvll;
typedef vector<char> vcr; typedef vector<vector<char> > vvcr; typedef vector<string> vstr; typedef vector<vector<string> > vvstr;
typedef long long int* iptr; typedef char* cptr;

#define endl "\n"
#define umap  unordered_map
#define uset  unordered_set
#define lb  lower_bound
#define ub  upper_bound
#define pb  push_back
#define mp  make_pair
#define all(V) (V).begin(),(V).end()
#define allr(V) (V).rbegin(),(V).rend()
#define some(V,X,Y) (V).begin()+X,(V).end()+Y
#define somer(V,X,Y) (V).rbegin()+X,(V).rend()+Y
#define sz(X) (ll)X.size()
#define rep(X,A,B) 	for(auto X=A;X!=B;(B>A?X++:X--))
#define trav(X,V) for(auto &X:V)
#define fio	ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ss	second
#define ff	first
#define max3(A,B,C) max(max((A),(B)),(C))
#define max4(A,B,C,D) max(max((A),(B)),max((C),(D)))
#define min3(A,B,C) min(min((A),(B)),(C))
#define min4(A,B,C,D) min(min((A),(B)),min((C),(D)))
#define ci(X) ll X; cin>>X
#define cii(X,Y) ll X,Y; cin>>X>>Y
#define ciii(X,Y,Z) ll X,Y,Z; cin>>X>>Y>>Z

template<typename L,typename R > istream& operator>> (istream& in,pair<L,R> &P) { in>>P.first>>P.second; return in; }
template<typename T> istream& operator>> (istream& in,vector<T> &V) {for(auto &elem : V) in>>elem; return in;}
template<class L,class R> ostream& operator << (ostream& out, pair<L, R> const &val){ if(out.rdbuf()==cout.rdbuf()) return (out<<val.first<<" "<<val.second); else return (out << "{" << val.first << "," << val.second << "}"); }
template<class Ch, class Tr, class Container> basic_ostream <Ch, Tr> & operator << (basic_ostream <Ch, Tr> & os, Container const& X) { if ( os.rdbuf() == cout.rdbuf()){ for(auto& y : X) os<<y<<" "; return os;} else{ os << "[ "; for(auto& y : X) os<<y<<" "; return os << "]";} }
#ifndef ONLINE_JUDGE
#include "./getio/debug.h"
#else
#define debug(...) 42
#define error(...) 42
#define console(...) 42
#endif
template<typename T> void d0(T t){ cout<<t<<" "; }
template<typename T> void dall(T t){ cout<<t<<endl; }
template<typename T, typename... Args> void dall(T t, Args... args) { cout<<t<<" "; dall(args...); }

const ll mod=1e9+7; const ll inf=1e15-1;
const ll MAXN=1e6; const ld eps=1e-8;

ll gcd(ll A,ll B) {if(B==0) return A; return gcd(B,A%B);}
ll pwr(ll A, ll B) {ll ans = 1; while (B){ if (B & 1) ans = (ans * A) % mod; B = B / 2; A = (A * A) % mod;} return ans;}
ll multiplymod(ll A,ll B){ ll res = 0;A %= mod; while (B){if (B & 1) res = (res + A) % mod; A = (2 * A) % mod; B >>= 1; } return res; }
ll modinv(ll n,ll p=mod){ return pwr(n, p - 2); }
ll binarysearch(vll ARR, ll L, ll R, ll X){ if (R >= L) { ll mid = L + (R - L) / 2; if (ARR[mid] == X) return mid; else if (ARR[mid] > X) return binarysearch(ARR, L, mid - 1, X); else return binarysearch(ARR, mid + 1, R, X); } return -1; }
ll fact(ll N , ll MOD=mod){ ll P=1;if (N == 0) return 1; else { for(int i=1;i<=N;i++) {P*=i; P=P%MOD;} return P; }}
int digits(ll N,ll base=2){ if(N==0) return 1; else if(base==10) return floor(log10(N))+1;else return floor(log2(N))+1; }

void solve(){
  
}

int main(){
	fio;
  cout << fixed << setprecision(15);
  cerr << fixed << setprecision(5);
  #ifndef ONLINE_JUDGE
  freopen("./getio/input.ini","r",stdin);
  freopen("./getio/output.out","w",stdout);
  freopen("./getio/error.log","w",stderr);
  auto start = high_resolution_clock::now();
  #endif
  ll TEST_CASES=1,CASE_NO=1;
  cin>>TEST_CASES; //delete this if there is single test
  while(TEST_CASES--){
    error(CASE_NO);
    solve();CASE_NO++;
    console(' ');
  }
  #ifndef ONLINE_JUDGE
  auto stop = high_resolution_clock::now();auto duration = duration_cast<milliseconds>(stop - start);cerr << "Time taken: "<< duration.count() << " ms" << endl;
  #endif
	return 0;
}