int getSecondLargestNum(int someArray[], int arraySize)
{ 
      static int index, LargestNum, SecondLargestNum;

      if (index == 0)
      {
            LargestNum = *someArray;
            SecondLargestNum = *someArray;
      }

      if (index == arraySize) 
      {     
            index = 0;
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

      ++index;

      return getSecondLargestNum(someArray, arraySize);
}