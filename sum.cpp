/*
Calculate the sum of two integers a and b
Without using the operators + and -
*/

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
			int carry = a & b;
			a ^= b;
			b = carry << 1;//shift carry by 1
		}
		return a;
        
    }
};