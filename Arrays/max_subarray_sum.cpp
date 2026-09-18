#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   /* brute force : 
    int arr[] = {1,2,3,4,-4,-5,3,8,-9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_sum = 0;
    for(int st=0;st<size;st++){
        int curr_sum = 0;
        for(int end = st;end<size;end++){
            curr_sum = curr_sum + arr[end];
            max_sum = max(curr_sum,max_sum);
        }
    }
    cout<<max_sum<<endl; */

    // Kadanes algorithm
    int arr[] = {1,-7,-8,-9,4,7,10,13,-23,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_sum = 0;
    int curr_sum = 0;
    for(int i = 0;i<size;i++){
        curr_sum = curr_sum + arr[i];
        max_sum = max(curr_sum,max_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    cout<<max_sum;
    return 0;
}