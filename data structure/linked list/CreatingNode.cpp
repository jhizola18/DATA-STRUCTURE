#include<iostream>



    struct Node {
        //This store the data
        char data;//4 bytes
    
        // this will only store address of the next node of the list
        Node* next;// 4 bytes
    };

   Node* head = nullptr;

    char addNode(char data)
    {
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        head = temp;

    }

    char addAtBeg(char data)
    {
        Node* temp = new Node();
        temp->data = data;
        temp->next = head;
        head = temp;
    }



    char addAtlast(char data)
    {
        Node* temp = new  Node();
        temp->data = data;
        temp->next = NULL;
        //Generic logic traversing to the end of the Node
        Node* temp1 = head;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
            temp1->next = temp;
    }


    void printNode()
    {
        Node* temp = head;
        std::cout << "List is - >";
        while(temp != NULL)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
}


int main()
{
    std::cout << "Enter How many Numbers: ";
    int maxSize;
    char letter;
    std::cin >> maxSize;
    for(int i = 0; i < maxSize; ++i)
    {
        std::cout << "Enter a Number: ";
        std::cin >> letter;
        addAtBeg(letter);
        printNode();
    }

   
       
    
    return 0;
}