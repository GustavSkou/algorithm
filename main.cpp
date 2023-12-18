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

      int someNums2[size] =
      {
            536,
            396,
            432,
            295,
            800,
            339,
            231,
            321,
            639,
            900
      };
      std::cout << getSecondLargestNum(someNums, size);
      std::cout << getSecondLargestNum(someNums2, size);

      return 0;
}
