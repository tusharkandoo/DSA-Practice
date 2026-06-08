#include <iostream>
#include <math.h>
using namespace std;
void fun () {
    cout<<"hello bacchon";
}
int sum (int a ,int b)
{
    return a+b;
}
int sub (int c, int d)
{
 return c-d;
}
int mul (int m, int n)
{
    return m*n;
}
int divide (int x, int y)
{
    return x/y;
}
int main (){
cout<<"enter 2 numbers";
int w,y;
cin>>w>>y;
cout<<sum(w,y)<<endl;
cout<<divide(w,y)<<endl;
fun();
cout<<endl;
cout<<mul(w,y)<<endl;
cout<<sub(w,y)<<endl;
return 0;
}
