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

const int mx = 1e8+100;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;
bitset<mx> is_prime;
vector<int> prime;

void seive(){
    for ( int i = 3; i <= mx; i += 2 ) is_prime[i] = 1;
    int sq = sqrt ( mx );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= mx; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
    is_prime[2] = 1;
    prime.pb(2);

    for ( int i = 3; i <= mx; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.pb ( i );
    }
}

long long primeFactorial(long long n){
    long long  ans = 1*1LL;
    for(auto p : prime){
        if(1LL*p*p > n)break;
        if(n%p==0){
            int sumCnt = 1LL, powCnt = 1LL;
            while(n%p == 0){
                powCnt *= p;
                sumCnt += powCnt;
                n /= p;
            }
            ans *= sumCnt;
        }
    }
    if(n>1LL){
        ans *= (1LL + n);
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    cout << primeFactorial(n) - n<< endl;
}

int32_t main(){
    Fast;
    seive();
    int tst;
    cin >> tst;
    for(int i=1; i<=tst; i++)
        solve();
    return Okay;
}

