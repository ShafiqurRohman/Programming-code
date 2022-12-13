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

const int mx = 1e6+5;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

void solve(){
    int n;
    while(cin >> n and n){
        vector<int>v;
        stack<int>st;
        int a;
        while(cin >> a and a){
            v.pb(a);
            for(int i=1; i<n; i++){
                cin >> a;
                v.pb(a);
            }
            int ind = 0;
            for(int i=1; i<=n; i++){
                st.push(i);
                while(st.size() > 0 and v[ind] == st.top()){
                    ind++;
                    st.pop();
                }
            }
            if(st.size() != 0)cout << "No" << endl;
            else cout << "Yes" << endl;
            v.clear();
            while(!st.empty())st.pop();
        }
        cout << endl;
    }
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    for(int i=1; i<=tst; i++)
        solve();
    return 0;
}

