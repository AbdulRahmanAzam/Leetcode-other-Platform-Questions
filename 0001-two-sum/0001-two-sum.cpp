class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // APPROACH 1
        // for(int i=0; i<nums.size() ; i++)
        //     for(int j=i+1; j< nums.size() ; j++)
        //         if(nums[i]+nums[j] == target)
        //             return {i,j};
        // return {};

        // APPROACH 2
        vector<pair<int, int>> p(nums.size());
        for(int i =0; i< nums.size(); i++){
            p[i] = {nums[i], i};
        }
        sort(p.begin(), p.end());

        int left = 0, right = nums.size() - 1;

        while(left < right){
            if(p[left].first + p[right].first == target){
                return {p[left].second, p[right].second};
            }

            if(p[left].first + p[right].first < target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
}; 