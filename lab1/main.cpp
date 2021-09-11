//���������� ���������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ���������� a b c ����� ������: ";

	double a, b, c, x1, x2;

	cin >> a >> b >> c;

	if (cin.fail() || cin.peek() != 10)
	{
		cout << "������� ����� ������ �����!";
	}
	else
	{
		cout << "������ ����������: " << a << endl << "������ ����������: " << b << endl << "������ ����������: " << c << endl;

		int disc = (b * b) - (4 * a * c);

		int sqrtD = sqrt(disc);

		if (disc < 0)
		{
			cout << "��� ������" << endl;
			return 0;
		}

		if ((sqrtD * sqrtD) == disc)
		{
			if (disc == 0)
			{
				x1 = (-b) / (2 * a);
				cout << "���� ������: " << x1 << endl;
			}
			else
			{
				x1 = (-b + sqrtD) / (2 * a);
				x2 = (-b - sqrtD) / (2 * a);
				cout << "������ ������: " << x1 << endl;
				cout << "������ ������: " << x2 << endl;
			}
		}
		else
		{
			cout << "������������ �� ��������� �� ��� �����!";
		}
	}
}



//���� �����
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n = 0;

	cout << "������� ���������� �����: ";
	cin >> n;

	if (cin.good() == false)
	{
		cout << "������� ����� ������ �����!";
	}
	else if (n < 0) {
		cout << "������� ����� ������ ������������� �����!";
	}
	else
	{
		if (n % 10 == 1) {
			cout << "� ���� " << n << " ������";
		}
		else if ((n % 10 >= 5 <= 20)) {
			cout << "� ���� " << n << " �����";
		}
		else
		{
			cout << "� ���� " << n << " ������";
		}
	}
}




//�����������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c;

	cout << "������� ������� ������������: ";

	cin >> a >> b >> c;

	if (cin.fail() || cin.peek() != 10)
	{
		cout << "������� ����� ������ �����!";
	}
	else if (a < 0 || b < 0 || c < 0)
	{
		cout << "������� ����� ������ ������������� �����!";
	}
	else
	{
		cout << "������� �: " << a << endl << "������� b: " << b << endl << "������� c: " << c << endl;

		if (a == b && a == c && b == c)
		{
			cout << endl << "�����������: �������������";
		}
		else if (a == b && a == c && b == c)
		{
			cout << endl << "�����������: ��������������";
		}

		else if (pow(c, 2) == pow(a, 2) + pow(b, 2))
		{
			cout << endl << "�����������: �������������";
		}
		else
		{
			cout << endl << "�����������: ��������������";
		}
	}
}