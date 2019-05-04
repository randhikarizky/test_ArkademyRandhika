#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	int size;
	cout<<"Masukkan ukuran : ";cin>>size;
	cout<<endl;
	if(size % 2 == 0){
		cout<<"Angka harus ganjil!";
		system("pause");
	}else{
		for(int i=0;i<size;i++){
			if(i == size/2){
				cout<<"*  *  *  *  *\n";
			}else{
				cout<<"*  =  =  =  *\n";
			}
		}
	}
}
