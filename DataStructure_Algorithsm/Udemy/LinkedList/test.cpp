#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = nullptr;

// tạo 1 node
node *createNode(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = nullptr;
    return temp;
}
// Kiểm tra rỗng
bool isEmty(node *a)
{
    if (a == nullptr)
        return true;
    return false;
}
// Đếm node
int nodeCount(node *a)
{
    int count = 0;
    while (a != nullptr)
    {
        count++;
        a = a->next;
    }
    return count;
}
int RnodeCount(node *a) // recursive
{
    if (a != NULL)
        return RnodeCount(a->next) + 1;
    else
        return 0;
}
// tổng các phần tử trong dslk
int Sum(node *a)
{
    int sum = 0;
    while (a != nullptr)
    {
        sum = sum + a->data;
        a = a->next;
    }
    return sum;
}
int RSum(node *a) // recursive
{
    if (a != NULL)
        return RnodeCount(a->next) + a->data;
    else
        return 0;
}
// Max trong dslk
int Max(node *p)
{
    int max = INT32_MIN;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}
int RMax(node *p) //recursive
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = RMax(p->next);
    if (x > p->data)
        return x;
    else
        return p->data;
}
// thêm 1 data vào đầu danh sách
void pushDataFrist(int value)
{
    node *temp = new node;
    temp = createNode(value);
    if (head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
}
// thêm 1 data vào cuối danh sách
void pushDataLast(int value)
{
    node *temp = new node;
    temp = createNode(value);
    if (head == NULL)
        head = temp;
    else
    {
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
// thêm 1 data vào giữa danh sách
void pushDataMiddle(int value, int pos)
{
    int n = nodeCount(head);
    if (pos <= 0 || pos > n + 1)
    {
        cout << "Invalid insert position";
    }
    if (pos == 1)
    {
        pushDataFrist(value);
    }
    else if (pos == n + 1)
    {
        pushDataLast(value);
    }
    else
    {
        node *p = head;
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }
        node *temp = createNode(value);
        temp->next = p->next;
        p->next = temp;
    }
}
void displayList()
{
    node *list = head;
    while (list != nullptr)
    {
        /* code */
        cout << list->data << " ";
        list = list->next;
    }
}
void displayList(node *list) // recursive method
{
    if (list != nullptr)
    {
        cout << list->data;
        displayList(list->next);
    }
}
int main()
{
    int A[] = {1, 6, 5, 8, 4};
    for (int i = 0; i < 5; i++)
    {
        pushDataLast(A[i]);
    }
    pushDataMiddle(A[1], 4);
    displayList(head);
    return 0;
}