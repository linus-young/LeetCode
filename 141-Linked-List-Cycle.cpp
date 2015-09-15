/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    	// Version 1: 遇到 NULL 指针则可判定不存在环，否则标记访问过的节点，如果某个节点的 next 指向一个已经访问过的节点，则存在环，但这样需要 extra space

    	// ListNode *tail = head->next;
    	// while(tail) {
    	// 	if(tail == NULL)
    	// 		return false;
    	// 	tail = tail->next;
    	// }

    	// Version 2: 龟兔赛跑原理，如果存在环，乌龟和兔子一定能相遇
        // 详细解释可看： https://leetcode.com/discuss/52999/fully-explained-why-fast-and-slow-can-meet-in-the-cycle

    	ListNode *rabbit = head, *tortoise = head;
        while(rabbit && rabbit->next) {
            tortoise = tortoise->next;
            rabbit = rabbit->next->next;
            if(rabbit == tortoise)
                return true;
        }
        return false;

    }
};