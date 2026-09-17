#include <iostream>
using namespace std;
int largestNumber(int arr[], int size) {
    int largest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = largestNumber(arr, size);
    cout << "The largest number in the array is: " << result << endl;
    return 0; 
  }
