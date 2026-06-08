// for the above array cpunt all the elements whose freqquency is 2
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
    int count=0;
    for(auto it:m){
        if(it.second==2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}