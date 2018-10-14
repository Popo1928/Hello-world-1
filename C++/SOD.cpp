#include<iostream>
using namespace std;

/* SUM OF DIGITS OF A NUMBER ENTERED */
int main(){
	int N,num=0;
	cin>>N;
	while(N!=0){
		num+=N%10;
		N/=10;
	}
	cout<<num<<"\n";
	return 0;
}
