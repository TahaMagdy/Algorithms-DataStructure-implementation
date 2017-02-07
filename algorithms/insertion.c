#include<stdio.h>
#define SIZE 5

void
insertion ( int* ar, int size )
{
  int table,
      hand ,
      temp ;
  for( table = 1; table < size; table++ )
    {
       temp = ar[table]; // picking an element into temp;
       hand = table - 1; // the most right element of the sorted part

       // hand == 1-, then the smallest number is its place
       // picked number still smaller
       while ( ( temp < ar[hand] ) && ( hand >= 0 ) )
         {
	   // making room for the new element
	   ar[hand+1] = ar[hand]; 
	   hand --;
	 } // end inserting the element;

       // putting the selected element; in Its position in the sorted area
       ar[hand+1]=temp;  
    } // end table
  return;
} // end insertion()

//////////////////////////////////////////
// Testing...
int main()
{
  int b [SIZE];
  int i = 0;
  while ( i < SIZE )
    scanf( "%d", &b[i++] );

  insertion ( b, SIZE );

  for ( i = 0; i < SIZE; i++ )
      printf( "%d ", b[i] );

printf("\n");

return 0;
} // end main()
