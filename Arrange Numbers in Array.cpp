// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
// Note:
// You need not print the array. You only need to populate it.



void arrange(int *arr, int n)
{
    int k = 1;
    if((n % 2) != 0)
    {
    for(int i = 0; i < (n/2)+1; i++)
    {
        arr[i] = k;
        k = k + 2;
    }
    k = k - 1;
    for(int i = (n/2)+1; i < n; i++)
    {
        k = k - 2;
        arr[i] = k;
        
    }
    }
    else
    {
       for(int i = 0; i < (n/2); i++)
    	{
        	arr[i] = k;
        	k = k + 2;
    	}
    	k = k + 1;
    	for(int i = (n/2); i < n; i++)
    	{
        	k = k - 2;
        	arr[i] = k;
    	} 
    }
}
