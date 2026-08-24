#include <bits/stdc++.h>
using namespace std;
class Stack
{
	vector<char> item;
	int top;
	public:
		Stack(int s)
		{
		   item.resize(s);
		   top=-1;	
		}	
		void Push(char x)
		{
			if(top==item.size()-1)
			{
				cout<<"Stack Overflow";
				exit(1);
			}
			top++;
			item[top]=x;
		}	
		char Pop(){
			char x;
			if(top==-1){
				cout<<"Stack Underflow";
				exit(1);
			}
			x=item[top];
			top--;
			return x;
		}	
		char StackTop()
		{
			char x=item[top];
			return x;
		}
		bool isEmpty()
		{
			if(top==-1)
			    return true;
			else
			    return false;    
		}
};
bool prcd(char a, char b){
	if (a=='(' || b=='('){
		return false;
	}
	if (b==')'){
		return true;
	}
	if(a=='^' || a=='*' || a=='/' || a=='%'){
		if(b=='^'){
			return false;
		}
		else{
			return true;
		}
	}
	else if(a=='+' || a=='-'){
		if(b=='+'|| b=='-'){
			return true;
		}
		else{
			return false;
		}
	}
}
int main(){
	string infix;
	cout<<"Enter an infix expression : ";
	cin>>infix;
	Stack s(20);
	int i=0;
	string postfix;
	reverse(infix.begin(),infix.end());
	while(i<infix.size()){
		char symbol=infix[i];
		i++;
		if(symbol>='a' && symbol<='z'){
			postfix=postfix+symbol;
		}
		else{
			while(!s.isEmpty() && !prcd(s.StackTop(),symbol)){
				char x=s.Pop();
				postfix=postfix+x;
			}
			s.Push(symbol);
		}
	}
	while(!s.isEmpty()){
		char x;
		x=s.Pop();
		postfix=postfix+x;
	}
	reverse(postfix.begin(),postfix.end());
	cout<<"Postfix is : "<<postfix;
}