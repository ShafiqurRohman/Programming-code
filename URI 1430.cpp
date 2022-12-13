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
    string s;
    while(getline(cin,s)){
        stack<char>st;
        if(s=="*")break;
        int ans = 0;
        for(int i=0; i<ss; i++){
            if(s[i]!='/')st.push(s[i]);
            if(s[i]=='/' and !st.empty()){
                double cnt = 0.0;
                while(!st.empty()){
                    if(st.top()=='W')cnt += 1;
                    if(st.top()=='H')cnt += .5;
                    if(st.top()=='Q')cnt += 0.25;
                    if(st.top()=='E')cnt += 0.125;
                    if(st.top()=='S')cnt += 0.0625;
                    if(st.top()=='T')cnt += 0.03125;
                    if(st.top()=='X')cnt += 0.015625;
                    st.pop();
                }
                if(cnt == 1)
                    ans++;
            }
        }
        cout<<ans<<endl;
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

