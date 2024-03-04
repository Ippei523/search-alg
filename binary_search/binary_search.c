#include <stdio.h>
#include "binary_search.h"

bool binary_search(int arr[], int target, int size)
{
  int left = 0;
  int right = size - 1;
  int mid;

  while (left <= right)
  {
    printf("--------------------\n");
    mid = (left + right) / 2;
    printf("left: %d\n", left);
    printf("right: %d\n", right);
    printf("mid: %d\n", mid);
    printf("\n");
    if (arr[mid] == target)
    {
      return true;
    }
    else if (arr[mid] < target)
    {
      printf("mid: %d\n", mid);
      left = mid + 1;
      printf("left: %d\n", left);
      printf("right: %d\n", right);
      printf("mid: %d\n", mid);
    }
    else
    {
      printf("mid: %d\n", mid);
      right = mid - 1;
      printf("right: %d\n", right);
      printf("left: %d\n", left);
      printf("mid: %d\n", mid);
    }
  }
  return false;
}