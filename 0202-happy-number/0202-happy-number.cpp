class Solution {
public:
    int help(int n){
        int ans = 0;
        while(n != 0){
            int r = n%10;
            ans += r*r;
            n /=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = n,fast = n;
        do{
            slow = help(slow);
            fast = help(help(fast));
        }while(slow != fast);
        if(slow==1) return true;
        else return false;
    }
};