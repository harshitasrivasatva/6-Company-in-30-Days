int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long ans =dividend / divisor;

        return ans;
    }
