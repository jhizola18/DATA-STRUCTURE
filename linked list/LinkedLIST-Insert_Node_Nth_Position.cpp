#include<iostream>

struct Node {
    int data;

    Node* next;
};

Node* head = NULL;

int insertNthPos(int data, int pos)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    if(pos == 1)
    {
        ptr->next = head;
        head = ptr;
        return;
    }
    Node* temptr = head;
    for(int i = 0; i < pos-2; ++i)
    {
        temptr = temptr->next;
    }
    ptr->next = temptr->next;
    temptr->next = ptr;
}

void printNode()
{
    Node* ptr = head;
    std::cout << "List ->";
    while(ptr != NULL)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << "\n";
}

int main()
{
    int maxSize;
    int input;
    int post;
    std::cout << "Enter the MaxSize: ";
    std::cin >> maxSize;
    for(int i = 0; i < maxSize; ++i)
    {
        std::cout << "Enter Number: ";
        std::cin >> input;
        std::cout << "Enter Position: ";
        std::cin >> post;
        insertNthPos(input, post);
    }
    printNode();

    return 0;
};