#define MAX 10
#define DataType int

// Node Structure
typedef struct node {
	DataType member;
	struct node *next;	
} Node;	

// Stack Structure
typedef struct stack {
	Node *top;
	int size;	
} Stack;	

//////

// Accessing Mechanisms

void initializeStack 		( Stack*	     );
void push			( DataType  , Stack* );
void pop 			( DataType* , Stack* );    
int  isFull			( Stack*	     );
int  isEmpty			( Stack*	     );
int  stackSize			( Stack*	     );
void clearStack			( Stack*	     );
void traverse			( Stack*, void ( * ) ( DataType) );
