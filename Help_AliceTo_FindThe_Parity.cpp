#include <iostream>
using namespace std;
int main() {
	int l;
	int r;
	cin>>l>>r;
	int x;
	for(int i = l; i <= r; i++) {
		x ^= i;
	}
	if(x % 2 == 0) cout<<"even";
	else cout<<"odd";
	return 0;
}
