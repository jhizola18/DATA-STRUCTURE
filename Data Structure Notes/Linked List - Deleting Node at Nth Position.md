LOGICAL VIEW(IMPLEMENTATION VIEW):

![[Pasted image 20230519155144.png]]
- In deleting a Node in specific position;
- You have to traverse through the list remember that when traversing instead of actually landing on the position you want, you want to use the n-1 method that we use when we want to add a Node to a specific position
![[Pasted image 20230519172415.png]]

- After reaching the n-1 position you have to create a temporary pointer(temptr) that pointing to the link part of the Node where your initial pointer located. 
- Then point the link part of the n-1 Node using the initial pointer(ptr) to the link part of the supposedly deleted Node(Note: remember that the tempr holds the address of the supposedly deteled Node which means temptr->next holds the address of the n+1 Node) which holds the address of the n+1 Node.
- Then detele the n Node using delete temptr(temptr(temporary pointer holds the address of the n Node)).
//
![[Pasted image 20230519172930.png]]
- Create a Function that take an argument(takes the position);
![[Pasted image 20230519173018.png]]
- Create a pointer that pointing to the head;
- Then Check if the desired position is equal to the user's input which in this case is 1;
- And then store/point(ptr->next) the address of the n+1 Node to the head
- Then delete the n Node using delete ptr;
- then return to end this  function or condition will not execute anyfurther
//
![[Pasted image 20230519173505.png]]
- traverse through the list using the initial pointer(ptr = ptr->next);
- once the ptr reaches the n-1 position create a temporary pointer and make it hold the address of the link part of the n-1 position Node(Remember that the link part of the n-1 Node is holding address of the n Node )which means temporary pointer(temptr) now is pointing to the n Node(temptr holds the address of the n Node).
- Then store/ point the link part of the n Node(temptr holds the address of this Node) to the link part of the n-1 Node (Node before the deleted Node) 
- After this the n-1 Node and n+1 Node  is now connected and the n Node is currently connected to no one;
- using delete we are going to delete the temporary pointer which is holding the address of the n Node(Note: remember that the n  Node is the user's desired Node to Delete)(delete temptr);
- "The delete Method we create is lacking of  delete the last Node method it means that we dont have any condition if the user wanted to delete the last Node"