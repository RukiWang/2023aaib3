#week03-5.py 學習計畫第5題
#LeetCode 459. Repeated Substring Pattern 字串是由重複的字串組合起來
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s+s #把字串s+s變兩倍長度
        s2 = s2[1:len(s2)-1] #左少1, 右少1
        #print(s2)
        if s in s2: return True
        else: return False
