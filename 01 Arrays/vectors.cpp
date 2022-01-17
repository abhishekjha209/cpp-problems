#include<bits/stdc++.h>
using namespace std;

int main(){

    // Vectors: A dynamic array that can grow and shrink as needed. 

    vector<int> tempArr1; //vector of int, of size 0
    vector<int> tempArr2 = {1,2,3,4}; // initalizing a vector.

    // initialising using fill constructor.
    vector<int> tempArr3(10,7); //  Insert 10 times, 7 in a row. 

    // copying content of one vector to another.
    vector<int> tempArr4(tempArr3); //  Copies contents of tempArr3 to tempArr4.


    /* vector member functions */
    vector<int> arr = {1,2,3,4}; // initalizing an array
    arr.size();  // gives the length of the vector (no. of elements)
    arr.capacity(); // gives the current/underline capacity of vector.
    arr.push_back(5);  // pushes back in O(1)
    arr.pop_back();  // popes last item in O(1)
    

    /* insert functions in vector. */
    vector v(5,3); // initializing a vector of size 5, with 3 in it.
    arr.insert(arr.begin(), 56); // inserts specifed number at given iterator(here, v.begin())
    arr.insert(arr.begin(), 4, 100); // inserts 4 times 100 at specified iterator
    arr.insert(arr.begin(), v.begin()+2, v.begin()+ 4);  // picks vector range and fix it at specified iterator.


    /* erase functions in vector. */
    // Erases either a single element(position) or a range of elements ([first,last))
    arr.erase(v.begin()+1); // erases element at position 1
    arr.erase(v.begin()+2, v.begin()+ 4); // erases range of elements from 2 to 4.


    /* extras */
    vector<int> arr2;
    arr.swap(arr2); // swaps items bw 2 vectors
    arr.clear(); // makes the vector empty
    arr.empty(); // returns boolean, if the vector is empty?

    /* algorithms */
    sort(arr.begin(), arr.end()); // sorts the vector in ascending order.
    sort(arr.begin(), arr.end(), greater<int>()); // sorts the vector in descending order. 
    reverse(arr.begin(), arr.end()); // reverses the vector.
    unique(arr.begin(), arr.end()); // removes duplicates from the vector.
    remove(arr.begin(), arr.end(), 3); // removes all the elements that are equal to 3.
    count(arr.begin(), arr.end(), 3); // counts the number of elements that are equal to 3.
    find(arr.begin(), arr.end(), 3); // returns iterator to the first element that is equal to 3.
    binary_search(arr.begin(), arr.end(), 3); // returns boolean, if 3 is present in the vector.

    /* iterators */
    vector<int>::iterator it; // iterator for vector.
    it = arr.begin(); // initializing iterator.
    it = arr.end(); // initializing iterator.
    it = arr.insert(it, 100); // inserts 100 at the specified iterator. 
    it = arr.erase(it); // erases the element at the specified iterator.
    it = arr.erase(it, it+2); // erases the range of elements from it to it+2.
    

    /* for looping inside vector  */
    // prints all the element of the vector.
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << endl;
    }
    // prints all the element using for each.
    for(auto i: arr){
        cout << i << endl;
    }
    // prints all element using iterator
    vector<int>::iterator it;
    for(it = arr.begin(); it != arr.end(); it++){
        cout << *it << endl;
    }


    return 0;
}