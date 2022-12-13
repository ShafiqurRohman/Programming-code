#include<bits/stdc++.h>
using namespace std;

//debugger
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}

//All define
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define ii           pair<int, int>
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define Okay         0

#define endl         '\n'
#define F            first
#define S            second
#define rall(a)      (a).rbegin(),(a).rend()
#define sz(x)        (int)x.size()

//Number theory related
const int MOD = 1e9+7;
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
inline void normal(int &a) { a %= MOD; (a < 0) && (a += MOD); }
inline int modMul(int a, int b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline int modAdd(int a, int b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline int modSub(int a, int b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline int modPow(int b, int p) { int r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline int modInverse(int a) { return modPow(a, MOD-2); }
inline int modDiv(int a, int b) { return modMul(a, modInverse(b)); }

//constant variable
const int MX = 1e5+1000;
const int inf = 1e18;
const int mod = 1e9+7;
const double PI = acos(-1);

//code here start

    int mem[105][105];
    int dfs(vector<vector<int>>& m, int r, int c){
        int n = m.size();
        if(r<0 or r>=n or c<0 or c>=n)return 100000;
        int &ret = mem[r][c];
        if(ret != INT_MAX)return ret;
        ret = m[r][c];
        if(r==(n-1))return ret;
        ret += min({dfs(m, r+1, c-1), dfs(m, r+1, c), dfs(m, r+1, c+1)});
        return ret;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        for(int i=0; i<105; i++){
            for(int j =0; j<105; j++)mem[i][j] = INT_MAX;
        }
        for(int i=0; i<matrix[0].size(); i++){
            ans = min(ans, dfs(matrix, 0, i));
        }
        return ans;
    }

void solve(){
    vector<vector<int>>v(3);
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            int a;
            cin >> a;
            v[i].pb(a);
        }
    }
    cout << minFallingPathSum(v);
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    for(int i=1; i<=tst; i++)
        solve();
    return Okay;
}
