
#include <iostream>
#include <vector>
using namespace std;



int getGreatest(vector<int> , int );
vector<int> nextGreaterElement(vector<int>& , vector<int>& );

int main() {
    vector<int>nums1 = {4,1,2};
    vector<int>nums2 = {1,3,4,2};

    nextGreaterElement(nums1, nums2);
}

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //iterate through the first list 

    vector<int> nums3;
    for (int i = 0; i < nums1.size(); i ++) {

        //iterate trhoguh second list and 
        for (int j = 0; j < nums2.size(); j ++) {
            if (nums2[j] == nums1[i]) {
                nums3.push_back(getGreatest(nums2, j));
            }
        }
    }
    return nums3;
}

int getGreatest(vector<int> nums2, int currentIndex) {
    for (int i = currentIndex + 1; i < nums2.size(); i ++) {
        //iterate through second list and find number that is greater than it
        if(nums2[i] > nums2[currentIndex]) {
            return nums2[i];
        }
    }
    return -1; 
}