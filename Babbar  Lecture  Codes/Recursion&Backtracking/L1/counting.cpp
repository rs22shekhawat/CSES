#include <iostream>
using namespace std;

void printCounting(int  &n) {
	//base case
	if(n == 0) {
		return;
	}
	//processing
	cout << n << " ";
	//recursive relation
	n=n-1;
	printCounting(n);	
	// cout<<n<<" ";
}








// int squareFind(int x,int n,int i){
// 	if(i==n){
// 		return x;
// 	}

// 	int ans=x*squareFind(x,n,++i);
// 	return ans;
// }

int main() {

	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;
	printCounting(n);
	cout << endl;




	// int x=2;
	// int n=5;
	// int i=1;
	// int ans=squareFind(x,n,i);
	// cout<<"ans is "<<ans<<endl;



	return 0;
}