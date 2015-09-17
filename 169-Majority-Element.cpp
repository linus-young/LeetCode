class Solution {
public:
    int majorityElement(vector<int>& nums) {

    	// Version 1: > O(n), map is quite slow
    	map<int, int> counter;
    	for(int i = 0; i < nums.size(); ++i) {
    		counter[nums[i]]++;
    	}

    	// for(auto iter : counter) {
    	for(map<int, int>::iterator iter = counter.begin(); iter != counter.end(); ++iter) {
    		if(iter->second > nums.size() / 2)
    			return iter->first;
    	}


    	// Version 2: O(n)
    	// 因为要找的数的个数肯定大于其他所有数个数之和，所以假设第一个是要找的，
    	// 并初始化计数器为 1
    	// 遇到相同的就把计数器 + 1，不同的就计数器 - 1，
    	// 最终要找的数会把其他的数抵消掉，而只剩下我们要找的那个数
    	// 至于为什么我们会找到这个数，因为只有当 cnt = 0 时我们才会更新 ans
    	int cnt = 0;
    	int ans = 0;
    	for(int i = 0; i < nums.size(); ++i) {
    		if(cnt == 0) {
    			ans = nums[i];
    			cnt++;
    		}
    		else {
    			if(nums[i] == ans)
    				cnt++;
    			else
    				cnt--;
    		}
    	}

    	return ans;
    }
};