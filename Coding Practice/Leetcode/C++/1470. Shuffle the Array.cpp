class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector <int> ping;
        for(int i=0;i<nums.size()/2;i++)
        {
            ping.push_back(nums[i]);
            ping.push_back(nums[n+i]);
        }
        return ping;
    }
};