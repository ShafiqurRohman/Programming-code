#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void selection_sort(int arr[],int n){
    int index;
    for(int i=0; i<n; i++){
        index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        if(index!=i){
            swap(arr[i], arr[index]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
