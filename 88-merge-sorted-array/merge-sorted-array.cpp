class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        
        // Continue while there are still elements to process in nums2
        while (p2 >= 0) {
            // If nums1 still has elements and its current element is strictly greater
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                // Otherwise, nums2's element is greater or equal
                nums1[p] = nums2[p2];
                p2--;
            }
            p--; // Move the placement pointer backwards
        }
    }
};