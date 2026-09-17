#include <iostream>
using namespace std;
int smallestNumber(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = smallestNumber(arr, size);
    cout << "The smallestnumber in the array is: " << result << endl;
    return 0; 
  }
