#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

string generate(){
	string random = "";
	static const string text = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	
	for(int i=1;i<=32;i++){
		random += text[rand()%text.size()];
	}
	return random;
}

int main(){
	int x;
	cout<<"Masukkan jumlah data : ";cin>>x;
	cout<<endl;
	for(int i=1;i<=x;i++){
		cout<<generate()<<endl;
	}
	return 0;
}

