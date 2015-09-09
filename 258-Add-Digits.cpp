class Solution {
public:
    int addDigits(int num) {
    	// Version 1: with loop
  //   	int sum = 0;
  //   	int remain;
  //   	while(num) {
  //   		remain = num % 10;
  //   		num /= 10;
  //   		sum += remain;
  //   	}
  //   	if(sum == 0)
  //   		return 0;
  //   	else if(sum % 9 == 0)
  //   		return 9;
  // 	return sum % 9;

		// Version 2: without loop
		int ans = num % 9;
		if(ans == 0 && num > 0)
			ans = 9;
		return ans;
    }
};