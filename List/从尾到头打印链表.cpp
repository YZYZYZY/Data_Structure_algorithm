#include <vector>

struct ListNode{
    int val;
    ListNode *next;
    //构造函数？
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    vector<int> printListFromTailToHead(ListNode* head){
        vector<int> res;
        ListNode* p = head;
        while(p != NULL){
            res.push_back(p->val);
            p = p->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



