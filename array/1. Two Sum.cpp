#include<vector>
#include<map>
using namespace std;


// 一次哈希表
// 思路：每次插入哈希表的时候，对表进行遍历，找到是否存在相匹配的值
// 时间复杂度：O（n）空间复杂度：O（n）
class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        vector<int> result;
        map<int,int> hash;
        for(int i = 0;i < nums.size();i++){
            int complement = target - nums[i];
            if(hash.find(complement) != hash.end()){
                result.push_back(hash.find(complement)->second);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};


// 两次哈希表
// 时间复杂度：O（n） 空间复杂度：O（n）
// class Solution{
// public:
//     vector<int> twoSum(vector<int>& nums,int target){
//         vector<int> result;
//         map<int,int> hash;
//         for(int i = 0;i < nums.size();i++){
//             hash.insert(pair<int,int>(nums[i],i));
//         }
//         for(int i = 0;i < nums.size();i++){
//             int complement = target - nums[i];
//             if(hash.find(complement) != hash.end() && hash.find(complement)->second != i){
//                 result.push_back(i);
//                 result.push_back(hash.find(complement)->second);
//                 return result;
//             }
//         }
//         return result;
//     }
// };



// 第一种：暴力法
// 时间复杂度：O（n²） 空间复杂度：O(1)
// class Solution{
// public:
//     vector<int> twoSum(vector<int>& nums,int target){
//         vector<int> result;
//         for(int i = 0;i < nums.size()-1;i++){
//             int num = target - nums[i];
//             for(int j = i + 1;j < nums.size();j++){
//                 if(nums[j] == num){
//                     result.push_back(i);
//                     result.push_back(j);
//                     return result;
//                 }
//             }
//         }
//         return result;
//     }
// };
