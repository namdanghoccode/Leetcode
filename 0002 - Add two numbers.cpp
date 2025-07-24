#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *make_node(int x)
{
    ListNode *a = new ListNode();
    a->val = x;
    a->next = nullptr;
    return a;
}

void insert_last(ListNode *&head, int x)
{
    ListNode *newNode = make_node(x);
    if(head == nullptr){
        head = newNode;
        return;
    }
    else{
        ListNode *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void input(ListNode *&l1, ListNode *&l2, int n, int m)
{
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        insert_last(l1, x);
    }
    for(int j = 0; j < m; j++){
        int y; cin >> y;
        insert_last(l2, y);
    }
}

void output(ListNode *head)
{
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode *res = make_node(0);
    ListNode *tmp = res;

    int carry = 0;
    while(l1 != nullptr || l2 != nullptr || carry != 0){
        int sum = carry;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        tmp->next = make_node(sum % 10);
        tmp = tmp->next;
    }
    return res->next;
}

int main()
{
    ListNode *l1 = nullptr, *l2 = nullptr;
    int n, m; cin >> n >> m;
    input(l1, l2, n, m);
    ListNode *res = addTwoNumbers(l1, l2);
    output(res);
}
