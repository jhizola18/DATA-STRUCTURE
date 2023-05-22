
![[Pasted image 20230522165222.png]]
-  What is Recursion? - Recursion is just calling a function inside a function then call it to the main function;
![[Pasted image 20230522170853.png]]
- This is simply printing a list using  recursion method
- Remember that putting a parameters that taking a Node* head value 
- Check if the head is empty, and if the condition is true then return;
- else, Print the data part to the node and then using print node 
- print the next Node until it reaches the NULL part then one by one it will return every data that uses;
//
![[Pasted image 20230522171701.png]]
![[Pasted image 20230522173149.png]]
- This is to print the linked list reversed 
![[Pasted image 20230522173317.png]]
- Looking to this logical View
- instead of printing it first we are going to print it inside the function;
- and Then, once the reversedPrintint reached the NULL part then it will start printing in the terminal while returning the value;