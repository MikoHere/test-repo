#include <iostream>

using namespace std;

int main()
{
	string x;
	int y;
	cout<<"Podaj swoje imie: ";
	cin>>x;
	cout<<"Podaj swoj wiek: ";
	cin>>y;
	if (y<25){
		cout<<"Witaj "+x+" mlody kozaku";
	}
	else{
		cout<<"Siema, a teraz pal gume na drzewo staruchu co ty tu jeszcze robisz dzbanie smierdzacy";
	}
	
	return 0;
}
