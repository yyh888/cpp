#include<iostream>

using namespace std;



//class className
//{
//	// 类体：由成员函数和成员变量组成
//}; // 一定要注意后面的分号



//class Person
//{
//public:
//	//打印基本信息
//	void Print()
//	{
//		cout << _name << "-" << _sex << "-" << _age << endl;
//	}
//private:
//	char* _name;
//	char* _sex;
//	int _age;
//};


//.h
//class Person
//{
//public:
//	//打印基本信息
//	void Print();
//public:
//	char* _name;
//	char* _sex;
//	int _age;
//};
////.cpp
//void Person::Print()
//{
//	cout << _name << "-" << _sex << "-" << _age << endl;
//}

//int main()
//{
//	Person yyh;
//	yyh.Print();
//	return 0;
//}



//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << _month << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d;
//	cout << sizeof(d) << endl;
//	return 0;
//}


//class A
//{
//	//类中仅有成员函数
//public:
//	void f() 
//	{}
//};
//
//class B
//{};
//
//int main()
//{
//	A a;
//	B b;
//	B b1;
//	B b2;
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	return 0;
//}


//class Date
//{
//public:
//	//Init(Date* this, int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	 }
//private:
//	int _year;
//	int _month; 
//	int _day;
//};
//
//
//int main()
//{
//	Date d1;
//	d1.Init(2022, 1, 1);//d1.Init(&d1, 2022, 1, 1)
//	Date d2;
//	d2.Init(2022, 1, 2);//d2.Init(&d2, 2022, 1, 2)
//	return 0;
//}



//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();//p->PrintA(&p)
//	p->Show();
//}



//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = _month;
//		_day = day;
//	}
//	Date()
//	{
//		_year = 2022;
//		_month = 1;
//		_day = 1;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1(2022, 7, 9);
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{
//		_a = 0;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//		_aa.Print();
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	A _aa;
//};
//
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}



//class Date
//{
//public:
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1;
//	return 0;
//}



//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity); 
//		_size = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};


//int main()
//{
//	Stack s1;
//	stack s2;
//	return 0;
//}




//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = _month;
//		_day = day;
//	}
//	bool operator==(const Date& d1)
//	{
//		return this->_day == d1._day
//			&& this->_month == d1._month
//			&& this->_year == d1._year;
//	}
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//定义在全局，注意把成员变量设成公有
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._day == d2._day
//		&& d1._month == d2._month
//		&& d1._year == d2._year;
//}

//int main()
//{
//	Date d1(2022, 7, 9);
//	Date d2(2022, 7, 9);
//	d1.operator==(d2);//d1.operator(&d1, d2);
//	d1 == d2;//d1.opreator(&d1, d2);
//	return 0;
//}






//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date& d)
//	{
//		this->_day = d._day;
//		this->_month = d._month;
//		this->_year = d._year;
//		return *this;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 7, 9);
//	Date d2;
//	d2 = d1;
//	d2.Print();
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Fun() 
//	{
//		Print();
//	}
//	void Print() const
//	{
//		cout << _year << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 7, 10);
//	Date d2(2022, 7, 10);
//	return 0;
//}



//const Date* operator&() const
//{
//	return this;
//}


//class A
//{
//public:
//	//不是默认构造函数(需要传参)
//	A(int x)
//		: _x(x)
//	{}
//private:
//	int _x;
//};
//
//class Date
//{
//public:
//	Date(int year = 1)
//		: _year(year)
//		, _n(1)
//		, _p(year)
//		, _a(0)
//	{
//		//不能在函数体内初始化，只能使用列表初始化
//		//_n = 1; 
//		//_p = year;
//	}
//private:
//	int _year;
//	//引用必须在定义时初始化，但此处是声明，所以没问题
//	int& _p;
//	const int _n;
//	A _a;
//};


//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main() {
//	A aa(1);
//	aa.Print();
//	return 0;
//}



//class A
//{
//public:
//	explicit A(int a)
//		: _a(a)
//	{}
//private:
//	int _a;
//};
//
//int main()
//{
//	A a = 2;//相当于先构造一个临时变量 A tmp(2); 
//	        //再拷贝构造 A a(tmp);
//	return 0;
//}



//class A
//{
//public:
//	A()
//	{
//		++_n;
//	}
//	A(const A& a)
//	{
//		++_n;
//	}
//	//所有的对象都是构造或者拷贝构造出来的！！
//	static int GetCount()
//	{
//		return _n;
//	}
//private:
//	//要注意这里是声明，他的初始化要在类外面。
//	static int _n;
//};
//
//int A::_n = 0;
//
//int main()
//{
//	A a1;
//	A a2;
//	A a3;
//	cout << a1.GetCount() << endl;
//	return 0;
//}



//class B
//{
//public:
//
//private:
//	int _b;
//};

class A
{
public:
	//B叫做A的内部类
	class B//B天生是A的友元
	{
	private:
		int _b;
	};
private:
	int _a = 0;
	int* _p = nullptr;
};