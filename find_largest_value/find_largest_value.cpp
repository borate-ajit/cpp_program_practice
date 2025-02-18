/**
 * Time complexity: log
 * Space complexity: log
 * 
 * 
 1
log
n
n log
n2
 */


#include<iostream>
using namespace std;

int find_largest(int *data, int length) {
    int largest_number = *data;
    data++;

    for(int i = 1; i < length; i++) {
        cout << i << " " << largest_number << " " << *data << endl;
        if(largest_number < *data) {
            largest_number = *data;
        }
        data++;
    }   
    return largest_number;
}

int main() 
{
    int array[5] = {50, 8, 90, 10, 1};
    int largest_number = find_largest(array, (sizeof(array)/sizeof(int)));
    cout << "\n Largest value is " << largest_number;
}
