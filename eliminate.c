// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
    // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails,
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  memset(arr, 0, sizeof(* arr) * n);
  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked
  int numleft = n;
  int count = 0;
  int ind = 0;
  while (numleft > 1)
    {
      count = k;
      while (count > 0)
	{
	  if (arr[ind] == 0) // not eliminated yet
	    {
	      count --; 
	    }
	  if (count == 0)
	    {
	      printf ("%d\n", ind);
	      arr[ind] = 1;
	    }
	  ind = (ind + 1) % n;
	}
      numleft --;
    }
  // print the last one
  for (ind = 0; ind < n; ind ++)
    {
      if (arr[ind] == 0)
	{
	  printf ("%d\n", ind);
	}
    }
  // release the memory of the array
  free (arr);
}
#endif
