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

	cout << "¬ведите команду дл€ работы с редактором:\n1 Ц окружность \n2 Ц пр€моугольник \n3 Ц треугольник\n0 Ц выход\n";
	int x;
	cout << endl << "¬ведите команду: ";
	cin >> x;
	while (x != 0) {
		if (x == 1) {
			cout << "¬ведите радиус круга: ";
			int r;
			cin >> r;
			if (r < 0) {
				cout << "Ќеправильно введен радиус\n";
			} else{
				cout << "¬ведите координаты центра окружности через пробел: ";
				int x, y;
				cin >> x >> y;

				Circle c(x, y, r);
				c.print();
				cout << "ѕериметр: " << c.Perimetr() << endl << "ѕлощадь: " << c.Square() << endl;
			}
		}
		if (x == 2) {
			cout << "¬ведите координаты левого нижнего угла пр€моугольника через пробел: ";
			int x1, y1;
			cin >> x1 >> y1;
			cout << "¬ведите координаты правого верхнего угла пр€моугольника через пробел: ";
			int x2, y2;
			cin >> x2 >> y2;
			
			if (x1 > x2 || y1 > y2) {
				cout << "Ќеправильно ввели координаты\n";
			}
			else {
				Rectangle r(x1, y1, x2, y2);
				r.print();
				cout << "ѕериметр: " << r.Perimetr() << endl << "ѕлощадь: " << r.Square() << endl;
			}
		}
		if (x == 3) {
			cout << "¬ведите координаты первого угла треугольника через пробел: ";
			int x1, y1, x2, y2, x3, y3;
			cin >> x1 >> y1;
			cout << "¬ведите координаты второго угла треугольника через пробел: ";
			cin >> x2 >> y2;
			cout << "¬ведите координаты третьего угла треугольника через пробел: ";
			cin >> x3 >> y3;

			Triangle t(x1, y1, x2, y2, x3, y3);
			t.print();
			cout << "ѕериметр: " << t.Perimetr() << endl << "ѕлощадь: " << t.Square() << endl;

		}

		cout << endl << "¬ведите команду: ";
		cin >> x;
	}

}