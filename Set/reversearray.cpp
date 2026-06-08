// WAP to program to print the given array set in decreasing order
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto it : m) {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}


