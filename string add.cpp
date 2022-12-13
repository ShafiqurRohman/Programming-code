#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs             v.size()
#define ss             s.size()
#define sot(v)       sort(v.begin(),v.end())
#define pii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay         0
const int m = 10+10e7;
static ll int inf = 1e18;
using namespace std;

string doSum(string a, string b){
    if(a.size() < b.size())swap(a, b);

    int j = a.size()-1;
    for(int i=b.size()-1; i>=0; i--, j--)a[j]+=(b[i]-'0');

    for(int i=a.size()-1; i>0; i--){
        if(a[i] > '9'){
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9'){
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}


int main(){

string a,b;
char c;
cin>>a>>c >> b;
cout<<doSum(a,b)<<endl;

    return Okay ;
}
