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
		cout << "		1.  �������� ������ ��-���㦨����� ������: " << endl;
		cout << "		2.  �������� ⠡���� �������: " << endl;
		cout << "		3.  ���� �� �.�.�. �����稪�: " << endl;
		cout << "		4.  ���� �� �.�.�. �����: " << endl;
		cout << "		5.  ���� �� ������ ��: " << endl;
		cout << "		6.  ���� �� ��� ������: " << endl;
		cout << "		7.  ���� �� ��� �ᯮ������:" << endl;
		cout << "		8.  ���� �� ���� ��:" << endl;
		cout << "		9.  ���� �� ⨯� ��-���㦨�����:" << endl;
		cout << "		10. ���� �� ������ �ᯮ������:" << endl;
		cout << "		11. ����஢�� �� �.�.�. �����稪�:" << endl;
		cout << "		12. ����஢�� �� �.�.�. �����:" << endl;
		cout << "		13. ����஢�� �� ���� ��:" << endl;
		cout << "		14. ����஢�� �� ��� �ᯮ������:" << endl;
		cout << "		15. ����஢�� �� ������ �ᯮ������:" << endl;
		cout << endl;
		cout << "		�롥�� �㭪� ����� ���室���� ���� -> " ;
		cin >> n;

		switch (n){
			case 1: blank = newBlank();
					break;
			
		
			default: cout << "�� ����� ���ࠢ���� �����";
		}

	} while (n != 15);
  
	

  
}