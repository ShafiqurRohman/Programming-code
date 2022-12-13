#include<bits/stdc++.h>
using namespace std;

void countSort(int ar[], int sz) {
    int sorted[10];
    int mx = ar[0];

    for (int i = 1; i < sz; i++) {
        mx = max(mx, ar[i]);
    }
    int cntAr[mx+1];
    for (int i = 0; i <= mx; i++) {
        cntAr[i] = 0;
    }

    for (int i = 0; i < sz; i++) {
        cntAr[ar[i]]++;
    }

    for (int i = 1; i <= mx; i++) {
        cntAr[i] += cntAr[i - 1];
    }

    for (int i = sz - 1; i >= 0; i--) {
        sorted[cntAr[ar[i]]-1] = ar[i];
        cntAr[ar[i]]--;
    }
      for (int i = 0; i < sz; i++) {
        ar[i] = sorted[i];
      }
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)cin >> ar[i];
    countSort(ar, n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}
