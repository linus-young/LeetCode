class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	// 使用两个“指针”来维护，都从头部开始遍历，遇到不为 0
    	// 的就和另一个指针指向的数（可能为0， 可能为自身）交换位置，
    	// 交换后两个指针都往后移一位
    	for(int i = 0, j = 0; i < nums.size(); ++i) {
    		if(nums[i] != 0)
    			swap(nums[i], nums[j++]);
    	}
    }
};