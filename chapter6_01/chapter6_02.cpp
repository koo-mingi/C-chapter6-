#include <iostream>
#include <string>

using namespace std;

// ����ü ��� ���� ����

struct student
{
	// ����ü ��� ���� ����
	char classnumber[20];
	char name[20];
	int grade;
	double avg;

	void stu_avg(int num1, int num2);
};

void student::stu_avg(int num1, int num2) {
	student::avg = (num1 + num2) / 2;
	cout << "��   �� : " << avg << endl;
}


int main()
{
	student st1 = { "7��","ȫ�浿", 95 };
	student st2 = { "3��","����", 83 };

	cout << "st1�� ���� : " << "class - " << st1.classnumber << " / name - " << st1.name << " / grade - " << st1.grade << endl;
	cout << "st2�� ���� : " << "class - " << st2.classnumber << " / name - " << st2.name << " / grade - " << st2.grade << endl;
	/*cout << "��   �� : " << (st1.grade + st2.grade) / 2 << endl;*/
	st1.stu_avg(st1.grade, st2.grade);
}



