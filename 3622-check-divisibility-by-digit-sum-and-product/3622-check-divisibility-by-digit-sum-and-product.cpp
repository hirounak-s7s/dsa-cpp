class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int prod = 1;

        while (original > 0) {
            int last = original % 10;
            original /= 10;
            sum += last;
            prod *= last;
        }
        return n % (sum + prod) == 0;
    }
};