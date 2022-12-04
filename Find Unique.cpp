// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.




int findUnique(int *arr, int size)
{
    
    for(int i = 0; i < size; i++)
    {
        int c = 0;
        if(arr[i] != 0){
        for(int j = i+1; j < size; j++){
        if(arr[i] == arr[j]){
            c = 1;
            arr[j] = 0;
        }
        }
        if(c != 1)
        {
            return arr[i];
        }
        }
    }
}
