class Solution {
public:
    int subtractProductAndSum(int n) {
        int product  = 1;
        int sum = 0;
        while(n != 0){
            int remainder = n % 10;
            product *= remainder;
            sum += remainder;
            n  = n / 10;
        }
        int difference = product - sum;
        return difference;
    }
};