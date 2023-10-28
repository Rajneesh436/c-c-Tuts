#include<iostream>
#include<cmath>
using namespace std;

int checkIfEven(int n);

void printHi(){
	cout<<"Hi"<<" ";
}

int sum(int a, int b){
	return a+b;
}

//function overloading
int sum(int a, int b, int c){
	return a+b+c;
}

void calculatePower(int base, int power){
	int ans=1;
	for(int i=1;i<=power;i++){
		ans = ans*base;
	}	
	cout<<ans;
}


int main(){
//	int n;
//	cin>>n;
//	int ans = checkIfEven(n);
//	if(ans==1){
//		cout<<"Number is even";
//	}else{
//		cout<<"Number is odd";
//	}
//	printHi();
//	int hey = sum(1,40);
//	int hey2 = sum(1,2,3);
//	cout<<hey2<<endl;
//	cout<<hey;
//	calculatePower(2,7);
//	cout<<pow(2,5);
//	cout<<max(1,2);
//	cout<<abs(-2);
	cout<<log(10);
	return 0;
}

int checkIfEven(int n){
	if(n%2==0) return 1;
	else return 0;
}

