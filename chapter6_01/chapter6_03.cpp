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
			cout << car_num << " ��(��) Ÿ�ֺ̹�Ʈ ��ü ����Դϴ�.\n";
		else
			cout << car_num << " ��(��) Ÿ�ֺ̹�Ʈ ��ü ����� �ƴմϴ�.\n";
	}
};

int main()
{
	car_info car1; // ��ü�� heap�޸𸮿� �ö󰣴�.

	car1.distance = 83000;



	return 0;
}