#include <iostream>
#include <conio.h>
#include "header.h"
#include <ctime>

using namespace std;


void main() {
	
	int n;
	Blank blank;
	
  do{
	    // cout << "\xbb";
		cout << endl;
		cout << "		1.  Создание бланка тех-обслуживания клиента: " << endl;
		cout << "		2.  Показать таблицу бланков: " << endl;
		cout << "		3.  Поиск по Ф.И.О. заказчика: " << endl;
		cout << "		4.  Поиск по Ф.И.О. мастера: " << endl;
		cout << "		5.  Поиск по номеру ТС: " << endl;
		cout << "		6.  Поиск по дате заказа: " << endl;
		cout << "		7.  Поиск по дате исполнения:" << endl;
		cout << "		8.  Поиск по виду ТС:" << endl;
		cout << "		9.  Поиск по типу тех-обслуживания:" << endl;
		cout << "		10. Поиск по статусу исполнения:" << endl;
		cout << "		11. Сортировка по Ф.И.О. заказчика:" << endl;
		cout << "		12. Сортировка по Ф.И.О. мастера:" << endl;
		cout << "		13. Сортировка по виду ТС:" << endl;
		cout << "		14. Сортировка по дате исполнения:" << endl;
		cout << "		15. Сортировка по статусу исполнения:" << endl;
		cout << endl;
		cout << "		Выберите пункт нажав подходящую цифру -> " ;
		cin >> n;

		switch (n){
			case 1: blank = newBlank();
					break;
			
		
			default: cout << "Вы ввели неправильный номер";
		}

	} while (n != 15);
  
	

  
}