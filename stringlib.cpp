#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string s1;
	getline(cin,s1);
	cout<<s1.substr(0,3);//yeh bol raha hai 0 character chor kar uskai kai 3 character print kara do
    cout<<endl<<s1.substr(3,3);//shuru kai 3 chor kar uskai baad kai 3 print kara do
   cout<<endl<< s1.append(" Kandoo");// puri string(group of word) aage add karane kai liya
   cout<<endl<<s1.erase(2,2);// iska matlab hai string kai shuru kai do chor kar uskai aage kai do erase kardo 
	cout<<endl<<s1.find("u");//joo character search karna hota hai uski location batat hai
    cout<<endl<<s1.at(1);// 1 index  par kya character hai voh print hoga
    cout<<endl<<s1.length();//Length of character with gap jo space hai usko bhi add karna hota hai
    cout<<endl<<s1.size();//size bhi length kai same hi hota hai
   cout<<endl<< s1.replace(6,6,"inspiration");//6 characterchor kar uske kai 6 character ko replace kardo inspiration sai 
   reverse(s1.begin(),s1.end());//string ko reverse karne kai liya
   cout<<endl<<s1;
   s1.insert(1,"abc");//1 index par abc add ho jaega
   cout<<endl<<s1;
    rotate(s1.begin(),s1.end() - 2,s1.end());//string kai last kai 2 character ko string kai starting par le aayega
    cout<<endl<<s1;
}