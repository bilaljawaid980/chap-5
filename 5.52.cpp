#include<iostream>
using namespace std;
int response(){
	int num,res,yes=0,no=0;
	cout << "IS 2 * 2 =4"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 9 * 9 =76"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 2 * 8 =15"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 9 * 7 =63"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 5 * 8 =40"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout <<endl<< "NO OF TRUE ANSWERS="<<yes<<endl;
	cout <<endl<< "NO OF WRONG ANSWERS="<<no<<endl;
	float per=yes*100/5;
	cout << endl<<"WINNING PERCENTAGE="<<per<<endl;
	if(per<=75){
		cout << "ASK YOUR TEACHER FOR HELP"<<endl;
	}
	else{
		cout << "LEVEL UP";
	}

}
int main(){
	response();
}
