//week09-2.cpp 學習計畫math 第一題
//Leetcode 1523.Count Odd Numbers in an Interval Range
//找low到high中間有幾個奇數(頭尾包含)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
