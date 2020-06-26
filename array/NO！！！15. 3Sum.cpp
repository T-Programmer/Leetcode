#include<vector>
#include<algorithm>
using namespace std;
// 1.双指针
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        //由小到大排序
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size() - 1;
        while(j - i != 2){
            int target = 0 - nums[i] - nums[j];
            
        }
    }
};