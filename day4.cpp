//Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size=arr.size();
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                for(int j=size-1;j>i;j--){
                    arr[j]=arr[j-1];
                }
                if (i + 1 < size)
                    arr[i + 1] = 0;
                i++;
            }
        }
    }
};