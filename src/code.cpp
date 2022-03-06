#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
using namespace std;

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if ((mask < 0) or (bit_pos < 0)) {
      return false;
    }
    int t = mask >> bit_pos;
    return (t % 2 == 1);
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle and left >= right) {
      return left;
    } else if (middle >= left and middle >= right) {
      return middle;
    } else {
      return right;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != NULL and right != NULL){
      int t = *left;
      *left = *right;
      *right = t;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int s = 0;
    if (length == 0 or arr == NULL) {
      return s;
    }
    for (int i = 0; i < length; i++) {
      s += arr[i];
    }
    return s;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int *pointer = nullptr;
    if (length > 0 and arr != NULL) {
      int max_element = arr[0];
      pointer = &arr[0];
      for (int i = 1; i < length; i++) {
        if (max_element < arr[i]) {
          max_element = arr[i];
          pointer = &arr[i];
        }
      }
    }
    return pointer;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *arr = new int[length];
      for (int i = 0; i < length; i++) {
        arr[i] = init_value;
      }
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length > 0 and arr_in != NULL) {
      int *arr = new int[length];
      for (int i = 0; i < length; i++) {
        arr[i] = arr_in[i];
      }
      return arr;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == NULL) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment
