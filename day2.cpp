//Find Numbers with Even Number of Digits

class Solution {
public:
    int even=0;
    int findNumbers(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){//accessing each array elements
            int count=0;
            if(nums[i]==0){
            count=1;
        }else{
            while(nums[i]!=0){//counting the digits
            nums[i]/=10;
            count+=1;
            }
        }
        if(count%2==0){//checking the current element's sum of digit is event or not
            even+=1;
        }
    }
    return even;//print total count of even numbers
}
};