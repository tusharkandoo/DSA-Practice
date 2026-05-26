#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin >> n;

    cout << "Enter the highest value of the array :" << endl;
    cin >> k;

    int arr[n];
    int c[k + 1];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize count array
    for(int i = 0; i <= k; i++) {
        c[i] = 0;
    }

    // Count frequency
    for(int j = 0; j < n; j++) {
        c[arr[j]]++;
    }

    // Prefix sum
    for(int i = 1; i <= k; i++) {
        c[i] = c[i] + c[i - 1];
    }

    int b[n];

    // Build sorted array
    for(int j = n - 1; j >= 0; j--) {

        b[c[arr[j]] - 1] = arr[j];

        c[arr[j]]--;
    }

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}