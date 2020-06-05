#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Ŭ���� ����
class car_info
{
	// ��� ���� ����
public:
	char car_name[30];
	char car_num[12];
	int distance;

public:
	void st_msg()
	{
		if (distance >= 80000)
			cout << car_num << "��(��) Ÿ�ֺ̹�Ʈ ��ü ����Դϴ�.\n";
		else
			cout << car_num << " Ÿ�ֺ̹�Ʈ ��ü ����� �ƴմϴ�.\n";
	}

	//1~16: ����, 34~49: 
	// 1~69 : �¿��� / 70~79 : ������ / 80~97 : ȭ���� / 98~99 : Ư����
	void car_reg() {
		if (atoi(car_num) >= 1 && atoi(car_num) <= 69) {
			cout << "�¿��� �Դϴ�." << endl;
		}
		else if (atoi(car_num) >= 70 && atoi(car_num) <= 79) {
			cout << "������ �����Դϴ�." << endl;
		}
		else if (atoi(car_num) >= 80 && atoi(car_num) <= 97) {
			cout << "ȭ���� �����Դϴ�." << endl;
		}
		else if (atoi(car_num) >= 98 && atoi(car_num) <= 99) {
			cout << "������ �����Դϴ�." << endl;
		}
	}
};



int main()
{
	car_info car1; // ��ü�� heap�޸𸮿� �ö󰣴�.
	car_info car2;
	// ��� ���� �ʱ�ȭ
	//strcpy_s(car1.car_name, "�ҳ�Ÿ");  // char[]�� strcpy_s�Լ��� �̿��ؼ� �ʱ�ȭ ���ָ� �ȴ�.
	//strcpy_s(car1.car_num, "35�� 6897");

	// ���� ��ȣ �ޱ�
	string str;
	cout << "���� ��ȣ�� �Է��ϼ��� : ";
	cin>> str;

	// str.substr(������ġ, ���� ����) : ���ڿ��� �߶��ش�.
	// c_str() : string ���ڿ��� char������ ����� �ش�.
	strcpy_s(car1.car_num, str.substr(0, 2).c_str());
	

	// ���� �Ÿ� �ޱ�
	//car1.distance = 83000;
	cout << "���� �Ÿ��� �Է��ϼ��� : ";
	cin >> car1.distance;
	strcpy_s(car2.car_num, str.c_str());

	//�Լ� ����
	car1.st_msg();
	car2.car_reg();


	return 0;
}