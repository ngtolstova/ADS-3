// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int k = size / 2 - 1, start, stop, flag = 1, count = 0;
  while (arr[k] != value) {
    if (arr[k] > value) {
      if (k == 0) {
        flag = 0;
        break;
      }
      stop = k;
      k = k / 2;
      size = stop + 1;
    }
    else if (arr[k + 1] <= value) {
      if (k + 1 >= size) {
        flag = 0;
        break;
      }
      start = k + 1;
      stop = size - 1;
      size = stop - start + 1;
      arr = arr + start;
      k = (stop - start) / 2;
    }
  }
  if (flag == 0) 
    return 0;
  count = 1; int tmp_k = k;
  while (arr[++k] == value && k<size) {
    count++;
  }
  k = tmp_k;
  while (arr[--k] == value && k >= 0) {
    count++;
  }
  return count;
}
