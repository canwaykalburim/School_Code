#include <iostream>
#include <iomanip>
using namespace std;

#define size_d 100
#define SizeName 10
const int SizeAdd = 20;
const int size_c = 200;

extern int x = 50 , y = 2;

// 1일 차
void Pro()
{
	int a = 10;
	float b = 2.5;
	char c = 'e';
	char d[30] = " ";

	cin >> d;
	cout << "\n" << a << "\n" << b << "\n" << c << "\n" << d << endl;
}

// 2일 차
class Person
{
	int man, woman, sum;
public:
	void itset(int a, int b);
	int itsum();
};
void Person::itset(int a, int b)
{
	man = a;
	woman = b;
}
int Person::itsum()
{
	sum = man + woman;
	return sum;
}
void Pro2()
{
	Person p1, p2;
	p1.itset(2, 3);
	p2.itset(20, 30);
	cout << " sum1: " << p1.itsum() << "\n sum2: " << p2.itsum() << endl;
}

void Pro3()
{
	int data = 100;
	int &rdata = data;
	cout << data << ", " << rdata << endl;
	rdata = 200;
	cout << data << ", " << rdata << endl;
	cout << &data << ", " << &rdata << endl;
}

int sum(int x, int y);

void Pro4()
{
	int a, b, c;
	cout << "두 수를 입력하세요: ";
	cin >> a >> b;
	c = sum(a, b);
	cout << "a와 b의 합 계산\n" << c;
}

int sum(int x, int y) { return x + y; }

void Pro5() 
{
	cout << "int는 " << sizeof(int) << "byte이다." << endl;
	cout << "char는 " << sizeof(char) << "byte이다." << endl;
	cout << "short는 " << sizeof(short) << "byte이다." << endl;
	cout << "float는 " << sizeof(float) << "byte이다." << endl;
	cout << "double은 " << sizeof(double) << "byte이다." << endl;
}

void Pro6() {
	int a2[3] = { 1,2,3 };
	int b2[2][2] = { {1, 2}, {3, 4} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << b2[i][j] << endl;
		}
	}
}

void Pro7()
{
	cout << "10진 정수형 상수: " << 80 << endl;
	cout << "8진 정수형 상수: " << 0120 << endl;
	cout << "16진 정수형 상수: " << 0x50 << endl;
}

void Pro8() 
{
	char MunJa = 'a';
	int Gap = 34;
	float Silsu = 212.34, Hap;
	Hap = MunJa + Gap + Silsu;
	cout << "Hap의 값: " << Hap << endl;
}

void Pro9()
{
	float Gap1 = 2.11, Gap2 = 13.5;
	cout << "Gap1 + gap2: " << Gap1 + Gap2 << endl;
	cout << "gap2 / Gap1: " << (int)Gap2 / (int)Gap1 << endl;
}

void Pro10() 
{
	int a = 10, b = 5;
	cout << "x * y : " << x * y << endl;
	cout << "a / b : " << a / b << "\n";
}

void Pro11()
{
	register int i;
	for (i = 4; i > 0; i--) 
	{
		register int j = 10;
		j *= i;
		cout << j << "\t";
	}
	cout << i << endl;
}

void Pro12()
{
	int x = 2, yd;
	yd = x * size_d;
	cout << "yd: " << yd << endl;

	int yc;
	yc = x * size_c;
	cout << "yc: " << yc << endl;
}

void Pro13()
{
	unsigned short int Day;
	enum Week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
	Week Weekend;
	cout << "Week : Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6\n";
	cout << "Weekend :Sat_5,Sun_6" << endl;
	cin >> Day;
	Weekend = (Week)Day;
	if (Weekend == Sat || Weekend == Sun)
		cout << "주말입니다"; 
	else
		cout << "주말이 아닙니다";
}

// 3일차
void Pro14() 
{
	char Name[SizeName];
	char Address[SizeAdd];

	cout << "이름: ";
	cin >> Name;
	cout << "주소: ";
	cin	>> Address;
	cout << "이름은" << Name <<"이고, " << "주소는" <<Address << "입니다." << endl;
}

void Pro15()
{
	int x = 12, y = 1234;

	cout << "10진수:" << dec << x << endl;
	cout << "8진수:" << oct << x << endl;
	cout << "16진수:" << hex << x << endl;
	cout << endl;
	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl;
}

