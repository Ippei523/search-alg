#include <stdio.h>
#include <stdbool.h>
#include "linear_search_sentinel.h"

#define SIZE 10

bool linear_search_sentinel(int arr[], int target)
{
  int i = 0;
  arr[SIZE] = target;

  printf("配列のサイズ: %d\n", SIZE);
  printf("配列の中身:\n");
  for (int i = 0; i < SIZE + 1; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  while (arr[i] != target)
  {
    printf("--------------------\n i: %d, ", i);
    i++;
    printf("i: %d\n", i);
    printf("arr[i]: %d\n", arr[i]);
    printf("target: %d\n", target);
  }

  printf("arr[i]: %d\n", arr[i]);
  printf("target: %d\n", target);
  printf("i: %d\n", i);
  printf("SIZE: %d\n", SIZE);
  return i < SIZE;
}
