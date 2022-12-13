#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int *x, int *y){
    if (a == 0){
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main(){
    int x, y, a = 35, b = 15;
    int g = gcdExtended(a, b, &x, &y);
    cout << "GCD(" << a << ", " << b << ") = " << g << endl;
    cout <<"x = "<< x << ",  y = " << y << endl;

    if(__gcd(x, y) == 1){
        cout << "The pair is co-prime" << endl;
    }
    else{
        cout << "The pair isn't co-prime" << endl;
    }
    return 0;
}

