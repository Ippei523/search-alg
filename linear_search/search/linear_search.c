#include <stdio.h>
#include <stdbool.h>
#include "linear_search.h"

bool linear_search(int *arr, int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    printf("--------------------\n i: %d\n", i);
    printf("Index: %d\n", i);
    printf("Value: %d\n", arr[i]);
    printf("Target: %d\n", target);

    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}
