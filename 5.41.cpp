#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num);
int main(){
	int n;
	cout << "ENTER A NUMBER TO CHECK IF ITS PRIME OR NOT :"<<endl;
	cin >>n;
	if(isPrime(n)){
		cout << "PRIME NUMBER"<<endl;
	}
	else{
		cout << "NOT A PRIME NUMBER"<<endl;
	}
}
bool isPrime(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num % i==0){
			return false;
		}
	}
		
			return true;
		
	}

