#include <stdio.h>
#include <stdbool.h>
#include "linear_search_sentinel.h"

#define SIZE 10
#define SENTINEL 11

bool linear_search_sentinel(int arr[], int target)
{
  int i = 0;
  arr[SIZE] = SENTINEL;

  printf("配列の中身:\n");
  for (int i = 0; i < arr[SIZE]; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  while (arr[i] != target)
  {
    printf("--------------------\n i: %d, ", i);
    printf("arr[i]: %d\n", arr[i]);
    i++;
  }

  return i < SIZE;
}
