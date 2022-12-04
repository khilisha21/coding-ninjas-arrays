// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// Note :
// Input arrays/lists can contain duplicate elements.

// The intersection elements printed would be in the order they appear in the first array/list(ARR1)



void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++){
        if(input1[i] == input2[j]){
            cout << input1[i] << ' ';
            input2[j] = 0;
            break;
        }
        }
    }
}
