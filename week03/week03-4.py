#LeetCode 28.Find the Index of the First Occurrence in a String
#學習計畫第4題 Easy在一堆草裡haystack,找到一隻針needle
#在 Python 只要一行 a.find(b) 在字串a裡找到了字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
