#include <iostream>
#include "bins.hpp"

int main()
{
  std::vector<int> arr = {11, 111, 211, 311, 411, 1111};
  BinS obj;
  
  int ans = obj.find(arr, 311);
  std::cout << ans << std::endl; //4 index

  return 0;
}
