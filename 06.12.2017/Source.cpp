#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "������� ����� ������� �� 1 �� 7 : ";
	cin>>nz;
	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ������� f(int& h, int& m, int& s, int sec), ������� " << endl;
		cout << " ��������� ���������� ������, ��������� � ������ ���, �  " << endl;
		cout << " ���������� ��� ����� ���������� (����, ������ � �������) " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 2:

	{
		system("cls");
		cout << "2 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ������� int f(int x), ������� ��������� ����� ��������  " << endl;
		cout << " (�� ������ ���� ������) � ���������� ����� � �������� �������� " << endl;
		cout << " ����. ��������, ����������� ����� 7631, ������������ ����� 1367 " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 3:

	{
		system("cls");
		cout << "3 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " ��������� � ����� ��� �����, ������� ��������� �������� ����� " << endl;
		cout << " ������� � ������ ������. ��������, ������ �� ��������� " << endl;
		cout << " ����������� ����� ����� �������� �����������: 12321, 55555, " << endl;
		cout << " 45554 � 11611. ��������������: ��� �������� �� ������. " << endl;
		cout << " �������� ������� bool f(int N), ������� ����������, �������� �� " << endl;
		cout << " ����������� ����� ����� N ����������� " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		cout << "4 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������, ��� ����� ����� �������� ����������� ������, ���� ��� " << endl;
		cout << " �����������, ������� 1 (�� �� ���� �����) � ����� ���� ��� " << endl;
		cout << " �����. ��������, 6 � ����������� �����, ��� ��� 6=1+2+3. " << endl;
		cout << " �������� ������� bool f(int n), ������� ����������, �������� �� " << endl;
		cout << " �� �������� n ����������� ������. ����������� ��� ������� � " << endl;
		cout << " ���������, ������� ���������� � �������� ��� ����������� ����� " << endl;
		cout << " � ��������� �� 1 �� 1000. " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 5:

	{
		system("cls");
		cout << "5 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ���������, ������� � ������� ������� rand() ������ " << endl;
		cout << " ������ � �������� �� 2 �� 5. � ���� ��������� ����������� ����� " << endl;
		cout << " ����� ��� ��������� 2, ������ ��� ��������� 3, � �.�. " << endl;
		cout << " ����������� �������� switch." << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 6:

	{
		system("cls");
		cout << "6 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " ����� �� ���� ������� � ����� ����� 15 �����, ����� �� 10 ������� " << endl;
		cout << " ����� 125 �����, ����� �� 60 ������� ����� 440 �����. �������� " << endl;
		cout << " ��������� ��������� n �������. ����������, ������� ������� " << endl;
		cout << " ������� ���� �� ������ ����������, ����� ��������� " << endl;
		cout << " ���������� ���������� ������� ���� �� ������ n, � ����� " << endl;
		cout << " ��������� ������������� ������� � ����������. ������� " << endl;
		cout << " ������: ���������� ������� n. �������� ������ � ��� ����� " << endl;
		cout << " �����, ������ ������������ ���������� ������� �� 1, �� 10, �� 60 " << endl;
		cout << " �������. ��������, ��� ����� 129 ��������� ������ ������� 0 1 " << endl;
		cout << " 2 (2 ������ �� 60 ������� � 1 ����� �� 10 �������). " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 7:

	{
		system("cls");
		cout << "7 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " ������ ���������� ������ ��� ������� ��������� �������: 1 " << endl;
		cout << " ������� - 15 �����, 5 ������� - 70 �����, 10 ������� - 125 �����, 20 " << endl;
		cout << " ������� - 230 �����, 60 ������� - 440 �����. ���� ��� ������-�� " << endl;
		cout << " ������� n ���������� ��������� �������� ������������ ������� " << endl;
		cout << " ���������� ���������, ���������� ������� �� ���������� " << endl;
		cout << " �������, ������� ���� ������� ����� �������. " << endl;
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	default:
		system("cls");
		cout << " ���������� ������� �� ����������! " << endl;
		cout << "     *** ������� ENTER *** " << endl;
		system("pause");
		goto start;
		break;
	}


















}