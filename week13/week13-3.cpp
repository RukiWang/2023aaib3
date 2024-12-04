// week13-3.cpp 使用LeetCode 的playground遊樂場寫程式
//右下角,有stdin可輸入資料 輸入
//3 4
//4 3
//2 5
//1 3
//3 9
//3 3
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a); //把數字a放入陣列A
        B.push_back(b); //把數字b放入陣列B
    }//目標:把A從小到大排好 把B從小到大排好
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";//印出來,真的是小到大排好
        ans+=abs(A[i]-B[i]);
    }
    cout<<"加起來的答案是"<<ans;
}
