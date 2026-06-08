// given a list of integrs having n elements print the integrs in decreasing order of the frequency of occurence in the list . each interger should only once in the output. in case of a tie print the smaller element first
// test case 7 
// elements 3 9 3 3 2 5 2 3
// answer 3 2 5 9
#include <bits/stdc++.h>
using namespace std;
bool fun(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}
int main(){
    int n;
    cin>>n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    vector<pair<int,int>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),fun);
    for(auto i:v){
        cout<<i.first<<"-"<<i.second;
    }
}