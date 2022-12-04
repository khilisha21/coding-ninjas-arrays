// Given an array of length N, you need to find and print the sum of all elements of the array.



#include<iostream>
using namespace std;


int main() {
    
    int N;
    cin >> N;
    
    int a[1000000], sum = 0, i = 0;
    while(i < N) {
        cin >> a[i];
        i++;
    }
    
    i = 0;
    while(i < N) {
        sum += a[i];
        i++;
    }
    
    cout << sum << endl;
    
}
