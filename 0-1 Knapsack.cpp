#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n){
    int mem[n+1][W+1];
    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= W; w++){
            if (i == 0 || w == 0){
                mem[i][w] = 0;
            }
            else if (wt[i - 1] <= w){
                 mem[i][w] = max(val[i - 1] +mem[i - 1][w - wt[i - 1]], mem[i - 1][w]);
            }
            else{
                mem[i][w] = mem[i - 1][w];
            }
        }
    }
    return mem[n][W];
}

int main(){
    int n;
    cout << "Enter number of Product : ";
    cin >> n;
	int val[n], wt[n];
	for(int i=0; i<n; i++){
        cin >>val[i] >> wt[i];
	}
	int W;
	cout << "Enter the capacity of knapsack : ";
	cin >> W;
	cout << "Value of knapsack items is : "<< knapSack(W, wt, val, n) << endl;

	return 0;
}

