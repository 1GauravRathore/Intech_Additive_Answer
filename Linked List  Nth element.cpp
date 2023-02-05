#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 
// using two pointers first and second;
// without interating the list two times
void print_nth_two(Node *head, int n)
{ 
    if (head == NULL)
        return;

    Node *first, *second;
    first = second = head;
    for (int i = 1; i <= n; i++)
    {
        if (first == NULL)  
            return;
        first = first->next;
    }

    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << "nth node is -> " << second->data;
}
 
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printRecursive(head);
    print_nth_two(head, 3);

    return 0;
}
