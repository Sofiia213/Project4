// Lab_03_3.cpp
// < ��������� ����� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= 0)
		y = ((-R / 6) * (x + 6));
	else
		if (0 < x && x <= R)
			y = -sqrt(pow(R, 2) - pow(R, 2));
		else
			if (R < x && x <= 2*R)
				y = R + sqrt(pow(R,2)-(x-2*pow(R,2)));
			else
					y = R + -R/(2*R)*(x-0);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}