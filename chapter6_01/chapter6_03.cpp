#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//클래스 선언
class car_info
{
	// 멤버 변수 선언
public:
	char car_name[30];
	char car_num[12];
	int distance;

public:
	void st_msg()
	{
		if (distance >= 80000)
			cout << car_num << " 는(은) 타이밍벨트 교체 대상입니다.\n";
		else
			cout << car_num << " 는(은) 타이밍벨트 교체 대상이 아닙니다.\n";
	}
};

int main()
{
	car_info car1; // 객체는 heap메모리에 올라간다.

	car1.distance = 83000;



	return 0;
}