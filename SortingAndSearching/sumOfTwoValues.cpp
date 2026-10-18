#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int req = x - arr[i];

        if (mp.find(req) != mp.end()) {
            cout << mp[req] + 1 << " " << i + 1 << endl;
            return 0;
        }
        mp[arr[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
