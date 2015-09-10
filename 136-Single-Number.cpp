class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Version 1: hash table, 需要选取合适的 hash 函数，而且会使用 extra memory
        // 为所有数生成一个 hash 值，存到数组 arr 中，比如 1 对应的 hash 值是 5，
        // arr[5] = 1, 下次如果还碰到 1 的时候设
        // arr[5] = 2，一遍循环下来再重头判断哪个数对应的 hash 值在数组中为 1 即为所求

        // Version 2:
        // x ^ x = 0
        // x ^ y = ???(x!=y)
        // 0 ^ x = 0 (x 为任意数)

    	int ans = 0;

    	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
    		ans = ans ^ (*it);
    	}

    	return ans;
    }
};