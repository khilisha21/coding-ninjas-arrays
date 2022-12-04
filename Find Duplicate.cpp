// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.



int duplicateNumber(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        int c = 0;
        for(int j = i+1; j < size; j++){
        if(arr[i] == arr[j]){
            c = 1;
        }
        }
        if(c == 1)
        {
            return arr[i];
        }
        
    }
}







