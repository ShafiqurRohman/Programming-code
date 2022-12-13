#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n, int pos){
    int radixArr[100];
    int cnt[10];
    for(int i=0;i<=9;i++){
        cnt[i]=0;
    }
    for(int i=0;i<n;i++){
        cnt[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<=9;i++){
        cnt[i]+=cnt[i-1];
    }
    for(int i=n-1;i>=0;i--){
        radixArr[cnt[(arr[i]/pos)%10]-1]=arr[i];
        cnt[(arr[i]/pos)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=radixArr[i];
    }
}

void radix(int arr[], int n){
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int pos=1;mx/pos>0;pos=pos*10){
        countsort(arr, n, pos);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    radix(arr,n);
    cout<<"\nSorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}


