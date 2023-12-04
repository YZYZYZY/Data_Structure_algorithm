#include <iostream>
#include <stack>

// 定义链表节点结构体
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// 从尾到头打印链表
void printListFromTail(ListNode* head) {
    std::stack<int> stack;
    ListNode* current = head;
    
    // 将链表元素压入栈
    while (current != nullptr) {
        stack.push(current->val);
        current = current->next;
    }

    // 从栈中弹出元素并打印
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
}

// 主函数
int main() {
    // 创建示例链表: 1 -> 2 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    // 从尾到头打印链表
    printListFromTail(head);
    std::cout << std::endl;

    // 清理内存
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
