#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "header.h"




using namespace std;

Blank newBlank(){

	Blank blank;

	blank.zakazchikFio.familija = new char[100];
	blank.zakazchikFio.imja = new char[100];
	blank.zakazchikFio.ochestvo = new char[100];
	blank.MasterFio.familija = new char[100];
	blank.MasterFio.imja = new char[100];
	blank.MasterFio.ochestvo = new char[100];
	blank.nomerTS = new char[100];
	blank.tipObsluj = new char[255];
	blank.vidTS = new char[100];
	blank.dataZakaza.day = 0;
	blank.dataZakaza.month = 0;
	blank.dataZakaza.yaer = 0;
	blank.dataIspolnenija.day = 0;
	blank.dataIspolnenija.month = 0;
	blank.dataIspolnenija.yaer = 0;
	blank.priznakVipoln = 0;


	system("cls");
	cout << endl << endl;
	cout << "                              Новый Бланк заказа." << endl << endl << endl;
	cout << "           Введите номер ТС: "; cin >> blank.nomerTS; cout << endl;
	cout << "           Введите ФИО заказчика: "; cin >> blank.zakazchikFio.familija >> blank.zakazchikFio.imja >> blank.zakazchikFio.ochestvo; cout << endl;
	cout << "           Введите вид ТС (мотоцикл, легковой автомобиль, автобус...): " << endl << endl;
        cout << "              ";cin >> blank.vidTS; cout << endl;
	cout << "           Тип обслуживания (кап. ремонт, покраска...): " << endl << endl;
	cout << "              "; cin >> blank.tipObsluj; cout << endl;
	cout << "           ФИО мастера, ответственного за обслуживание: " << endl << endl;
	cout << "              "; cin >> blank.MasterFio.familija >> blank.MasterFio.imja >> blank.MasterFio.ochestvo;
	blank.dataZakaza = setDate();
	
	system("cls");
	showBlank(blank);

	int n = 0;

	if(blank.priznakVipoln == 0){

		do{
			cout << endl << "                      Ваш выбор: "; cin >> n;
		}while(n!=1 && n!=2 && n!=3);

		switch(n){
		case 1 : yesOrCansel(blank); break;
		case 2 : 
			blank.priznakVipoln = 1;
			blank.dataIspolnenija = setDate();
			system("cls");
			showBlank(blank);
			do{
				cout << endl << "                      Ваш выбор: "; cin >> n;
			}while(n!=1 && n!=2);
			if(n == 1){ yesOrCansel(blank); break;}
			else {system("cls"); break;}
		case 3 : system ("cls"); break;
		}
	}
	else{
		do{
			cout << endl << "                      Ваш выбор: "; cin >> n;
		}while(n!=1 && n!=2);
		switch(n){
		case 1: yesOrCansel(blank); break;
		case 2: system("cls"); break;
		}

	}

	return blank;
}

int saveBlank(Blank blank){
	system("cls");
	cout << endl << endl;
	cout << "                    "; drawLine('\xC9', '\xCD', '\xBB', 33); cout << endl;
	cout << "                    "; drawConstString('\xBA', "  Бланк заказа успешно сохранен. ", '\xBA' ); cout << endl;
	cout << "                    "; drawLine('\xC8', '\xCD', '\xBC', 33); cout << endl << endl;
	return 1;
}

Today setDate(){

	Today today;
	char buffer[30];
	time_t seconds = time (NULL);
	tm* timeinfo = localtime(&seconds);
	today.yaer = timeinfo->tm_year + 1900;
	today.month = timeinfo->tm_mon + 1;
	today.day = timeinfo->tm_mday;
	return today;

}


