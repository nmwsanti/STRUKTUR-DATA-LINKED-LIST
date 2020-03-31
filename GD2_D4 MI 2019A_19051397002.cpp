#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main () {
	char kata[35]="D4 Manajemen Informatika 2019";
	int inputkata;
	int i;
	
	cout << "~~~~STACK MEMBALIKAN KATA~~~~\n";
	
	cout << "Kata yang dimasukkan adalah : " << kata << endl;
	inputkata=strlen (kata); //strlen=menghitung jumlah karakter kata
	cout << "Kata dibalik menjadi : ";
	for (i=inputkata;i>=1;i--)
	{
		char stack= kata [i-1];
		cout << stack;
	}
	getch ();
	}
