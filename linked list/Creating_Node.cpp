#include<iostream>
#include<cstring>



    struct Node {
        //This store the data
        char data[15];//4 bytes
    
        // this will only store address of the next node of the list
        Node* next;// 4 bytes
    };

   Node* head = nullptr;

    char addNode(char data[15])
    {
        Node* ptr= new Node();
        strcpy(ptr->data, data);
        ptr->next = head;
        head = ptr;

    }

    void printNode()
    {
        Node* ptr = head;
        std::cout << "List -> ";
        while(ptr != nullptr)
        {
            std::cout << ptr->data << " ";
            ptr = ptr->next;
        }
        std::cout << "\n";
    }
 

int main()
{
    int maxSize;
    std::cout << "Enter List Size: ";
    std::cin >> maxSize;
    char name[15];
    for(int i = 0; i < maxSize; ++i)
    {
        std::cout << "Enter A Name: ";
        std::cin >> std::ws;
        std::cin.getline(name,15);
        addNode(name);

        printNode();
    }
    


    return 0;
}