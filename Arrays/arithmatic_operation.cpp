#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    return total;
}
int product(int arr[], int size){
    int total = 1;
    for(int i=0; i<size; i++){
        total *= arr[i];
    }
    return total;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum_result = sum(arr, size);   
    int product_result = product(arr, size);
    cout << "The sum of the array elements is: " << sum_result << endl;
    cout << "The product of the array elements is: " << product_result << endl;
    return 0;
}