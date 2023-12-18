#include <iostream>
#include "SearchAlgorithms.cpp"
int main () 
{
      int someNums[] =
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

      std::cout << getSecondLargestNum(someNums, 0, 9, nullptr, nullptr);

      return 0;
}
