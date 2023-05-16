
![[Pasted image 20230516162547.png]]
Linked list is a non contiguous list connected by a pointer pointing to the address of the next node/address of the value;

ADDRESS IN THE LAST NODE - is null since its not pointing to any node anymore;
TRAVERSING THROUGH THE LIST - we are going to ask the first node what address of the next node and do the same for the next node and so on and so forth;

ADDING A NODE IN A LINK LIST AT THE END - Create a new node independently and then adjust the previous last node to make it point to the address of the next new last node and then the new last node specifically the second part of it will be pointing to null;

IN LINKED LIST, WE CANT ACCESS THE ELEMENTS THROUGH CONSTANT TIME unlike the in array, IN linked list we have to start at the head and we ask that node what is the address of the next node and do this until you reached the last node;

HEAD
- address of the head node/ first node gives us access of the complete list


GENERAL IDEA OF LINKED LIST IN PICTURE:
![[Pasted image 20230516165224.png]]