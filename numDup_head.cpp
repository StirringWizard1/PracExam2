int numDup(int arr[], int start, int size, int element) 
{
  if (size==1)
  {
    if (arr[start] == element)
    {
    return 1; 
    }
    else
    {
      return 0; 
    }
  }
  else
    {
        return numDup(arr[], start, 1, element) + numDup(arr[], start+1, size-1, element);
    }

}