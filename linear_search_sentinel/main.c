#include <stdio.h>
#include "linear_search_sentinel.h"

#define SIZE 10

int main()
{
  int arr[SIZE] = {7, 4, 2, 8, 10, 9, 1, 5, 3, 6};
  int target = 11;

  if (linear_search_sentinel(arr, target))
  {
    printf("%d is in the array\n", target);
  }
  else
  {
    printf("%d is not in the array\n", target);
  }
}
