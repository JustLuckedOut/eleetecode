#include <iostream>
using namespace std;

static int maxSize = 7;

void printArray(int[]);
void makeZeroLast(int [], int, int);
void swapper(int [], int);

int main() {
    //int array[7]= {0, 3, 2, 0, 5, 0, 1};
    int array[7]= {0, 0, 0, 0, 0, 0, 0};
    //int array[7]= {1, 2, 0, 0, 0, 0, 0};
    //int array[7]= {0, 0, 0, 0, 0, 2, 1};
    //int array[7]= {2, 3, 4, 5, 6, 2, 1};
    //3251000

    //swapper(array, 7);
    //printArray(array);


    for (int i = 0; i < maxSize; i ++) {
        if(array[i] == 0) {
            for(int j = i; j < maxSize; j ++) {
                if(array[j] != 0) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;

                    break;
                }
            }
        }
    }

    printArray(array);










}

void makeZeroLast(int array[], int index, int currentSize) {
    for (int i = index; i < currentSize - 1; i ++) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void swapper(int array[], int currentSize) {
    int counter = 0;
    for (int i = 0; i < currentSize; i ++) {
        if (array[i] == 0) {
            makeZeroLast(array, i, currentSize - counter);
            counter ++;
        }
    }
}



void printArray(int array[]) {
    for (int i = 0; i < maxSize; i ++) {
        cout << array[i] << endl;
    }
}