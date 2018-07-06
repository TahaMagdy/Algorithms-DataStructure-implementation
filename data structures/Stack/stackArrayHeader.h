#define MAX 10
#define DataType int

// The Structure of the Stack
typedef struct stack  {
	DataType array[ MAX ];
	int top;
    } Stack; 	

// Accessing Mechanism

void initializeStack 			( Stack*	     );
void push				( DataType  , Stack* );
void pop 				( DataType* , Stack* );    
int  isFull				( Stack*	     );
int  isEmpty				( Stack*	     );
void traverse				( Stack*, void ( * ) ( DataType) );
int  stackSize				( Stack*	     );
void clearStack				( Stack*	     );
