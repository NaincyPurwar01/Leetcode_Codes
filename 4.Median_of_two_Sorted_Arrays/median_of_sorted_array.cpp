class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Initialize the variable values
        int i=0 , j = 0;
        float temp;
        //New Array
        vector<int> merge_nums;
        //Merge both sorted array and its time complexity is O(log(m+n))
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<=nums2[j])
            {
                merge_nums.push_back(nums1[i]);
                i++;
            }
            else
            {
                merge_nums.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            merge_nums.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            merge_nums.push_back(nums2[j]);
            j++;
        }
        int n = nums1.size()+nums2.size();
        //Find median in merge array
        for(int i = 0;i<merge_nums.size();i++)
        cout<<merge_nums[i]<<"\t";
        if(n%2==0)
            temp =(float) (merge_nums[n/2] + merge_nums[(n/2)-1])/2;
        else
            temp =(float)( merge_nums[(n/2)]);
        return temp;
        
    }
};