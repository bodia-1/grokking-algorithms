#pragma once

#include <iostream>
#include <vector>

class BinS
{
  public:
    int find(std::vector<int> arr, int item)
    {
      int min = 0;
      int max = arr.size() - 1;
      while(max >= min)
      {
        int mid = (min + max) / 2;
        int guess = arr[mid];
        if(guess == item) return mid;
        else if(guess > item) max = mid - 1;
        else min = mid + 1;
      }
      return -1;
    }
};
