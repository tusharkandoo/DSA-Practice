#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements";
    cin >> n;
    int min = 0;
    int a[n];
    cout<<"Enter Array Elements";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n - 1; j++) {
        min = j;
        for (int k = j + 1; k < n; k++) {
            if (a[k] < a[min]) {
                min = k;
            }
        }
        int t = a[j];
        a[j] = a[min];
        a[min] = t;
    }
    for (int l = 0; l < n; l++) {
        cout << a[l] << " ";
    }
    return 0;
}