class Solution {
public:
    int pivotInteger(int n) {
        int x;
        int total = 0,leftSum=0;
        for(int i=1; i<=n; i++){
            total += i;
        }
        for(int i=1; i<=n; i++){
            int rightSum = total - leftSum - i;
            if(leftSum == rightSum){
                return i;
            }
            leftSum += i;
        }
        return -1;
    }
};