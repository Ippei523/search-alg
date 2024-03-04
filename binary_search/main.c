#include <stdio.h>
#include <stdbool.h>
#include "binary_search.h"

int main()
{
  int arr[] = {0, 3, 4, 6, 7, 10, 11, 16, 18, 19, 20, 22};
  int target = 3;
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Size of the array: %d\n", size);

  bool result = binary_search(arr, target, size);

  if (result)
  {
    printf("%d is in the array\n", target);
  }
  else
  {
    printf("%d is not in the array\n", target);
  }
}