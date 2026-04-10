#include<iostream>
#include<string>
#include <limits.h>
using namespace std;

int opr(string s, int l) {
	int n = s.length();
	int opr = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') {
			opr++;
			i += l - 1;
		}
	}
	return opr;
}
int main() {
	int n;
	int k;
	cin>>n>>k;
	string str;
	cin>>str;

	int s = 1;
	int e = n;
	int minVal = INT_MAX;
	while(s <= e) {
		int m = s + (e - s) / 2;
		if(opr(str, m) > k) {
			s = m + 1;
		}else {
			e = m - 1;
			minVal = min(minVal, m);
		}
	}
	cout<<minVal;
	return 0;
}
