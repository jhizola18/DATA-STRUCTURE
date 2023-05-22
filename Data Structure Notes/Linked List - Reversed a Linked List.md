
![[Pasted image 20230522143323.png]]
- This is the main idea of reversing the linked list

![[Pasted image 20230522153218.png]]
- In creating a function for reversing a linked list you have to create a Node function and a parameter that takes the value of head(Note: Node* head);
-  Create three pointers for the handling the address of the previous Node , for the handling of the address of the current Node, and for the handling the address of the next Node(Note: Node *prev, *current, *next);
-  Assign the curr pointer to the head which means the curr pointer is now pointing/handling the address of the first Node;
- Assign a NULL value for the Prev pointer since we have to point the link part of the first Node to the NULL for the reason that the first Node wil become the new last Node;
- After Doing all the instruction above you can now traverse through the list;
-  THIS METHOD BELOW WILL TAKES EFFECT AS LONG THE CURRENT POINTER AND THE NEXT POINTER IS NOT EQUAL TO NULL;
- Assign the the next pointer to the link part of the current node(which is the address of the next Node: it means that the next pointer is now handling/pointing to the address of the Next Node);
- and Then, We are going to point the link part of the current Node to the previous pointer(NOTE: that the previous pointer holds the address of the previous Node),This means the link part of the current node is now holding the address of the previous Node;
-  After that we will move the prev pointer to the position of the current pointer.
- and Then, the current pointer will be moving to the position of the next pointer which is handling the address of the next Node; this means that the current pointer is in the position of the next Node;
- repeat the process until the current pointer and next pointer reaches the NULL value(This means the previous pointer is now in the position of the last node);
- and point the head to the  prev pointer which now is handling/pointing to the address of the current Node;
