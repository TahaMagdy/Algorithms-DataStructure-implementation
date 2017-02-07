#include<stdio.h>
#define SIZE 5


// * pre-condition : passing unsorted integer array.
// * post-condition: the passed array is sorted.
void
insertion_sort ( int* ar, int size )
{
  int table,
      hand ,
      key  ;
  for( table = 1; table < size; table++ )
    {
       key  = ar[table]; // picking the current key.
       hand = table - 1; // the greatest sorted part element.

       // * Inserting the key into the sorted part.
       // * if the key in less than its previous we
       //   shift all the previous ones  to the
       //   right. until key is not less than
       //   
       while ( ( hand >= 0 ) && ( key < ar[hand] ) )
         {
	   // * moving ar[hand] to the right,
	   //   the key will be overwridde,
	   //   it's ok, becuse we have it in the $key
	   ar[hand+1] = ar[hand]; 

	   // * moving the index to the left
	   //   to ensure that the left is not
	   //   greater than the key
	   hand --;
	 } // # end inserting the element;

       // * inserting the key into its position in
       //   the sorted area.
       // * where it is not less than its previous.
       ar[hand+1] = key;  
    } // # end table
return;
} // end insertion()

			/////////////////////
			/////////////////////

// ^^ Testing...
int main()
{
  int b [SIZE];
  int i = 0;
  while ( i < SIZE )
    scanf( "%d", &b[i++] );

  insertion_sort ( b, SIZE );

  for ( i = 0; i < SIZE; i++ )
    printf( "%d ", b[i] );
    printf("\n");

return 0;
} // end main()
