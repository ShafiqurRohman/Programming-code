#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
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
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e5+5;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

int n, w;
int val[105], wet[105];
int mem[mx][105];

int dp(int ind, int w){
    if(ind == n or w == 0)return 0;
    int &ret = mem[w][ind];
    if(ret != -1)return ret;
    if(wet[ind] <= w){
        ret = max(val[ind]+dp(ind+1, w-wet[ind]), dp(ind+1, w));
    }
    else{
        ret = dp(ind+1, w);
    }
    return ret;
}

void solve(){
    cin >> n >> w;
    for(int i=0; i<n ;i++)cin >> wet[i] >> val[i];
    memset(mem, -1, sizeof mem);
    cout << dp(0, w) << endl;
}

int32_t main(){
   // Fast;
    int tst;
//    cin >> tst;
//    for(int i=1; i<=tst; i++)
        solve();

    return Okay;
}
