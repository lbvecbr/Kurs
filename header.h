#ifndef HEADER_H_
#define HEADER_H_

#include <string.h>
using namespace std;

struct Today{
	int day;
	int month;
	int yaer;
};

struct FIO{
	char* familija;
	char* imja;
	char* ochestvo;
};


struct Blank {
	int priznakVipoln;
    FIO zakazchikFio;
	FIO MasterFio;
    char* nomerTS;
	char* vidTS;
	char* tipObsluj;
	Today dataZakaza;
	Today dataIspolnenija;
};


	



Blank newBlank();
Today setDate();
void showBlank(Blank blank);
int saveBlank(Blank blank);
void drawLine(char start, char ch, char end, int n);
void drawConstString(char start, char* str, char end);
void drawVarString(char start, string str, char end);
void yesOrCansel(Blank blank);




#endif
