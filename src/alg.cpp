// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int start = 0;
  int stop = size - 1;
  int ksred, i, count = 0;
  while (start <= stop) {
    ksred = (start + stop) / 2;
    if (arr[ksred] == value) {
      count++;
      i = ksred - 1;
      while (i >= 0 && arr[i] == value) {
        count++;
        i--;
      }
      i = ksred + 1;
      while (i < size && arr[i] == value) {
        count++;
        i++;
      }
      break;
    } else if (arr[ksred] < value) {
      start = ksred + 1;
    } else { stop = ksred - 1; }
  }
  return count;
}
