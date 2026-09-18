#include<iostream>
using namespace std;
int singleno(int arr[], int size){
    int single = 0;
    for(int i=0; i<size; i++){
        single ^= arr[i];
    }
    return single;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = singleno(arr, size);
    cout << "The single number in the array is: " << result << endl;
    return 0;
}
