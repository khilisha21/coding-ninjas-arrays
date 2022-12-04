// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.


void swapAlternate(int *arr, int size)
{
    if((size % 2) == 0){
    for(int i = 0; i < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    }
    else
    {
        for(int i = 0; i < (size-1); i += 2)
    	{
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    	}
    }
}
