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

using namespace std;
const int cont = 10e6;
static const ll inf = 1e11;

vector<int>v;

int Maximum_Sum_Subarray(int n){
	int ans = 0, mx = 0;
	for(int i = 0; i < n; i++){
		mx = max(mx+v[i], 0ll);
   		ans = max(ans, mx);
	}
	if(ans == 0){
         return *max_element(all(v));
	}
	return ans;
}

int32_t main(){
    int tst;
    cin >> tst;
    while(tst--){
        int n;
        cin>>n;
        int a;
        for(int i =0; i<n; i++){
            cin>>a;
            v.pb(a);
        }
        cout<<Maximum_Sum_Subarray(n)<<endl;
        v.clear();
    }
    return Okay;
}
