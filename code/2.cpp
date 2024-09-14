class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j;
        vector<int> result;
        while(i<nums.size()-1)
        {
            j=i+1;
            while(j<nums.size())
            {
                //cout<<nums[i]+nums[j]<<endl;
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                j++;
            }
            i++;
        }
        return result;
    }
};