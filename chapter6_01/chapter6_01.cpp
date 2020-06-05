#include <iostream>
#include <string>

using namespace std;

//struct people
//{
//	//구조체의 멤버변수
//	char irum[20];
//	int age;
//	char job[20];
//	int pay;
//	
//	//메소드 : 동작정의 => behavior
//	void calc_pay();
//};
//
//void people::calc_pay()
//{
//	pay = pay - (pay*0.033);
//}
//
//
//int main()
//{
//	people p = { "홍길동",30,"회사원",30000000 };
//	//c에서 struct::p.irum , p.age, p.job 로 선언해서 일일이 초기화를 해주어야 한다.
//	p.calc_pay();
//	cout << "이름 : " << p.irum << "  나이 : " << p.age << endl;
//	cout << "직업 : " << p.job << "  실 수령액 : " << p.pay << endl;
//
//	cout << "---------------------------------" << endl;
//
//	people p2 = { "장길산",40,"회사원",4000000 };
//	p2.calc_pay();
//	cout << "이름 : " << p2.irum << "  나이 : " << p2.age << endl;
//	cout << "직업 : " << p2.job << "  실 수령액 : " << p2.pay << endl;
//
//}


struct people
{
	//구조체의 멤버변수
private:
	string irum;
	int age;
	string job;
	int pay;

	//메소드 : 동작정의 => behavior
public:
	void calc_pay();
	void init(string a, int b, string c, int d);
};

void people::init(string a,int b, string c,int d) {
	people::irum = a;
	people::age = b;
	people::job = c;
	people::pay = d;

}
void people::calc_pay()
{
	pay = pay - (pay*0.033);
	cout << "이름 : " << irum << "  나이 : " << age << endl;
	cout << "직업 : " << job << "  실 수령액 : " << pay << endl;
}


int main()
{
	people p;
		p.init("홍길동",30,"회사원",30000000 );
		p.calc_pay();
	
	cout << "---------------------------------" << endl;

	people p2;
		p2.init( "장길산",40,"회사원",4000000 );
		p2.calc_pay();

}