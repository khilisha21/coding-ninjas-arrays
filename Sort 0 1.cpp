// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.


void sortZeroesAndOne(int *input, int size)
{
    int count_0 = 0;
    for(int i = 0; i < size; i++)
    {
        if(input[i] == 0)
        {
            count_0 += 1;
        }
    }
    for(int i = 0; i < count_0; i++)
    {
        input[i] = 0;
    }
    for(int i = count_0; i < size; i++)
    {
        input[i] = 1;
    }
}
