#week03-5.py �ǲ߭p�e��5�D
#LeetCode 459. Repeated Substring Pattern �r��O�ѭ��ƪ��r��զX�_��
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s+s #��r��s+s�ܨ⭿����
        s2 = s2[1:len(s2)-1] #����1, �k��1
        #print(s2)
        if s in s2: return True
        else: return False
