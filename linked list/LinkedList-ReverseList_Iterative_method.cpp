#include<iostream>

struct Node {
    int data;

    Node* next;
};
Node* head = NULL;

Node* addBack(int data, Node* head)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    if(head == NULL)
    {
        ptr->next = head;
        head = ptr;
    }else{
        Node* temptr = head;
        while(temptr->next != NULL)
        {
            temptr = temptr->next;
        }
        temptr->next = ptr;
    }
return head;
}

Node* reversedNode(Node* head)
{
    Node *prev, *curr, *next;
    curr = head;
    prev = NULL;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

void printNode(Node* head)
{
    if(head == NULL)
    {
        return;
    }else{
            std::cout << head->data << " ";
            printNode(head->next);
    }
}

void reversedPrint(Node* head)
{
    if(head == NULL)
    {
        return;
    }else{
        reversedPrint(head->next);
        std::cout << head->data << " ";
    }

    
}

int main()
{
    
    int maxSize;
    int input;
    std::cout << "Enter a max Size: ";
    std::cin >> maxSize;
   
    for(int i = 0; i < maxSize; ++i)
    {
        
        std::cout << "Enter A number: ";
        std::cin >> input;
        head = addBack(input, head);
        
       
    }
    std::cout << "List-> "; 
    reversedPrint(head);
    std::cout <<"\n";
    head = reversedNode(head);
    std::cout << "List-> "; 
    printNode(head);

    return 0;
};