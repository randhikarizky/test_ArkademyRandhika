#include <iostream>
#include <conio.h>
#include <cstring>
#include <cctype>
#include <sstream> 

using namespace std;

string username;
string password;

bool cek_user(string user){
	if(user.length() != 8){
			return false;
		}else{
			for(int i=0;i<user.length();i++){
				if(isupper(user[i])){
					return false;
				}
			}
		}
	return true;
}	
	

bool cek_password(string pass){
	bool hasUpper = false;
	bool hasLower = false;
	bool hasNumber = false;
	bool hasSymbol = false;
	if(pass.length() < 8){
		return false;
	}else{
		for(int i=0;i<pass.length();i++){
			if(isupper(pass[i])){
				hasUpper = true;
			}else if(islower(pass[i])){
				hasLower = true;
			}else if(pass.at(i) == '1' || pass.at(i) == '2' || pass.at(i) == '3' || pass.at(i) == '4' || pass.at(i) == '5' || pass.at(i) == '6' || pass.at(i) == '7' || pass.at(i) == '8' || pass.at(i) == '9' || pass.at(i) == '0'){
				hasNumber = true;
			}else if(pass.at(i) == '!' || pass.at(i) == '@' || pass.at(i) == '#' || pass.at(i) == '$' || pass.at(i) == '%' || pass.at(i) == '^' || pass.at(i) == '&' || pass.at(i) == '*' || pass.at(i) == '(' || pass.at(i) == ')' || pass.at(i) == '-' || pass.at(i) == '_'){
				hasSymbol = true;
			}
		}		
		if(!(hasUpper && hasLower && hasNumber && hasSymbol)){
			return false;
		}
	}
	return false;	
}

int main(){
	cout<<"Masukkan Username : ";cin>>username;
	if(cek_user(username)){
		cout<<"Username bisa digunakan!\n";
		cout<<"Masukkan Password : ";cin>>password;
		if(cek_password(password)){
			cout<<"Password anda harus lebih dari 8 karakter dan kombinasi huruf (besar & kecil), angka dan simbol!\n";
			system("pause");
			system("cls");
		}else{
			cout<<"Password bisa di gunakan!";
			system("pause");
		}		
	}else{		
		cout<<"Username harus 8 karakter dan hanya lowercase!\n";	
		system("pause");
		system("cls");
	}	
	system("Pause");	
}


