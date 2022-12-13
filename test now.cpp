#include<bits/stdc++.h>
using namespace std;

void printReverse(string s, int ind){
    if(s.size() == ind)return;
    printReverse(s, ind+1);
    cout << s[ind];
}

int main(){
    string s;
    cin >> s;
    printReverse(s, 0);
    return 0;
}
