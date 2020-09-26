#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int dp[n+1]={0};
	if(n>=0){
		dp[0]=1;
	}
	for(int i=1;i<=n;i++)
	dp[i]=dp[i-1]*i;
	return dp[n];
}
if(n<=1)
return 1;
return n*factorial(n-1);
}
//int pow(int x, int n, int ){
//	if(n==0)
//	return 1;
//	int temp=n/2;
//	if(n%2==0)
//	return pow(x, temp)*pow(x, temp);
//	else
//	return x*pow(x, temp)*pow(x, temp);
//}
double expression(double x, double n){
	double result=0;
	for(int i=0;i<=n;i++)
	result+=pow(x, n)/factorial(n);
	return result;
}
double error(double x, double n){
	return expression(x, n) - pow(2.71, x);
}
int main(){
	double x=5, n=10;
	cout<<expression(5, 10)<<endl;
	cout<<error(5, 10)<<endl;
}
