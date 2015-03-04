#include <iostream>
#include <string>
#include "header.h"

using namespace std; 


void drawLine(char start, char ch, char end, int n){
	cout << start;
	for(int i=0; i<n; i++){
		cout << ch;
	}
	cout << end;
}





void drawConstString(char start, char* str, char end){
	cout << start;
	cout << str;
	cout << end;
}





void drawVarString(char start, string str, char end){
	cout << start;
	cout << " " << str;
	for(int i=0; i < (48 - str.size()); i++) cout << " ";
	cout << end;
}


//___________________________________________________________________________________________________________________________________________________


void showBlank(Blank blank){


	// �����⮢�� ����� �������� blank � �뢮�� �� �࠭

	string familija = blank.zakazchikFio.familija;
	string imja = blank.zakazchikFio.imja;
	string otchectvo = blank.zakazchikFio.ochestvo;
	string fioZak = familija + " " + imja + " " + otchectvo;

        familija = blank.MasterFio.familija;
	imja = blank.MasterFio.imja;
	otchectvo = blank.MasterFio.ochestvo;
	string fioMas = familija + " " + imja + " " + otchectvo;

	string nomerTS = blank.nomerTS;
	string vidTS = blank.vidTS;
	string tipObsluj = blank.tipObsluj;

	char Day[100]; _itoa_s(blank.dataZakaza.day, Day, 10); string day = Day;           
	if(blank.dataZakaza.day < 10) day = "0" + day;
	char Mon[100]; _itoa_s(blank.dataZakaza.month, Mon, 10); string mon = Mon;
	if(blank.dataZakaza.month < 10) mon = "0" + mon;
	char Year[100]; _itoa_s(blank.dataZakaza.yaer, Year, 10); string year = Year;
	string dataZakaza = day + ":" + mon + ":" + year;

	_itoa_s(blank.dataIspolnenija.day, Day, 10); day = Day;
	if(blank.dataIspolnenija.day < 10) day = "0" + day;
	_itoa_s(blank.dataIspolnenija.month, Mon, 10);  mon = Mon;
	if(blank.dataIspolnenija.month < 10) mon = "0" + mon;
	_itoa_s(blank.dataIspolnenija.yaer, Year, 10);  year = Year;
	string dataIspolnenija = "";
	if(blank.dataIspolnenija.day == 0) dataIspolnenija = " ";
	else dataIspolnenija = day + ":" + mon + ":" + year;

	string priznakVipoln = "";
	if(blank.priznakVipoln == 0) priznakVipoln = "�� �믮�����";
	else priznakVipoln = "�믮�����";
	
	
	// �뢮� ������ �� �࠭
	
	cout << " "; drawLine('\xC9', '\xCD', '\xBB', 76); cout << endl;
	cout << " "; drawLine('\xBA', ' ', '\xBA', 76); cout << endl;
	cout << " "; drawConstString('\xBA', "                                 ����� ������                               ", '\xBA'); cout << endl;
	cout << " "; drawLine('\xBA', ' ', '\xBA', 76); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC2', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " �.�.�. �����稪�        ", '\xB3'); drawVarString(' ', fioZak, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ����� ��                ", '\xB3'); drawVarString(' ', nomerTS, '\xBA'); cout << endl; 
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ��� ��                  ", '\xB3'); drawVarString(' ', vidTS, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ��� ���㦨�����        ", '\xB3'); drawVarString(' ', tipObsluj, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ��� ������             ", '\xB3'); drawVarString(' ', dataZakaza, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " �.�.�. �����          ", '\xB3'); drawVarString(' ', fioMas, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25); drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ��� �ᯮ������         ", '\xB3'); drawVarString(' ', dataIspolnenija, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC5', 25);drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawConstString('\xBA', " ����� ������           ", '\xB3'); drawVarString(' ', priznakVipoln, '\xBA'); cout << endl;
	cout << " "; drawLine('\xC7', '\xC4', '\xC1', 25);drawLine('\xC4', '\xC4', '\xB6', 49); cout << endl;
	cout << " "; drawLine('\xBA', ' ', '\xBA', 76); cout << endl;
	if(blank.priznakVipoln == 0){
		cout << " "; drawConstString('\xBA', "      1. ���࠭���        2. ������� ��� \"�믮�����\"       3.�⬥��        ", '\xBA'); cout << endl;}
	else{
		cout << " "; drawConstString('\xBA', "                1. ���࠭���                       2. �⬥��                ", '\xBA'); cout << endl;}  
	cout << " "; drawLine('\xBA', ' ', '\xBA', 76); cout << endl;
	cout << " "; drawLine('\xC8', '\xCD', '\xBC', 76); cout << endl;

}

//___________________________________________________________________________________________________________________________________________________


void yesOrCansel(Blank blank){
	int n;
	do{
		system("cls");
		showBlank(blank);
		cout << endl << "                   �� 㢥७��?      1. ��       2. �⬥��:  ";  cin >> n;
	}while(n!=1 && n!=2);
	if(n == 1){
		saveBlank(blank);
	}else system("cls");
}


