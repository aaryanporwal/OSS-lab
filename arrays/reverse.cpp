// Reversing an array
/*
  Input  : arr[] = {1, 2, 3}
  Output : arr[] = {3, 2, 1}

  Input :  arr[] = {4, 5, 1, 2}
  Output : arr[] = {2, 1, 5, 4}
*/

#include <array>
#include <iostream>
#include <vector>
#define cout std::cout

void reverseArray(std::vector<int> arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    printf("arr[n-%i]: %i\n", i, arr[n - i - 1]);
  }
}

int main() {
  std::vector<int> arr = {1, 2, 3, 4, 5, 6};
  reverseArray(arr);
}