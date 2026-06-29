class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1; // last valid element of num1
        int j=n-1; // last valid element of num2
        int k=m+n-1;      // last postion of num1
        while(j>=0){
            if(i>=0 && nums1[i]> nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
    }
};

// Alternate method->
for(int i=0; i<m+n; i++){
		if(i<m){
		nums1[i]=nums1[i];
	}if(i>=m){
		nums1[i]=nums2[i-m];
	}
	} sort(nums1.begin(), nums1.end());
    
    } 
