#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[],int n,int a){
        int left,right,mid;
        left=0;
        right=n-1;
        while(left<=right){
            mid=(left+right)/2;
            if(arr[mid]==a)return mid+1;
            if(arr[mid]<a)left=mid+1;
            else right=mid-1;
        }
           return -1;
}

int main(){
       int n, a;
       cin >> n;
       int arr[n+5];
       for(int i=0;i<n;i++){
        cin >> arr[i];
       }
       cin >> a;
       int index = binarysearch(arr,n,a);
       if(index != -1)cout << "The value found in the array at index : " << index << endl;
       else cout << "Not Found" << endl;

        return 0;
}
