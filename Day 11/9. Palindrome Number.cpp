class Solution {
    public boolean isPalindrome(int x) {

        if(x < 0 || ( x!=0 && x%10 == 0)){
            return false;
        }

        int temp=x;
        int reverse=0;
        int ans=0;

        while(x!=0){

            reverse = x%10;
            ans = (ans*10)+ reverse;
            x = x/10;
        }
        return temp == ans;
}
}