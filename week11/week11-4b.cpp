// week11-4b.cpp Part2: BoPiFa
#include <iostream>
int f(int n){ //Part2:BoPiFa
	int ans = 0;
	while(n>0){
		ans+=n%10;
		n=n/10;
	}
	return ans;
}
using namespace std;
int main(){
	int n;
	while( cin>>n ){
		if(n==0) break;
		n = f(n); // Part2: BoPiFa function
		cout<<n<<"\n";
	}
}
