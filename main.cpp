#include <iostream>

void  LiqueArray(int *array, int l) {
  for (int k = 0; k < l; ++k)
    std::cout << array[k] << " " << std::flush;
  std::cout << std::endl;
}

void BubbleSort(int *array, int l) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int k = 0; k < l - j; ++k) {
      if (array[k] > array[k + 1]) {
        temp = array[k];
        array[k] = array[k + 1];
        array[k + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int l = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Bubble Sort :" << std::endl;
   LiqueArray(array, l);

  BubbleSort(array, l);

  std::cout << "After Bubble Sort :" << std::endl;
  LiqueArray(array, l);
  return (0);
}
