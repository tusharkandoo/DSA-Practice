#include <bits/stdc++.h>
using namespace std;

int Evaluate(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        case '^':
            return pow(a, b);
    }
    return 0;
}

class Stack {
    vector<int> item;
    int top;

public:
    Stack(int s) {
        item.resize(s);
        top = -1;
    }

    void Push(int x) {
        top++;
        item[top] = x;
    }

    int Pop() {
        int x = item[top];
        top--;
        return x;
    }

    int StackTop() {
        return item[top];
    }

    bool IsEmpty() {
        return top == -1;
    }
};

int main() {
    string postfix;
    cout << "Enter the Postfix Expression: ";
    cin >> postfix;

    Stack S(100);

    int i = 0;
    while (i < postfix.size()) {
        char symbol = postfix[i];
        i++;

        if (symbol >= '0' && symbol <= '9') {
            S.Push(symbol - '0');
        } 
        else {
            int b = S.Pop();
            int a = S.Pop();

            int val = Evaluate(a, b, symbol);
            S.Push(val);
        }
    }

    int x = S.StackTop();
    cout << "Answer: " << x << endl;

    return 0;
}