void Pro16() 
{
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout.precision(4);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

void Pro17()
{
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout.setf(ios::showpoint);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout.precision(4);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

void Pro18()
{
	int ion = 30;

	cout << "The Number of ion" << endl;
	cout.setf(ios::showpos);
	cout << ion << endl;
	cout << hex << ion << endl;
	cout.setf(ios::uppercase);
	cout << hex << ion << endl;
	cout.setf(ios::showbase);
	cout << ion << hex << endl;
}

void Pro19()
{
	int ion = 0;

	cout << "자리 위치 지정\n" << endl;
	cout << "--------------\n";
	cout.setf(ios::showpos);
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	while (ion < 3) 
	{
		cout.width(13);
		cout << ++ion << endl;
	}
	cout << "--------------\n";
	cout.setf(ios::left, ios::adjustfield);
	while (ion > 0) 
	{
		cout.width(13);
		cout << ion-- << endl;
	}
	cout << "--------------\n";
	cout.setf(ios::internal, ios::adjustfield);
	while (ion < 3)
	{
		cout.width(13);
		cout << ++ion << endl;
	}
	cout << "--------------\n";
}

void Pro20() 
{
	const int Length = 30;
	char Name[Length];
	char Address[Length];

	cout << "이름: ";
	cin.getline(Name, Length);
	cout << "주소: ";
	cin.getline(Address, Length);
	cout << "이름은 " << Name << "이고, " << "주소는 " << Address << "입니다." << endl;
}

// 4일차
void Pro21() 
{
	int x = 12, y = 8, z = 3, r1, r2;
	char ch = 'b';
	r1 = x > y > z;
	r2 = (ch == 'a' + 1);
	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
}

void Pro22() 
{
	int a = 10, b = 9, c;
	a++;	b++;
	cout << "a: " << a << " b: " << b << endl;
	a--;	b--;
	cout << "a: " << a << " b: " << b << endl;

	++a;	++b;
	cout << "a: " << a << " b: " << b << endl;
	c = a++;	++b;
	cout << "a: " << c << " b: " << b << endl;
}

void Pro23() 
{
	int x, y, r1, r2;
	x = 5;	y = 7;
	r1 = ++x - 1;
	r2 = x++ + --y;
	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
}

void Pro24()
{
	for (int fr = 2; fr < 10; fr++)
	{
		for (int bh = 1; bh < 10; bh++)
		{
			cout << fr << " X "<< bh << "= " << fr * bh << endl;
		}
		cout << endl;
	}
}

void Pro25()
{
	int nInput;
	cin >> nInput;
	cout << endl;
	for (int Ust = 1; Ust <= nInput * 2; Ust++)
	{
		if (Ust <= nInput) {
			for (int Dst = 1; Dst <= Ust; Dst++) 
			{
				cout << "*";
			}
		}
		else {
			for (int Dst = nInput * 2; Dst >= Ust; Dst--)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}

// 5 ~ 6일차
void Pro26()
{
	struct student
	{
		int id;
		int score;

	} s1, *s2;
	s1.score = 85;
	s1.id = 11031;
	s2->score = 90;
	s2->id = 11032;
	cout << s2->id << " " << endl;
}

void Pro27() 
{
	class student
	{
		int id;
		int score;
	public:
		void reset() { id = 0; score = 0; }
		void ser_id(int id_value) { id = id_value; }
		void ser_socre(int score_value) { id = score_value; }
		void print()
		{
			cout << "id: " << id << endl;
			cout << "score: " << score << endl;
		}
	};
}

class student
{
	int id, score;
public:
	static int how_many;
	void reset() { id = 0; score = 0; }
	void set(int id_value, int score_value)
	{ id = id_value; score = score_value; }
	void print()
	{
		cout << "id: " << id << endl;
		cout << "score: " << score << endl;
		cout << "how_many: " << how_many << endl;
	}

};

int student::how_many = 0;

void Pro28()
{
	student s1, s2, s3;
	s1.set(11031, 85);
	student::how_many++;
	s1.print();
	s1.set(11032, 90);
}

class WhoAmI
{
public:
	int id;
	WhoAmI(int id_arg);
	void ShowYourSelf() const;
};

WhoAmI::WhoAmI(int id_arg)
{
	id = id_arg;
}

void WhoAmI::ShowYourSelf() const
{
	cout << "ID: " << id << "\n" << "this: " << this << endl;
	cout << endl;
}

void Pro29()
{
	// 세 개의 객체를 만든다
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);

	// 객체들의 정보를 출력한다
	obj1.ShowYourSelf();
	obj2.ShowYourSelf();
	obj3.ShowYourSelf();

	cout << "&obj1: " << &obj1 << endl;
	cout << "&obj2: " << &obj2 << endl;
	cout << "&obj3: " << &obj3 << endl;
}

void subMain() 
{
	//Pro();
	//Pro2();
	//Pro3();
	//Pro4();
	//Pro5();
	//Pro6();
	//Pro7();
	//Pro8();
	//Pro9();
	//Pro10();
	//Pro11();
	//Pro12();
	//Pro13();
	//Pro14();
	//Pro15();
	//Pro16();
	//Pro17();
	//Pro18();
	//Pro19();
	//Pro20();
	//Pro21();
	//Pro22();
	//Pro23();
	//Pro24();
	//Pro25();
	//Pro26();
	//Pro27();
	//Pro28();
	Pro29();
}

int main(void)
{
	subMain();
	return 0;
}