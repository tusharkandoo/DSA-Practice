#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ele;
    cin >> ele;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        if (a[j] == ele) {
            count++;
            cout << "Index of the element " << j+1 << endl;
        }
    }
    cout << "Number of times the element appeared " << count;
    return 0;
}