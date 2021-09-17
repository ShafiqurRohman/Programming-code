#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void bubble_sort(int arr[],int n){
int i,j,temp;
int cnt = 0;
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
                cnt++;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
    cout << cnt << endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
return 0;
}
