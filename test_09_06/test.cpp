//#include <stdio.h>
//#include <stdlib.h>
//
//namespace infi {
//	int rand = 10;
//	int Add(int x, int y)
//	{
//		return x = y;
//	}
//}
//
//int main()
//{
//	// 这里默认访问 rand 函数的地址
//	printf("%p\n", rand);
//
//	// 这里访问的是命名空间中的rand变量
//	printf("%d\n", infi::rand);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//namespace A {
//	namespace zhangsan{
//		int age = 33;
//	}
//	namespace lisi {
//		int age = 23;
//	}
//}
//
//namespace A {
//	int rand = 10;
//
//}
//
//int main()
//{
//	printf("%d\n", A::zhangsan::age);
//	printf("%d\n", A::lisi::age);
//	printf("%d\n", A::rand);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	double b = 0.1;
//	char c = 'x';
//	std::cout << a << " " << b << " " << c << std::endl;
//	std::cout << a << " " << b << " " << c << std::endl;
//	scanf("%d%lf", &a, &b);
//	printf("%d %lf\n", a, b);
//	// 可以⾃动识别变量的类型
//	std::cin >> a;
//	std::cin >> b >> c;
//	std::cout << a << std::endl;
//	std::cout << b << " " << c << std::endl;
//	return 0;
//}

#include <iostream>

// 这是错误的
//void print(int a = 0, int b, int c = 1)
//{
//	std::cout << a << ' ' << b << ' ' << c << std::endl;
//}

//// 只在声明给缺省参数
//void print(int a, int b, int c);
//
//void print(int a, int b = 0, int c = 1)
//{
//	std::cout << a << ' ' << b << ' ' << c << std::endl;
//}

//void print(int a, int b = 0, int c = 1);
//
//void print(int a, int b, int c)
//{
//	std::cout << a << ' ' << b << ' ' << c << std::endl;
//}
//
//int main()
//{
//	print(1);
//	print(1, 10);
//	print(1, 10, 20);
//
//	// 这是错误的
//	/*print(1, , 20);*/
//	return 0;
//}

//#include <iostream>
//
//void f1(int a, int b)
//{
//	std::cout << "void f1(int a, int b)" << std::endl;
//}
//
//void f1(int a, int b, int c)
//{
//	std::cout << "void f1(int a, int b, int c)" << std::endl;
//}
//
//void f1(double a, double b)
//{
//	std::cout << "void f2(double a, double b)" << std::endl;
//}
//
//void f1()
//{
//	// ...
//}
//
//int f1()
//{
//	return 0;
//}
//
//int main()
//{
//	f1()
//	return 0;
//}

//#include <iostream>
//
//// 引用实现交换
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//// 指针实现交换
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a, b;
//	a = 1, b = 0;
//	// 引用 实现交换
//	swap(a, b);
//	// 指针实现交换
//	swap(&a, &b);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int b = 10;
//	const int& a = b;
//
//	
//	/*int& b = a;*/   // 权限放大，会报错
//
//
//	int c = 5;
//	const int& d = c * 3;
//
//	// int& d = c * 3; // 权限放大，会报错
//
//
//	return 0;
//}

//#include <iostream>
//
//int& f1()
//{
//	int a = 1;
//	return a;
//}
//
//int main()
//{
//	int& a = f1();
//	a += 1;
//	std::cout << a << '\n';
//	return 0;
//}

#include<iostream>
using namespace std;
void f(int x)
{
	cout << "f(int x)" << endl;
}
void f(int* ptr)
{
	cout << "f(int* ptr)" << endl;
}
int main()
{
	f(0);
	// 本想通过f(NULL)调⽤指针版本的f(int*)函数，但是由于NULL被定义成0，调⽤了f(int
	// x)，因此与程序的初衷相悖。
	f(NULL);
	f((int*)NULL);
	// 编译报错：error C2665: “f”: 2 个重载中没有⼀个可以转换所有参数类型
	// f((void*)NULL);
	f(nullptr);
	return 0;
}