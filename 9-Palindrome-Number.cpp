class Solution {
public:
    bool isPalindrome(int x) {

        string xs = to_string(x);
        string oxs = xs;
        reverse(xs.begin(), xs.end());
        if( oxs == xs){
            return true;
        }
        else
            return false;
    }

};