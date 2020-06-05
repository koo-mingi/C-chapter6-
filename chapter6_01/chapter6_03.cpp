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
			cout << car_num << "는(은) 타이밍벨트 교체 대상입니다.\n";
		else
			cout << car_num << " 타이밍벨트 교체 대상이 아닙니다.\n";
	}

	//1~16: 서울, 34~49: 
	// 1~69 : 승용차 / 70~79 : 승합차 / 80~97 : 화물차 / 98~99 : 특수차
	void car_reg() {
		if (atoi(car_num) >= 1 && atoi(car_num) <= 69) {
			cout << "승용차 입니다." << endl;
		}
		else if (atoi(car_num) >= 70 && atoi(car_num) <= 79) {
			cout << "승합차 차량입니다." << endl;
		}
		else if (atoi(car_num) >= 80 && atoi(car_num) <= 97) {
			cout << "화물차 차량입니다." << endl;
		}
		else if (atoi(car_num) >= 98 && atoi(car_num) <= 99) {
			cout << "승합차 차량입니다." << endl;
		}
	}
};



int main()
{
	car_info car1; // 객체는 heap메모리에 올라간다.
	car_info car2;
	// 멤버 변수 초기화
	//strcpy_s(car1.car_name, "소나타");  // char[]은 strcpy_s함수를 이용해서 초기화 해주면 된다.
	//strcpy_s(car1.car_num, "35너 6897");

	// 차량 번호 받기
	string str;
	cout << "차량 번호를 입력하세요 : ";
	cin>> str;

	// str.substr(시작위치, 글자 개수) : 문자열을 잘라준다.
	// c_str() : string 문자열을 char형으로 만들어 준다.
	strcpy_s(car1.car_num, str.substr(0, 2).c_str());
	

	// 주행 거리 받기
	//car1.distance = 83000;
	cout << "주행 거리를 입력하세요 : ";
	cin >> car1.distance;
	strcpy_s(car2.car_num, str.c_str());

	//함수 띄우기
	car1.st_msg();
	car2.car_reg();


	return 0;
}