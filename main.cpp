#include <iostream>
#include "SearchAlgorithms.cpp"
int main () 
{
      int size = 10;
      int someNums[size] =
      {
            536,
            396,
            432,
            295,
            826,
            339,
            231,
            321,
            639,
            823
      };

      std::cout << getSecondLargestNum(someNums, size);

      return 0;
}
