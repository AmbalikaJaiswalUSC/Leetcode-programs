Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.

 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.

  class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        while(i<n &&j<m){
            if(a[i]==b[j]){
                return a[i];
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
    }
};
