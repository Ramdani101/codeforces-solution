#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h, totalWidth = 0;
    cin >> n, h;
    vector<int> height(n);
    for (size_t i = 0; i < height.size(); i++)
    {
        cin >> height[i];
        totalWidth += (height[i] > h) ? 2 : 1;
    }
    cout << totalWidth << endl;
    return 0;
}

