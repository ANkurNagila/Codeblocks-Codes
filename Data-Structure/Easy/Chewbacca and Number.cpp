#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin>>s;

	for(int i=0;s[i]!='\0';i++){
		int ele=s[i]-'0';
		if(i==0 && ele==9){
			continue;
		}
		else{
			ele=min(ele,9-ele);
			s[i]=ele+'0';
		}

	}

	cout<<s<<endl;

	return 0;
}
