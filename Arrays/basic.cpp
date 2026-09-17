/*Arrays : 
- arrays occupy contiguous memory i.e,1,4,8(for int dtype)
- only store elements of same data type
- first element of array is always indexed at 0 and are linear data structure
*/ 

# include<iostream>
using namespace std;
int main() {
    // declaration of array
    int A[] = {1,2,3,4,5,6,7,8,9,10} ;
    // traversing an array
    for(int i=0;i<10;i++){
        cout<<A[i]<<endl;
    }
    // accessing array element
    cout<<"\nElement at index 5 is : "<<A[5]<<endl;
    // accessing array element using pointer
    cout<<"\nElement at index 5 is : "<<*(A+5)<<endl;
    // sizeof() array element
    cout<<"\nSize of array is : "<<sizeof(A)/sizeof(A[0])<<endl;
    return 0;
}
