#include <string>
#include <iostream>
using namespace std;
class Solution {
    
    public:

        int numJewelsInStones(string jewels, string stones) {
            int counter = 0;
            for (int i = 0; i < jewels.size(); i ++) {
                for (int j = 0; j < stones.size(); j ++) {
                    if (jewels[i] == stones[j]) {
                        counter ++;
                    }

                }
            }
            return counter;
             
        }

};



int main() {
    Solution testere;

    cout << testere.numJewelsInStones("Aa", "saafa");

}
    
    
    
