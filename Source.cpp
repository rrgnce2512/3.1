#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ������� ��� ������ � ����������:\n1 � ���������� \n2 � ������������� \n3 � �����������\n0 � �����\n";
	int x;
	cout << endl << "������� �������: ";
	cin >> x;
	while (x != 0) {
		if (x == 1) {
			cout << "������� ������ �����: ";
			int r;
			cin >> r;
			if (r < 0) {
				cout << "����������� ������ ������\n";
			} else{
				cout << "������� ���������� ������ ���������� ����� ������: ";
				int x, y;
				cin >> x >> y;

				Circle c(x, y, r);
				c.print();
				cout << "��������: " << c.Perimetr() << endl << "�������: " << c.Square() << endl;
			}
		}
		if (x == 2) {
			cout << "������� ���������� ������ ������� ���� �������������� ����� ������: ";
			int x1, y1;
			cin >> x1 >> y1;
			cout << "������� ���������� ������� �������� ���� �������������� ����� ������: ";
			int x2, y2;
			cin >> x2 >> y2;
			
			if (x1 > x2 || y1 > y2) {
				cout << "����������� ����� ����������\n";
			}
			else {
				Rectangle r(x1, y1, x2, y2);
				r.print();
				cout << "��������: " << r.Perimetr() << endl << "�������: " << r.Square() << endl;
			}
		}
		if (x == 3) {
			cout << "������� ���������� ������� ���� ������������ ����� ������: ";
			int x1, y1, x2, y2, x3, y3;
			cin >> x1 >> y1;
			cout << "������� ���������� ������� ���� ������������ ����� ������: ";
			cin >> x2 >> y2;
			cout << "������� ���������� �������� ���� ������������ ����� ������: ";
			cin >> x3 >> y3;

			Triangle t(x1, y1, x2, y2, x3, y3);
			t.print();
			cout << "��������: " << t.Perimetr() << endl << "�������: " << t.Square() << endl;

		}

		cout << endl << "������� �������: ";
		cin >> x;
	}

}