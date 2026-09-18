/* Vectors :
     vectors are array like data structure which follows same rule as arrays
     only diff is that they can grow and shrink in size dynamically
     syntax : vector<datatype> vector_name;
*/
# include <iostream>
# include <vector>
using namespace std;
int main()
{
    /*vector<int> vec; // declaring a vector of integers
    vec.push_back(1); // adding elements to the vector
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "Elements in the vector: ";
    for (int i = 0; i < vec.size(); i++) // iterating through the vector
    {
        cout << vec[i] << " "; // accessing elements using index
    }
    cout << endl;

    cout << "Size of the vector: " << vec.size() << endl; // getting the size of the vector

    vec.pop_back(); // removing the last element from the vector
    cout << "Elements after pop_back: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl; */
    vector<int> vec1 = {1, 2, 3, 4, 5}; // declaring and initializing a vector
    cout << "Elements in the vector: ";
    for(int i : vec1) // using range-based for loop to iterate through the vector
    {
        cout << i << " "; // accessing elements directly
    }
    cout << endl;
    cout<<vec1.front()<<endl; // element at front
    cout<<vec1.back()<<endl; // element at last position
    cout<<vec1.at(3)<<endl; // element at specific position


    return 0;
}