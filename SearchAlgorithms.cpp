int getSecondLargestNum(int someArray[], int arraySize)
{ 
      static int index, * ptrLargestNum, * ptrSecondLargestNum;
      int * arrayElement = (someArray + index);
      
      /* function start */
      if (index == 0)    
      {
            ptrLargestNum = someArray;
            ptrSecondLargestNum = someArray;
      }
      /* function end */
      if (index == arraySize) 
      {     
            index = 0;
            return *ptrSecondLargestNum; 
      }
      /* function logic */
      if (*ptrLargestNum < *arrayElement)
      {
            ptrSecondLargestNum = ptrLargestNum;
            ptrLargestNum = arrayElement;
      } 
      else if (*ptrSecondLargestNum < *arrayElement)
      {
            ptrSecondLargestNum = arrayElement;  
      }

      ++index;
      return getSecondLargestNum(someArray, arraySize);
}