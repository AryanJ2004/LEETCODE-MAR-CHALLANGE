public class Solution {
    public boolean isPalindrome(int x) {
        boolean res = true;
        if (x<0) {
            return false;
        }
        int len = getLength(x);
        for (int i = 0; i<=len/2; i++) {
            if (getIndx(x, i) != getIndx(x, len-i-1)) {
                res = false;
                break;
            }
        }
        return res;
    }
    private char getIndx(int x, int i) {
        int n = x >> i;
        return (char)(n%10);
    }
    private int getLength(int x) {
        int l = 0;
        while (x>0) {
            x = x >> 1;
            l++;
        }
        return l;
    }
}