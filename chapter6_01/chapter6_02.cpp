#include <iostream>
#include <string>

using namespace std;

// 구조체 멤버 변수 지정

struct student
{
	// 구조체 멤버 변수 지정
	char classnumber[20];
	char name[20];
	int grade;
	double avg;

	void stu_avg(int num1, int num2);
};

void student::stu_avg(int num1, int num2) {
	student::avg = (num1 + num2) / 2;
	cout << "평   균 : " << avg << endl;
}


int main()
{
	student st1 = { "7반","홍길동", 95 };
	student st2 = { "3반","장길산", 83 };

	cout << "st1의 정보 : " << "class - " << st1.classnumber << " / name - " << st1.name << " / grade - " << st1.grade << endl;
	cout << "st2의 정보 : " << "class - " << st2.classnumber << " / name - " << st2.name << " / grade - " << st2.grade << endl;
	/*cout << "평   균 : " << (st1.grade + st2.grade) / 2 << endl;*/
	st1.stu_avg(st1.grade, st2.grade);
}



