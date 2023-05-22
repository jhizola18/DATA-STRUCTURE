#include<iostream>
#include<cstring>

struct Node {

    char data[15];

    Node* next;
};

Node* head = NULL;

char addNode(char data[15])
{
    Node* ptr = new Node();
    strcpy(ptr->data, data);
    ptr->next = NULL;
    head = ptr;
}


char addBack(char data[15])
{
    Node* ptr = new Node();
    strcpy(ptr->data, data);
    ptr->next = NULL;

    Node* temptr = head;
    while(temptr->next != NULL)
    {
        temptr = temptr->next;
    }
    temptr->next = ptr;
};


void printNode()
{
    Node* ptr = head;
    std::cout << "ELEMENTS IN THE LIST -> ";
    while(ptr != NULL)
    {
        std::cout << ptr->data << ", ";
        ptr = ptr->next;
    }
}

int main()
{
    int maxSize; 
    char input[15];
    std::cout << "Enter maxSize: ";
    std::cin >> maxSize;
    for(int i = 0; i < maxSize; ++i)
    {
        if(head == NULL)
        {
            std::cout << "Enter A number: ";
            std::cin >> std::ws;
            std::cin.getline(input,15) ;
            addNode(input);
        }else{
            std::cout << "Enter A number: ";
            std::cin >> std::ws;
            std::cin.getline(input,15);
            addBack(input);
        }
        
        
    }
    printNode();
    
    return 0;
}