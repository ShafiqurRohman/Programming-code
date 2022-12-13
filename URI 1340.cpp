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
const int mod = 1e9;
using namespace std;


void solve() {
    int n, type, a;
    while(cin >> n){
        bool bq = true, bpq = true, bs = true;
        queue<int>q;
        priority_queue<int>pq;
        stack<int>st;

        while(n--){
            cin >> type >> a;
            if(!bq && !bpq && !bs) continue;
            if(type == 1){
                q.push(a);
                pq.push(a);
                st.push(a);
            }
            else{
                bq = bq && (q.front() == a);
                q.pop();
                bpq = bpq && (pq.top() == a);
                pq.pop();
                bs = bs && (st.top() == a);
                st.pop();
            }
        }
        if(!bq && !bpq && !bs)cout << "impossible" << endl;
        else if((bq && bpq && bq == bpq) || (bq && bs && bq == bs) || (bpq && bs && bpq == bs))
            cout << "not sure" << endl;
        else if(bq) cout << "queue" << endl;
        else if(bpq) cout << "priority queue" << endl;
        else cout << "stack" << endl;
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
