#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	string var[3] = {"rock", "scissors", "paper"};
	srand(time(NULL));
	string a;
	cout<<"Игроки считают вместе вслух «Камень… Ножницы… Бумага… Раз… Два… Три», одновременно качая кулаками. Существуют и другие варианты счёта, распространённость которых различается в разных городах и регионах, например, «Рас(е)л-двас(е)л-трис(е)л!», «Пи-Ни-Ко!», «Эна-бена-цо!», «Ван-чу-фри» «Су-ли-фа», «Цу-е-фа», «Бу-це-фа», «Аль… ман… джуз!», «Чу-ва-чі!» и другое. На счёт «Три» они одновременно показывают при помощи руки один из трёх знаков: камень, ножницы или бумагу."<<endl;
	cout<<"INSTRUCTION"<<endl;
	cout<< "Enter rock, scissors or paper: "; 
	cin >>a;
	int b= 0;// РЎСѓРІРѕСЂРѕРІ
	if (a == "rock" or a == "scissors" or a =="paper"){		
			if (a == "rock"){
		cout <<"You have choosen rock"<<endl;
	}
	if (a == "scissors"){
		cout <<"You have choosen scissors"<<endl;
	}
	if (a == "paper"){
		cout <<"You have choosen paper"<<endl;
	}		
	string c = var[(rand()%3)];
	if (c == "rock"){
		cout <<"Enemy have choosen rock"<<endl;
	}
	if (c == "scissors"){
		cout <<"Enemy have choosen scissors"<<endl;
	}
	if (c == "paper"){
		cout <<"Enemy have choosen paper"<<endl;
	}		 
	if (a == c){
		cout<<"Draw"<<endl;
	}	
	if (a == "paper" and c == "scissors"){
		cout<<"You have lost"<<endl;
	}
	if (a == "paper" and c == "rock"){
		cout<<"You have won"<<endl;
	}
	if (a == "rock" and c == "scissors"){
		cout<<"You have won"<<endl;
	}
	if (a == "rock" and c == "paper"){
		cout<<"You have lost"<<endl;
	}
	if (a == "scissors" and c == "rock"){
		cout<<"You have lost"<<endl;
	}
	if (a == "scissors" and c == "paper"){
		cout<<"You have won"<<endl;
	}
		}	
		else{
			cout<<"Please, read instruction one more time ";
	}
}
