#include"stackLinkedHeader.h"
#include<stdlib.h>

void initializeStack ( Stack* ps ) {
	ps->top  = NULL;	
	ps->size = 0;
} // end initializeStack	

void push ( DataType element, Stack* ps ) {
// creating a node
	Node *newNode = ( Node* ) malloc ( sizeof ( Node ) );
	newNode->member = element; // adding element
////
	newNode->next = ps->top; // newNode = ps->top ( WRONG )
// newNode points to the old top. ( Wrong )
// the pointer inside newNode points to the same place that top points to.

	ps->top = newNode; // newNode becomes the top.
ps->size++;
} // end push	

void pop ( DataType* element, Stack* ps ) {
	*element = ps->top->member;
// temp pointer to the top, used to free the node
	Node* tempPointerToNode = ps->top; // temp took the top node address		

	ps->top = ps->top->next; // now the top is the element after the poped one.
free( tempPointerToNode );
ps->size--;
} // end pop

int stackSize ( Stack* ps ) {
	return ps->size;	
} // end stackSize	

int isFull ( Stack* ps ) {
	return 0; // How can I know that the RAM is full?!
} // end isFull	

int isEmpty ( Stack* ps ) {
	return (ps->size == 0);
} // end isEmpty	

void clearStack ( Stack* ps ) {
// I'm freeing each node, with help of a temp pointer
	Node* tempPointerToNode = ps->top; // points to the top
	
int i = 0; // this is for debugging 
	while ( ps->top ) // if ps->top == NULL it will not loop anymore
		{
		ps->top = ps->top->next; // moving the top to the next node ( next node can be NULL in the last move )
		free( tempPointerToNode ); // freeing the node		
		tempPointerToNode = ps->top; // move the tempPointerToNode to the next node.
		i ++; // for debugging...
		} // end freeing loop				
free( tempPointerToNode );
ps->size = 0;
printf( "there are %d loops\n", i ); // for debugging...
} // end clearStack	

void traverse ( Stack* ps, void ( *pointerToFunction ) ( DataType ) ) {
// I need here to pass over all element by element,
// and pass the element to the pointerToFunction to be processed.
// Using ps->top will destroy the list.
// I'm using here my friend tempPointerToNode...

	Node* tempPointerToNode = ps->top; // It's on the top now.

// this loop will not work, if the tempPointerToNode is NULL.
	while ( tempPointerToNode ) {
		( *pointerToFunction ) ( tempPointerToNode->member ); // pass the element to the pointerToFunction, to be processed.
		tempPointerToNode = tempPointerToNode->next; // moving the tempPointerToNode to the next node, ( It can be NULL ).

free( tempPointerToNode );
	} // end moving the cursor	
	 
} // end traverse	
