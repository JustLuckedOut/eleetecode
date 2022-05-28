#include <iostream>
using namespace std;


static int maxSize = 5;

void printArray(int[]);
void reverseArray(int[]);

int main() {
    int array[maxSize];

    //fills out array
    for (int i = 0; i < maxSize; i ++) {
        array[i] = i;
    }






    printArray(array);
    cout << endl;
    reverseArray(array);
    cout << endl;
    printArray(array);
}



void printArray(int array[]) {
    for (int i = 0; i < maxSize; i ++) {
        cout << array[i] << endl;
    }
}

void reverseArray(int array[]) {
    int sizeCheck = maxSize;
    int temp = 0;
    for (int i = 0; i < sizeCheck; i ++) {
        int temp = array[i];
        array[i] = array[(sizeCheck - 1)];

        array[sizeCheck - 1] = temp;
        sizeCheck --;
    }
}



