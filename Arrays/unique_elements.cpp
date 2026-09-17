#include<iostream>
using namespace std;
int uniqueno(int arr[], int size){
    int unique = 0;
    for(int i=0; i<size; i++){
        unique ^= arr[i];
    }
    return unique;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = uniqueno(arr, size);
    cout << "The unique number in the array is: " << result << endl;
    return 0;
}
