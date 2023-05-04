#include<iostream>
using namespace std;
int response(){
	int num,diff,res,yes=0,no=0;
	float per;
	cout << "ENTER YOUR DIFFICULTY LEVEL FROM 3 OR 4"<<endl;
	cin >> diff;
	switch(diff){
		case 3:{
		
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
	 per=yes*100/5;
	cout << endl<<"WINNING PERCENTAGE="<<per<<endl;
	if(per<=75){
		cout << "ASK YOUR TEACHER FOR HELP"<<endl;
	}
	else{
		cout << "LEVEL UP!";
	
	}
	
	
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
	per=yes*100/5;
	cout << endl<<"WINNING PERCENTAGE="<<per<<endl;
	if(per<=75){
		cout << "ASK YOUR TEACHER FOR HELP"<<endl;
	}
	else{
		cout << "LEVEL UP!";
	break;
		}
	}
	
	



case 4:{

		cout << "IS 19*19=537"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 9 * 57 =332"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 2 * 81 =162"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 9 * 70 =630"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
	cin >> res;
	if(res==1){
		yes++;
	}
	else{
		no++;
	}
	cout << "IS 5 * 80 =400"<<endl<<"IF YES PRESS 1 ELSE PRESS 2"<<endl;
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
		cout << "LEVEL UP!";
	}
	
	
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
	per=yes*100/5;
	cout << endl<<"WINNING PERCENTAGE="<<per<<endl;
	if(per<=75){
		cout << "ASK YOUR TEACHER FOR HELP"<<endl;
	}
	else{
		cout << "LEVEL UP!";
	break;
}
	}
			
}
}

int main(){
	response();
}
