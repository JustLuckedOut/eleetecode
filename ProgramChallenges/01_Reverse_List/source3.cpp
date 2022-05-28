
#include <iostream>
using namespace std;

void fibonacciProcess(int);
int fibonacciRecursion(int , int , int );


int main() {
    int before = 0;
    int current = 1;
    //N = 2
    //0, 1, 1

    cout << fibonacciRecursion(0, 1, 1);
    cout << endl;
}
int fibonacciRecursion(int before, int current, int amount) {
    //ensures 0 and 1 are always the first two numbers of the sequence
    if(before == 0 && current == 1) {
        if (amount == 0) {
            return 0;
        } else if (amount == 1) {
            return 1;
        }
        amount -= 2;
    }

    cout << before << ": " << amount << endl;
    //(0, 1, 2) // gives us 1
    if (amount > 0) {
        amount --;
        return fibonacciRecursion(current, before + current, amount);
    } else {
        return before + current;
    }
}


void fibonacciProcess(int n) {

    int before = 0;
    int current = 1;
    int temp = 0;
    
    cout << n << " steps!" << endl;

    if (n == 0) {
        cout << before;
    } else if (n==1) {
        cout << current;
    } else {
        for(int i = 0; i <= n; i ++) {
            cout << before << ", ";
            temp = current;
            //set the current to new number
            current = before + current;
            before = temp;


        }
    }

}