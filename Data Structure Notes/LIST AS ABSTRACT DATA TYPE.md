
List [Static]
- store a given number of elements of a given data- type;
- Write./ modify element of a position;
- Read element at a position;
List [Dynamic] that grow as per user's need
-  empty list has size of zero;
- insert;
- remove;
- count;
- read/modify element at a given position;
- Specify  data-type;

![[Pasted image 20230516145228.png]]
When array is full, create new larger array, copy previous array into the new array
then free the memory of the previous array.

Are you talking about Array?
- int A[10];
- A[i] = 2;
- Print A[i];

How to access a Dynamic Array ?
- Access - Read/Write element at an index <- constant time O(1);
-  Insert - ![[Pasted image 20230516152756.png]]  Inserting at the particular position will be linear function in terms of size of the list
- Removing - O(n) ;
- Add - O(n);
