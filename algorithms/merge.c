#include <stdio.h>
#include <stdlib.h>

// this merge two sorted arrays into one r[]
void merge (int *r, int *left, int left_size, int* right, int right_size) { 

    int left_counter  = 0;
    int right_counter = 0;
    int r_counter     = 0;
    while ( left_counter < left_size && right_counter < right_size ) {
   
        if ( left[left_counter] < right[right_counter] )
            r[r_counter++] = left[left_counter++];
        else 
            r[r_counter++] = right[right_counter++];
    } // end while

    while (left_counter < left_size )
        r[r_counter++] = left[left_counter++];
    while ( right_counter < right_size )
        r[r_counter++] = right[right_counter++];

} // end merge()


// Sort unsorted array
void mergeSort ( int *array, int size ){
    int mid, i, *left, *right;
    // base case
    if ( size == 1  ) return; 

    mid = size/2;

    // Making the right and the left arrays
    left  = (int*) malloc ( mid*sizeof(int) );
    right = (int*) malloc ( (size-mid)*sizeof(int) );

    // Filling right and left with numbers
    for ( i = 0; i < mid; i++ )    left[i]      = array[i];
    int j = 0; // to use right from the index zero.
    // i is used with the array so I cannot reset it.
    for ( i = mid; i < size; i++ ) right[j++] = array[i];

    // Splitting ...
    mergeSort ( left, mid );
    mergeSort ( right, size-mid );

    // Merging ...
   merge ( array, left, mid, right, (size-mid) );

   free (left);
   free (right);

} // end mergeSort

int main (void){

    
    int a[] = {2,3,4,5,6,1,213,1241,4,0};

    mergeSort ( a, 10 );

    int i = 0;
    for ( i = 0; i < 10; i++ )
        printf ("%d ", a[i] );
    printf ("\n");

return 0;
} // end main
