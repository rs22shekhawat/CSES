#include <iostream>
using namespace std;

// int climbStairs(int n) {
// 	//base case - stopping condition
// 	if(n==0 || n==1)
// 		return 1;

// 	int ans = climbStairs(n-1) + climbStairs(n-2);
// 	return ans;
// }

// int main() {

// 	int n;
// 	cout << "Enter the value of n" << endl;
// 	cin >> n;

// 	int ans = climbStairs(n);
// 	cout << "Answer is : " << ans << endl;

// 	// int a = 0647;
// 	// cout << a << endl;


// 	return 0;
// }


// int search(int *arr,int target,int i,int n){
// 	if(arr[i]==target)
// 	  return i;
// 	else if(i>n)
// 		return -1;

// 	int ans=search(arr,target,i+1,n);
// 	return ans;	
	 
// }

// int main(){
// 	int arr[]={1,2,4,5,6};
// 	int target=6;
// 	int i=0;
// 	int n=5;

// 	if(search(arr,target,i,n)==-1)
// 	  cout<<"-1";
// 	else
// 	  cout<<search(arr,target,i,n);

//     return 0;
// }