class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while( ss >> word){
            // 大括號裡什麼都不做
        }
        return word.length(); //最後殘留的那個字
    }
};
