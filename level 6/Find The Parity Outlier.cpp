int FindOutlier(std::vector<int> arr)
{
    int result;
    int evenOrOdd = 0;
    //if the array mostly even then the variable evenOrOdd = 1, else it's 0.
  if(arr[0] % 2 == 0 && arr[1] % 2 == 0) evenOrOdd = 1;
  if(arr[0] % 2 == 0 && arr[2] % 2 == 0) evenOrOdd = 1;
  if(arr[1] % 2 == 0 && arr[2] % 2 == 0) evenOrOdd = 1;
  for(int i = 0; i < arr.size(); i++)
  {
    // the -1 for the negative numbers because negative % 2 = -1 not 1.
    if(arr[i] % 2 == evenOrOdd || arr[i] % 2 == -1 * evenOrOdd)
      result = arr[i];
  }
  
    
    return result;
}
