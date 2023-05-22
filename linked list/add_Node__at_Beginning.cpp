#include<iostream>

struct Node{
    int data;

    Node* next;
};

Node* head = nullptr;

int addFront(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = head;
    head = ptr;
};


void printNode()
{
    Node* ptr = head;
    std::cout << "List is-> ";
    while(ptr != NULL)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << "\n";
}


int main()
{
    int maxSize,num;
    std::cout << "Enter maxSize: ";
    std::cin >> maxSize;
    for(int i = 0; i < maxSize; ++i)
    {
        std::printf("Enter a Number: ");
        std::cin >> num;
        addFront(num);
        printNode();
    }


    return 0;
}