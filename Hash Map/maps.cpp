///Started to know about maps in c++ and how to use them. Maps are a type of associative container that store elements in key-value pairs. They are implemented as balanced binary search trees, which allows for efficient insertion, deletion, and lookup operations. In this code snippet, we create two maps: one that maps integers to strings and another that maps strings to integers. We then update the value associated with a specific key in the first map and print out all the key-value pairs in that map.


#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int,string> m = {{7,"ABC"},{1,"ABC"},{11,"ABD"}};
    m[7] = "ABD";
    m.erase(7);
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}