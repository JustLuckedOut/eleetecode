#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
        vector< vector<int> > generate(int numRows) {
            vector< vector<int> > oneForAll;
            vector<int> vectorRow;

            if (numRows >= 1) {
                vectorRow.push_back(1);
                oneForAll.push_back(vectorRow);
                vectorRow.clear();
            }
            if (numRows >= 2) {
                vectorRow.push_back(1);
                vectorRow.push_back(1);
                oneForAll.push_back(vectorRow);
                vectorRow.clear();
            }
            if (numRows >= 3) {
                for (int i = 2; i < numRows; i ++) {
                    vectorRow.push_back(1);
                    for (int j = 1; j < i ; j ++) {
                        //get previous row and make it new numb
                        vectorRow.push_back(oneForAll[i - 1][j - 1] + oneForAll[i - 1][j]);
                    }
                    vectorRow.push_back(1);
                    oneForAll.push_back(vectorRow);
                    vectorRow.clear();
                
                }

            }

            return oneForAll;



        }


    void printAll(vector< vector<int> > numCols) {
        for (int i = 0; i < numCols.size(); i ++) {
            cout << "[";

            for (int j = 0; j < numCols[i].size(); j ++) {
                if (j + 1 < numCols[i].size()) {
                    cout << numCols[i][j] << ", ";
                } else {
                    cout << numCols[i][j];
                }
            }
            cout << "], ";
        }
    }
};


int main() {
    Solution tester;
    tester.printAll(tester.generate(4));
    
    return 0;
}

