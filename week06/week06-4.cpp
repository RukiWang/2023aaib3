// week06-4.cpp �ǲ߭p�e Simulation ��1�D
// LeetCode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N = a.size(); //���o�Ӧh�Ӽ�
            if(s=="+") a.push_back(a[N-1]+a[N-2]);
            else if(s=="D") a.push_back(a[N-1]*2);
            else if(s=="C") a.pop_back(); //�R��
            else a.push_back(stoi(s)); //�Ʀr�[�J
        }
        int ans = 0; //��̭��Ʀr�����[�_��
        for(int b : a) ans+=b;
        return ans;
    }
};
