
#include <bits/stdc++.h>
using namespace std;
bool fun(pair<string,int>p1,pair<string,int>p2){
    return (p2.second>p1.second);
}
int main(){
    map <string,int> m = {{"A",2},{"B",1},{"D",3},{"C",2}};
    vector<pair<string,int>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),fun);
    for(auto i:v){
        cout<<i.first<<"-"<<i.second;
    }

}