#include <iostream>

// Hvis "lastIndex" går ud over array'en er der undefined behaviour 
int getSecondLargestNum(int someNums[], int index, int lastIndex, int* ptrLargestNum, int* ptrSecondLargestNum)
{ 
      if (index > lastIndex) 
      {
            if (!ptrSecondLargestNum) // Hvis den peger på null
            {
                  std::cout << "out of bounds";
                  return 0;
            }

            return * ptrSecondLargestNum; 
      }

      if (!ptrLargestNum) 
      {
            ptrLargestNum = someNums;
            ptrSecondLargestNum = someNums;
      }

      if (*ptrLargestNum < *(someNums + index))
      {
            ptrSecondLargestNum = ptrLargestNum;
            ptrLargestNum = (someNums + index);
      } 
      
      else if (*ptrSecondLargestNum < *(someNums + index))
      {
            ptrSecondLargestNum = (someNums + index);  
      }

      return getSecondLargestNum(someNums, index + 1, lastIndex, ptrLargestNum, ptrSecondLargestNum);
}
