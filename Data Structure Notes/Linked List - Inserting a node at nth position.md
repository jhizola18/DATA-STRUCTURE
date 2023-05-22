

LOGICAL VIEW(implementation Logic):

![[Pasted image 20230518162727.png]]
- When Inserting a node at nth position you have to keep in mind the (n-1);
- Create a Node that have data part and link part;
- When decided where to insert  the newly created Node use (n-1)  it means when you want to insert the Node in the 4th place(n-1 = 4 -1 = 3) This means you have to cut off the connection between the currently 4th place and 3rd place.
- Then point the link part of the newly created Node  to the previously 4th place Node.
- And Using the 3rd place link part point it to the address of the newly created Node which is going to be the new 4th placed Node.
//
![[Pasted image 20230518174104.png]]
- Create a function that takes two arguments first is taking what data is going to be stored then the other one is the position of where data will be placed;
- Create a Node that has data part and linked part;
- Check if the user input 1 position if the condition is true(ptr->next = head)  the link part of the newly created Node will hold the address of the previous First Node.
- head = ptr the head will now hold the address of the newly created Node
//
![[Pasted image 20230518174604.png]]
- After Checking if there is a Node in a list or putting a Node in the list;
- We will create a temporary pointer(temptr) that will be pointed to the head(which means the temptr will also hold the address of the First Node/head)
- WE will be using for loop to traverse the linked list, the reason why we used (n - 2) instead of (n-1) is because we will be starting at the head.
- Once we reach the desired position we will point the linked part of the newly created Node to the temporary Pointer(which means whatever address the temptr holds will be the new address that the link part of the newly created Node will be holding)NOTE: That the temptr is holding the address of the previous Node that you will be replacing with the New Node.
- After that using the temptr(temporary pointer) we are going to use it to store the address of our newly created Node to the 2nd placed Node.
