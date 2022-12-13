#include<bits/stdc++.h>
using namespace std;

int findPossibleWays(int coins[], int sum, int size){
    int arr[size+1][sum+1];
    for(int i = 0; i < size + 1; i++)
        arr[i][0] = 1;

    for(int j = 0; j < sum + 1; j++)
        arr[0][j] = 0;

    for(int i = 1; i < size + 1; i++)
        for(int j = 1; j < sum + 1; j++)
            if(coins[i - 1] > j)
                arr[i][j] = arr[i - 1][j];
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - coins[i - 1]];

    return arr[size][sum];
}

int main(){
    int ncoin;
    cin >> ncoin;
    int coins[ncoin];
    for(int i=0; i<ncoin; i++)cin >> coins[i];
    int sum;
    cout << "Enter the sum : ";
    cin >> sum;

    cout << "Number of possible ways in which " << sum
        << " can be made is " << findPossibleWays(coins, sum, ncoin)
        << endl;

    return 0;
}
