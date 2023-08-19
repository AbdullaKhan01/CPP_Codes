/*The question says to count the no of pairs in an array whose sum is strictly less than target*/
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a = nums[i];
            for(int j=i+1;j<n;j++){
                int b = nums[j];
                if(a+b<target)
                        count++;
            }
        }
        return count;
    }
};
