#include <bits/stdc++.h>
#include <sql.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Thêm một phần tử vào đầu danh sách
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // In ra danh sách các phần tử
    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList myList;
    // Thêm các phần tử vào danh sách
    myList.push(5);
    myList.push(10);
    myList.push(15);

    // In ra danh sách các phần tử
    myList.printList();

    return 0;
}