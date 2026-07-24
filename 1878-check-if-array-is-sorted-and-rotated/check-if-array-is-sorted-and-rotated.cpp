class Solution {
public:
    bool check(vector<int>& nums) {

        int e = nums.size() - 1;
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] > nums[i]) {
                count++;
            }
        }

        if (nums[e] > nums[0]) {
            count++;
        }

        return count <= 1;
    }
};