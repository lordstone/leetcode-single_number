class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int sum = nums[0] ^ nums[1];
        for(int i = 2; i < nums.size(); i++) {
            sum = sum ^ nums[i];
        }
        return sum;
    }
};
