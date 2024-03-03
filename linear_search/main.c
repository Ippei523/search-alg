#include <stdio.h>
#include "./search/linear_search.h"

int main()
{
  int arr[] = {7, 4, 2, 8, 10, 9, 1, 5, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("sizeof: %lu / %lu", sizeof(arr), sizeof(arr[0]));
  printf("Size of the array: %d\n", size);
  int target = 11;

  if (linear_search(arr, size, target))
  {
    printf("%d is in the array\n", target);
  }
  else
  {
    printf("%d is not in the array\n", target);
  }
}