#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int key;
    cin >> key;

    int ptr = n - 1;

    while(ptr >= 0 && key < a[ptr]) {
        a[ptr + 1] = a[ptr];
        ptr--;
    }

    a[ptr + 1] = key;

    for(int i = 0; i <= n; i++)
        cout << a[i] << " ";

    return 0;
}