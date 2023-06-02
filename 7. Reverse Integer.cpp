class Solution {
public:
    int reverse(int x) {
        int n = 0;
        int p;
        while(x!=0){
            p = x%10;
            if(n > (INT_MAX/10) || n < (INT_MIN/10)){
                return 0;
            }
            n = n*10+p;
            x = x/10;
        }
        return n;

    }
};