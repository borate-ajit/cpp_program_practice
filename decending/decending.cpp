#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[5] = {8 , 5 , 9 , 1 , 2};

    cout << "input is : ";
    for(int i = 0; i < 5; i++){
        cout << "\t" << array[i];
    }
    cout << "\n";

    for(int i = 0; i < 5; i++){
        //cout << "itteration " << i << endl;
        for(int j = i+1; j < 5; j++){
            //cout << i << j << " ";
            if(array[i] < array[j]) {
                swap(&array[i], &array[j]);
                //cout << "\t" << array[i] << array[j];
            }
        }
    }

    cout << "output is : ";
    for(int i = 0; i < 5; i++){
        cout << "\t" << array[i];
    }
    cout << "\n";

    return 0;
}