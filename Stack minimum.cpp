
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
    int min_ele;
public:
    int a[MAX]; 
    Stack() { top = -1; }
    void push(int x)
    {
        if (top >= (MAX - 1)){
            cout << "Stack Overflow";
        }
        else
        {
            if(isEmpty()){
                min_ele=x;
                a[++top] = x;
            }
            else{
                if(x <= min_ele  ){
                    a[++top]=2*x-min_ele;
                    min_ele=x;
                }
                else
                a[++top]=x;
            }
        }
    }
    int pop()
    {
          // stack top can never be smaller than mn,
        // if it is then it indicates a flag which means before popping, you have to update minimum
        if (top < 0){
            cout << "Stack Underflow";
            return 0;
        }
        else{
            int x = a[top--];
            if(x < min_ele) {
                min_ele=2*min_ele-x;
            }
            return x;
        }
    }
    int peek()
    {
        if (top < 0) {
            cout << "Stack is Empty";
            return 0;
        }
        else {
            int x = a[top];
            if(x < min_ele) 
            return min_ele;
            return x;
        }
    }
    bool isEmpty() {
        return (top < 0);
    }
    int getMin(){
        return min_ele;
    }
};

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(4);
    cout << s.pop() << " Popped from stack\n";
    cout << "Top element is : " << s.peek() << endl;
    cout << "min element is : " << s.getMin() << endl;
    cout << "Elements present in stack : ";
    return 0;
}
