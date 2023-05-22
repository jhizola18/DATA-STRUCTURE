#include<iostream>

struct Node {
    int data;

    Node* next;
};
Node* head = NULL;

void addFront(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = head;
    head = ptr;
};

void addBack(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    if(head == NULL)
    {
        ptr->next = head;
        head = ptr;
        return;
    }else {
        Node* temptr = head;
        while(temptr->next != NULL)
        {
            temptr = temptr->next;
        }
        temptr->next = ptr;
    }
}

void addNthPos(int data, int pos)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next =NULL;
    if(pos == 1)
    {
        ptr->next = head;
        head = ptr;
    };
    Node* temptr = head;
    for(int i = 0; i < pos - 2; ++i)
    {
        temptr = temptr->next;
    };
    ptr->next = temptr->next;
    temptr->next = ptr;
}

void deleteNode(int pos)
{
    Node* ptr = head;
    if(pos == 1)
    {
        head = ptr->next;
        delete ptr;
        return;
    }
    for(int i = 0; i < pos - 2; ++i)
    {
        ptr = ptr->next;
    };
    Node* temptr = ptr->next;
    ptr->next = temptr->next;
    delete temptr;
}

void printNode()
{
    Node* ptr = head;
    std::cout << "List-> ";
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

    std::cout << "Enter Max Size: ";
    std::cin >> maxSize;
    
    for(int i = 0; i < maxSize; ++i)
    {
        std::cout << "Enter a Number: ";
        std::cin >> input;
        addBack(input);
        
    }
    printNode();

   std::cout << "Enter a number: ";
   std::cin >> input;
   std::cout << "Enter Nth Position: ";
   std::cin >> post;
   addNthPos(input, post);
   printNode(); 

   std::cout << "Enter Position to be deleted: ";
   std::cin >> post;
   deleteNode(post);
   printNode();

    return 0;    
}