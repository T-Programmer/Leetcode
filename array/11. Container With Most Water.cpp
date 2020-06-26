#include<vector>
#include<algorithm>
using namespace std;


// 2.双指针法
// 时间复杂度O（N）双指针遍历一次底边宽度N，空间复杂度（1）
// https://leetcode-cn.com/problems/container-with-most-water/solution/container-with-most-water-shuang-zhi-zhen-fa-yi-do/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int i = 0,j = height.size()-1;
        while(i != j){
            result = max(result,min(height[i] , height[j]) * (j - i));
            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        return result;
    }
};



// 1.暴力法
// 时间复杂度：O（n²） 空间复杂度：O（1）
// 不可取，超时
// class Solution{
// public:
//     int maxArea(vector<int>& height){
//         int result = 0;
//         int temp;
//         for(int i = 0;i < height.size()-1;i++){
//             for(int j = 0;j < height.size();j++){
//                 temp = (j - i) * min(height[i] , height[j]);
//                 result = max(temp,result);
//             }
//         }
//         return result;
//     }
// };