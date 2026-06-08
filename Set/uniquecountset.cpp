//Give an array of N interger print the unique elements of the array in increasing order also print the count of unique elements in the array.
#include <bits/stdc++.h>
using namespace std;
int main() {
    set <int> s;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        s.insert(x);
    }
    for(int v:s){
        cout<<v<<" ";
    }
    cout<<endl;
    cout<<s.size();
}