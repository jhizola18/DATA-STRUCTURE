

![[Pasted image 20230517143457.png]]
- head is a Node*(Pointer to head node) -> The head is holding the Address of the first Node.
-  The first part of the Node is the data(data also holds data whatever data type it is) and the second part of the Node is the link(is a Node* or a pointer) for the next Node.
- Combining the first part and the Second part they are called Node.
//

![[Pasted image 20230517143904.png]]
- This is to create a head that points to empty list atm.
//
![[Pasted image 20230517144418.png]]
- The temp pointer is to hold and return  the address of assigned memory block since [malloc]  create a memory block and [malloc] returns a void pointer
//
![[Pasted image 20230517152305.png]]
- Generic logic traversing through the end of the list;
//
![[Pasted image 20230517163437.png]]
- temp-> is a pointer that dereference the data variable or the link variable so we can manipulate/use the value
//
![[Pasted image 20230517165458.png]]
- ![[Pasted image 20230517165516.png]]
- Create a new Node and a Temp pointer that holds the address of that Node
then check if the head pointer is not NULL(MEANING : list is not empty) and if the condition is true, point the link part of the Newly created Node to the head(in this state the head holds the address of the previous first node). and then the head pointer now holds./points to the address of the newly created Node.