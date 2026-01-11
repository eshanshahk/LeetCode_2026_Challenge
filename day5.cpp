/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=m+n;
        int temp=0;
        for(int i=0;i<n;i++){
                nums1[m+i]=nums2[i];
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i-1;j++){
                if(nums1[j]>nums1[j+1]){
                    temp=nums1[j];
                    nums1[j]=nums1[j+1];
                    nums1[j+1]=temp;
                }
            }
        }
        
    }
};