//week09-2.cpp �ǲ߭p�emath �Ĥ@�D
//Leetcode 1523.Count Odd Numbers in an Interval Range
//��low��high�������X�ө_��(�Y���]�t)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
