#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h, k;
    cin >> n >> h >> k;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long cur_h = 0, time = 0;

    for (int i = 0; i < n; ++i) {
        if (cur_h + a[i] <= h) {
            cur_h += a[i];
        } else {
            time += cur_h / k;
            cur_h %= k;

            if (cur_h + a[i] > h) {
                ++time;
                cur_h = 0;
            }
            cur_h += a[i];
        }
    }

    time += (cur_h + k - 1) / k;
    cout << time << endl;
    return 0;
}