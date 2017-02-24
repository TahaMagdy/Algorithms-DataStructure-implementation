#include<stdio.h>
#include<limits.h>
#define SIZE 5


// * pre-condition : passing unsorted integer array.
// * post-condition: the passed array is sorted.
void
selection_sort ( int* ar, int size )
{

int temp,
    smallest = INT_MAX,
    smallest_index,
    i,
    current_key;

// One pass to sort.
  for ( current_key = 0; current_key < size; current_key++ )
    {
        // * Looking for a the next small number to swap
        //   with the current one.
        for ( i = current_key+1; i < size; i++)
            {
            if ( ar[i] < smallest ) {
                smallest = ar[i];
                smallest_index = i;
                }
            } // end findind smallest

  // * If the smallest is greater than the current
  //   Do not swap, because this will disarrange
  //   becuase it will put a smaller number of the right side.
  if ( smallest < ar[current_key] ) {
    temp = ar[smallest_index];
    ar[smallest_index] = ar[current_key];
    ar[current_key] = temp;
  } // end swapping

// Assuming that the smallest number is the last one.
smallest = ar[size-1];
smallest_index = size-1;
    } // end pass

} // end selection_sort()




			//////////////////
			////Testing...////
			//////////////////
// ^^ Testing...
int main()
{
  int b [SIZE];
  int i = 0;
  while ( i < SIZE )
    scanf( "%d", &b[i++] );

  selection_sort ( b, SIZE );

  for ( i = 0; i < SIZE; i++ )
    printf( "%d ", b[i] );
    printf("\n");
return 0;
} // end main()
