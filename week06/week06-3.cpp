// week06-3.cpp leetcode 657 �ǲ߭p�e simulation ��2�D
class Solution {
public:
    bool judgeCircle(string moves) {
        int  x=0,y=0;
        for(char c : moves){
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0 && y==0) return true;
        return false;
    }
};
