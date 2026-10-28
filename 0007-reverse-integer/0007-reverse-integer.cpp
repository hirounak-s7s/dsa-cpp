class Solution {
public:
    int reverse(int x) {
        int last;
        long rev = 0;
        int original = x;
        while (original != 0) {
            last = original % 10;
            original = original / 10;
            rev = rev * 10 + last;
            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        return rev;
    }
};