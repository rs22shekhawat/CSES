#include <iostream>
using namespace std;

int factorial(int i,int n) {

	//base case
	if(i ==n )
		return n;

	// int chotiProblemAns = factorial(n-1);
	// int badiProblemAns = n * chotiProblemAns;

	// return badiProblemAns;

	
    cout<<i<<" ";
	int cp=factorial(i+1,n);
	int bp=i*cp;
	return bp;
}

int main() {

	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;

	int ans  = factorial(1,n);

	cout << "Answer is: " << ans << endl;

	return 0;
}