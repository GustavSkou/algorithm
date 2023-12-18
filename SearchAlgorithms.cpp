#include <iostream>

int getSecondLargestNum(int someArray[], int arraySize)
{ 
      static int index, LargestNum, SecondLargestNum;

      if (index > arraySize - 1) 
      {
            return SecondLargestNum; 
      }

      if (LargestNum < *(someArray + index))
      {
            SecondLargestNum = LargestNum;
            LargestNum = *(someArray + index);
      } 
      
      else if (SecondLargestNum < *(someArray + index))
      {
            SecondLargestNum = *(someArray + index);  
      }

      index++;

      return getSecondLargestNum(someArray, arraySize);
}