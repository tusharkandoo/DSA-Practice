// WAP to give the elements which are present in s2 but not in s1

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char> s1, s2, s3;
    char x;
    int N, M;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> x;
        s1.insert(x);
    }

    for (int i = 1; i <= M; i++) {
        cin >> x;
        s2.insert(x);
    }

    for (char v : s2) {
        if (s1.find(v) == s1.end()) {
            s3.insert(v);
        }
    }

    cout << "Elements present in s2 but not in s1: ";
    for (char v : s3) {
        cout << v << " ";
    }

    return 0;
}