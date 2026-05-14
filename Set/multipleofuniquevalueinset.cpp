#include <bits/stdc++.h>
using namespace std;
int main() {
    set <int> M;
    set <int> N;
    set <int> S1;
    set <int> S2;
    int n,x,P,Q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        M.insert(x);
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        N.insert(x);
    }
     cout<<endl;
    set_difference(M.begin(),M.end(),N.begin(),N.end(),inserter(S1,S1.begin()));
    set_difference(M.begin(),M.end(),N.begin(),N.end(),inserter(S2,S2.begin()));
    P=S1.size();
    Q=S2.size();
   cout<<P*Q<<endl;
}