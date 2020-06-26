#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// 2. 二分
// 思路：二分
// 时间复杂度：O（log n）空间复杂度：O（1）
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    }
};



// 1. 暴力
// 思路：暴力，需要考虑多种边界情况
// 时间复杂度：O（n）空间复杂度：O（1）

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         //考虑到比谁都小或者比谁都大的情况
//         if(target <= nums[0]) return 0;
//         else if(target > nums[nums.size()-1]) return nums.size();
//         else if(target == nums[nums.size()-1]) return nums.size()-1;

//         for(int i = 0; i < nums.size()-1;i++){
//             if(nums[i] == target){
//                 return i;
//             }else if(nums[i] < target && nums[i+1] > target){
//                 return i + 1;
//             }
//         }
//         return nums.size();
//     }
// };