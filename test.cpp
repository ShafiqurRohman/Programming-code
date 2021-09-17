#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define s(v)       sort(v.begin(),v.end())
#define r(v)       reverse(v.begin(),v.end())
#define pf         printf
#define sf         scanf
#define GCD(x,y)   __gcd(x, y)
#define pb         push_back
#define ll         long long
#define lld        long double
#define vs         v.size()
#define ss         s.size()
#define ff         first
#define sd         second
#define mp         make_pair
#define py         cout<<"YES"<<endl;
#define pn         cout<<"NO"<<endl;
using namespace std;
void oacm(){
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        vector<int>v,vv;
        stack<int>st;
        queue<int>q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.pb(a);
            q.push(a);
        }
        int cnt=0,xx=0;
        s(v);
        while(!q.empty()){
            int x=q.front();
            q.pop();
            //cout<<x<<endl;
            if(x==v[cnt]){
                //cout<<x<<endl;
                vv.pb(x);
                cnt++;
            }
            else{
                //cout<<"ok"<<endl;
                while(!st.empty()){
                   int y=st.top();
                   if(y<=x){
                        //cout<<y<<endl;
                    vv.pb(y);
                    st.pop();
                   }
                   else break;
                }
                st.push(x);
            }
        }
        while(!st.empty()){
            vv.pb(st.top());
            st.pop();
        }
        bool b=true;
        for(int i=1;i<vv.size();i++){

             if(vv[i]<vv[i-1]){
                    //cout<<i<<" ---> "<<vv[i]<<"   "<<vv[i-1]<<endl;
                cout<<"no"<<endl;
                b=false;
                break;
             }
        }
        if(b)cout<<"yes"<<endl;

    }
}
int main(){
      fast
      //int t;
      //cin>>t;
      //while(t--){
        oacm();

      //}

}
