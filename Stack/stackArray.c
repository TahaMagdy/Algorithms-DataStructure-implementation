#include"stackArrayHeader.h"

void initializeStack ( Stack *s )
    {
	s->top = 0;		
    } // end function

void push ( DataType element, Stack *s )
    {
	s->array[ s->top ++ ] = element;	
    } // end push function	 

void pop ( DataType* element, Stack *s )
    {
	*element = s->array[ -- s->top ];	
    } // end pop	

int isFull ( Stack* s )
    {
	return s->top == MAX - 1;	
    } // end isFull	

int isEmpty ( Stack* s )
    {
	return !s->top;
    } // end isEmpty

int stackSize ( Stack* s )
    {
	return s->top;	
    } // end stackSize	

void clearStack( Stack* s )
    {
	s->top = 0;	
    } // end clearStack	

// In traverse, the passed function must process
// one element, then I'll take the function through
// the elements, one by one to let it processes them.
void traverse( Stack* s, void ( *pointerToFunction ) ( ) ) // you're free to write the data type of the parameter or not. (*ptf) ( data type )
 {
	for ( int i = s->top; i > 0; i-- ) {
			( *pointerToFunction ) ( s->array[ i - 1 ] ); // calling the function. by its pointer.
	} // end traversing elements 
    } // end traverse	
