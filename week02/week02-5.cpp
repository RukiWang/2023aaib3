class Solution {
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {},H2[256] = {}; //���O0
        for(char c : s){
            H1[c]++;
        }
        for(char c : t){
            H2[c]++;
        }

        for(int i=0;i<256;i++){ //��Ӱ}�C,�v�@�ˬd
            if(H1[i] != H2[i]) return false;
        } //�p�G����,�k�䪺�X�{���Ƥ��P,�N����
        //�p�G�e�����S����,���ܦn��
        return true; //�N�O���\�F
    }
};
