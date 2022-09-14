int numDup(int arr[], int start, int size, int element) 
{
  int acc = 0; 
      return numDupTail(arr[], start, size, element , acc);

  
}

int numDupTail(int arr[], int start, int size, int element , int acc)
{ 
    if (start => size)
    {
      return acc
    }
    else if (arr[start] == element)
    {
      return numDupTail(arr[], start+1, size, element , acc++)
    }
    else
    {
      eturn numDupTail(arr[], start+1, size, element , acc)
    }

  
}