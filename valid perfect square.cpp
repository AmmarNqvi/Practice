/*
Given a positive integer num,
write a function which returns True if num 
is a perfect square else returns False.
*/
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long sqr = 0;
        for(long i=0;;i++ ){
            sqr  = i*i;
            if(sqr == num)
                return true;
            if(sqr > num)
                break;
        }
        return false;
    }
};