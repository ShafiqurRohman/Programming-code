#include<bits/stdc++.h>
using namespace std;

int ar[100];

void mergeArray(int left, int mid, int right){
    int leftLen = mid - left + 1;
    int rightLen = right - mid;

    int leftArray[leftLen];
    int rightArray[rightLen];

    for (int i = 0; i < leftLen; i++)
        leftArray[i] = ar[left + i];
    for (int i = 0; i < rightLen; i++)
        rightArray[i] = ar[mid + 1 + i];

    int l = 0, r = 0;
    int index = left;

    while (l < leftLen && r < rightLen) {
        if (leftArray[l] <= rightArray[r]) {
            ar[index++] = leftArray[l++];
        }
        else {
            ar[index++] = rightArray[r++];
        }
    }
    while (l < leftLen)
        ar[index++] = leftArray[l++];
    while (r < rightLen)
        ar[index++] = rightArray[r++];
}

void mergeSort(int left, int right){
    if(left < right){
        int mid = (left+right)/2;

        mergeSort(left, mid);
        mergeSort(mid+1, right);

        mergeArray(left, mid, right);
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    mergeSort(0, n-1);
    for(int i=0; i<n; i++)cout << ar[i] << " ";
    cout << endl;
    return 0;
}
