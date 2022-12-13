#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    scanf("%i", &t);

    while (t--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = min({abs(x1 - x2), x1 + (16 - x2), x2 + (16 - x1)});
        ans += min({abs(y1 - y2), y1 + (20 - y2), y2 + (20 - y1)});
        cout << ans << '\n';
    }

    return 0;
}
