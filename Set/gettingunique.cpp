// for the above array print all the unique elements
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto it:m){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
    cout<<endl;
    return 0;
}