class Solution {
public:
    int fib(int n) {

        if(n > 30 || n < 0){
            return -1;
        }
        if (n == 0 ){
            return 0;
        }
        if (n == 1){
            return 1;
        }

        else {

            return fib(n-1) + fib (n-2);
        }
        
    }
};