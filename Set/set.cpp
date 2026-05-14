#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    int sum = accumulate(s.begin(),s.end(),0);
    cout<<sum<<endl;
    int max = *max_element(s.begin(),s.end());
    cout<<max;
}
// WAP input 2 sets && create a new set of all the elements that are present in a but not in b.
