class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
        	return 1;
        else if(n == 2)
        	return 2;
        else {
        	int a = 1, b = 2;
        	int x;
        	for(int i = 3; i <= n; ++i) {
        		x = a + b;
        		a = b;
        		b = x;
        	}
        	return x;
        }

        // Recursion solution will give you a TLE
        // if(n == 1)
        // 	return 1;
        // else if(n == 2)
        // 	return 2;
        // else {
        // 	return climbStairs(n - 1) + climbStairs(n - 2);
        // }
    }
};