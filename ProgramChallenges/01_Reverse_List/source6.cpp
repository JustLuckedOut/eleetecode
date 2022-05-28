#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;

     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    /*

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* currentNode1 = l1;
        ListNode* currentNode2 = l2;

        //store beginning node
        ListNode* l3 = nullptr;
        //store the connection node
        ListNode* l3Temp = nullptr;

        
        int sum = currentNode1->val + currentNode2->val;

        if (sum > 10) {
            sum = 0;
        }
        l3 = new ListNode(sum);


        while(currentNode1->next != nullptr || currentNode2->next != nullptr) {

            //swap temp to make the head the new node
            l3Temp = l3;


            //get new head
            currentNode1 = currentNode1->next;
            currentNode2 = currentNode2->next;

            //get sum
            int sum = currentNode1->val + currentNode2->val;
            if (sum >= 10) {
                sum = 0;
            }

            //create new head
            l3 = new ListNode(sum, l3Temp);
        }
        return l3;
    }
    */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* currentNode1 = l1;
        ListNode* currentNode2 = l2;

        bool incrementNext = false;

        ListNode* l3;
        int sum = l1->val + l2->val;
        l3 = new ListNode(sum);
        if (l3->val >= 10) {
            l3->val = sum - 10;
            incrementNext = true;
        }
        ListNode* currentNode3 = l3;
        ListNode* tempNode3 = nullptr;

        //process
        //keep the starting node so we can return it

        //keep the temp of current node to create bridge to new node
        //iterate through making the new starting node the enxt one 


        currentNode1 = currentNode1->next;
        currentNode2 = currentNode2->next;

        while(currentNode1 != nullptr || currentNode2 != nullptr) {
            //move to next node so it skips the first node

            ListNode test;


            if (currentNode1 == nullptr) {
                currentNode1 = &test;
            }
            if (currentNode2 == nullptr) {
                currentNode2 = &test;
            }

            sum = currentNode1->val + currentNode2->val;

            if (incrementNext == true) {
                sum ++;
                incrementNext = false;
            }

            if (sum >= 10) {
                sum -= 10;
                incrementNext = true;
            }

            tempNode3 = currentNode3;
            currentNode3 = new ListNode(sum);
            //connect teh tep node and current node
            tempNode3->next = currentNode3;

            currentNode1 = currentNode1->next;
            currentNode2 = currentNode2->next;
        }
        //add a 1 at the end if sum > 10

        if (incrementNext == true) {
            currentNode3->next = new ListNode(1);
        }





        return l3;

    }




    void printListNode(ListNode l1) {
        ListNode* currentNode = l1.next;

        cout << "[" << l1.val;

        while(currentNode != nullptr) {
            cout << "," << currentNode->val;
            currentNode = currentNode->next;
            ListNode* newNode = new ListNode();

        }
        cout << "]";
        //ListNode node13(last);
        //ListNode node12(4, &node13);
        //ListNode node11(first, &node12);
    }

};


 

int main() {
    //ListNode node13(3);
    //ListNode node12(4, &node13);
    //ListNode node11(2, &node12);

    //ListNode node23(4);
    //ListNode node22(6, &node23);
    //ListNode node21(5, &node22);

    ListNode l1(2, new ListNode(4, new ListNode(3)));
    ListNode l2(5, new ListNode(6, new ListNode(4)));

    //ListNode node17(9);
    //ListNode node16(9, &node17);
    //ListNode node15(9, &node16);
    //ListNode node14(9, &node15);
    //ListNode node13(9, &node14);
    //ListNode node12(9, &node13);
    //ListNode node11(9, &node12);

    //ListNode node24(9);
    //ListNode node23(9, &node24);
    //ListNode node22(9, &node23);
    //ListNode node21(9, &node22);
    Solution tester;
    tester.printListNode(*(tester.addTwoNumbers(&l1, &l2)));
}
