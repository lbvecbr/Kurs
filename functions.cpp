#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#include <fstream>
#include <ctime>


using namespace std;

Blank newBlank(){

	Blank blank;

	blank.zakazchikFio.familija = new char[50];
	blank.zakazchikFio.imja = new char[50];
	blank.zakazchikFio.ochestvo = new char[50];
	blank.MasterFio.familija = new char[50];
	blank.MasterFio.imja = new char[50];
	blank.MasterFio.ochestvo = new char[50];
	blank.nomerTS = new char[30];
	blank.tipObsluj = new char[50];
	blank.vidTS = new char[30];
	blank.dataZakaza.day = 0;
	blank.dataZakaza.month = 0;
	blank.dataZakaza.yaer = 0;
	blank.dataIspolnenija.day = 0;
	blank.dataIspolnenija.month = 0;
	blank.dataIspolnenija.yaer = 0;
	blank.priznakVipoln = 0;
	

	cout << "������ ����� �� "; cin >> blank.nomerTS;
	cout << "������ ��� �����稪� "; cin >> blank.zakazchikFio.familija >> blank.zakazchikFio.imja >> blank.zakazchikFio.ochestvo;
	cout << "������ ��� �� (���横�, �������� ��⮬�����, ��⮡��...) "; cin >> blank.vidTS;
	cout << "��� ���㦨����� (���. ६���, ����᪠...)"; cin >> blank.tipObsluj;
	//cout << "��� �����, �⢥��⢥����� �� ���㦨����� "; cin >> blank.fio.familija >> blank.fio.imja >> blank.fio.ochestvo;
	blank.dataZakaza = setDate();


	cout << blank.dataZakaza.day << ":0" << blank.dataZakaza.month << ":" << blank.dataZakaza.yaer << endl << endl;
	showBlank(blank);
	

	return blank;
}

int record()
{
	ofstream fout("file.txt"); // ᮧ��� ��ꥪ� ����� ofstream ��� ����� � ��뢠�� ��� � 䠩��� cppstudio.txt
    fout << "����� � 䠩���� � �++"; // ������ ��ப� � 䠩�
    fout.close(); // ����뢠�� 䠩�
    system("pause");
    return 0;
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

void showBlank(Blank blank){

	cout << blank.nomerTS << endl;
	cout << blank.zakazchikFio.familija <<" "<< blank.zakazchikFio.imja <<" " << blank.zakazchikFio.ochestvo << endl;
	cout << blank.vidTS << endl;
	cout <<	blank.tipObsluj << endl ; 

}
