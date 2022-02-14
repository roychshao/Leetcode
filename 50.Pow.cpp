class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1.0;
        long p = labs(n);
        double power = myPow(x * x, p / 2) * (p % 2 ? x : 1);
        return n > 0 ? power : 1 / power;
    };
};
