#define MAX 10
#define DataType int

// The Structure of Node
typedef struct node {
	DataType member;
	struct node *next;	
} Node;	

// The Structure of the Stack
typedef struct stack {
	Node *top;
	int size;	
} Stack;	

//////

// Accessing Mechanism

void initializeStack 		( Stack*			 );
void push					( DataType  , Stack* );
void pop 					( DataType* , Stack* );    
int  isFull					( Stack*		 );
int  isEmpty				( Stack*		 );
int  stackSize				( Stack*		 );
void clearStack				( Stack*		 );
void traverse				( Stack*, void ( * ) ( DataType) );
