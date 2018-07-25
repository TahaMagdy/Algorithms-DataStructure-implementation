#include<stdio.h>
#define SIZE 5


// * pre-condition : passing unsorted integer array.
// * post-condition: the passed array is sorted.
void
insertion_sort(int* ar, int size)
{
  int current,
      biggestSorted,
      key  ;
  for(current = 1; current < size; current++)
    {
        key  = ar[current]; // picking the current key.

        // Repositioning the biggestSorted flag to the largest element
        // in the sorted part
        biggestSorted = current - 1; // the greatest sorted part element.

        // * Inserting the key into the sorted part.
        // * if the key in less than its previous we
        //   shift all the previous ones  to the
        //   right. until key is not less than
        //   
        while ((biggestSorted >= 0 ) && (key < ar[biggestSorted]))
        {
        // * moving ar[biggestSorted] to the right,
        //   the key will be overwridde,
        //   it's ok, becuse we have it in the $key
        ar[biggestSorted+1] = ar[biggestSorted]; 

        // * moving the index to the left
        //   to ensure that the left is not
        //   greater than the key
        biggestSorted --;
        } // # end inserting the element;

        // * inserting the key into its position in
        //   the sorted area.
        // * where it is not less than its previous.
        ar[biggestSorted+1] = key;  
        } // # end current
        return;
    } // end insertion()

			/////////////////////
			/////////////////////

// ^^ Testing...
int main()
{
  printf("Enter 5 elements; Or change the SIZE\n");
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
