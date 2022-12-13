#include<bits/stdc++.h>
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
#define mpp          make_pair
#define Okay         0
#define pi           3.14159
#define endl    '\n'

const int mx = 1e7+100;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

bool ar[mx];
vector<int>prime;

void seive(){
    memset(ar,0,sizeof(ar));
    ar[0] = ar[1] = 1;
    for(int i=4; i<mx; i+=2)ar[i]=1;
    for(int i=3; i*i<mx; i+=2){
        if(ar[i]==0){
            for(int j=i*i ; j<mx; j+=(i+i)){
                ar[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3; i<=mx; i++){
        if(!ar[i])prime.pb(i);
    }
}

vector<int> primeFactorial(int n){
    vector<int>v;
    for(auto p : prime){
        if(1LL*p*p > n)break;
        if(n%p==0){
            v.pb(p);
            while(n%p==0){
                n /= p;
            }
        }
    }
    if(n>1)v.pb(n);
    return v;
}

void solve(){
    seive();
    int n;
    while(cin >> n and n){
        n = abs(n);
        vector<int> ans = primeFactorial(n);
        if(ans.size() <= 1){
            cout << -1 << endl;
        }
        else cout << ans.back() << endl;
    }
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    for(int i=1; i<=tst; i++)
        solve();
    return Okay;
}
