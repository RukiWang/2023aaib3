//LeetCode 459. Repeated Substring Pattern �r��O�ѭ��ƪ��r��զX�_��
class Solution { //week03-5.cpp �ǲ߭p�e��5�D
public:
    bool repeatedSubstringPattern(string s) {
       string s2 = s+s;
       int N = s2.length();
       return s2.substr(1,N-2).find(s) != string::npos; //nops����:�S���o�Ӧ�m�B�ܤj�ܤj
    }   //substr()���r�� ��1 �k��1 (���ӬO0...N-1 �{�b�ܦ� 1...N-2)
};
