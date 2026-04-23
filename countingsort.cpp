#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    k = A[0];
    for(int i = 1; i < n; i++) {
        if(A[i] > k)
            k = A[i];
    }
    int C[k + 1] = {0};
    int B[n];
    for(int j = 0; j < n; j++) {
        C[A[j]] = C[A[j]] + 1;
    }
    for(int i = 1; i <= k; i++) {
        C[i] = C[i] + C[i - 1];
    }
    for(int j = n - 1; j >= 0; j--) {
        B[C[A[j]] - 1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    return 0;
}