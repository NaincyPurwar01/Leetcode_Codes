class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int temp;
        int max1=INT_MIN;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                temp = height[i] * (j-i);
                max1 = std::max(temp,max1);
                i++;
            }
            else if(height[i]>=height[j])
            {
                temp = height[j] * (j-i);
                max1 = std::max(temp,max1);
                j--;
                // if(height[i]>)
            }
            else
            j--;
        }
        return max1;
        
    }
};