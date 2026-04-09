#pragma once

#include <iostream>
#include <vector>

class SelS
{
  public:
    int findS(std::vector<int> arr)
    {
      int smallest = arr[0];
      int smallest_index = 0;
      for(int i = 0; i < arr.size() - 1)
      {
        if(arr[i] < smallest)
        {
          smallest = arr[i];
          smallest_index = i;
        }
      }
      return smallest_index;
    }
}
