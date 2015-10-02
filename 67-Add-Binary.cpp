class Solution {
public:
    string addBinary(string a, string b) {
    	// Version 1: suck version
    	// 在较短的字符串前面填充 0， 从末位开始逐位相加，注意处理首位的情况
        int alen = a.length();
        int blen = b.length();
        int len = max(alen, blen);
        int dlen;

        string c, d;
        string ans;
        ans = ans.insert(0, len, '0');

        if(alen > blen) {
        	c = a;
        	d = b;
        	dlen = blen;
        } else {
        	c = b;
        	d = a;
        	dlen = alen;
        }

        d = d.insert(0, len-dlen, '0');

        for(int i = len-1; i >= 0; i--) {
        	if(c[i] == '1' && d[i] == '1') {

        		if(i != 0)
        			ans[i-1] += 1;
        		else {
        			ans = ans.insert(0, "1");
        		}
        	}
        	else if(c[i] == '0' && d[i] == '0') {
        		continue;
        	}
        	else {
        		if(ans[i] == '1') {
        			ans[i] = '0';
        			if(i != 0)
        				ans[i-1] += 1;
        			else {
        				ans[0] = '0';
        				ans = ans.insert(0, "1");
        			}
        		} else
        			ans[i] = '1';
        	}
        }

        return ans;
    }
};