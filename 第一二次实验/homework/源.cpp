#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
//#define PI  3.14159
int main()
{
	/*int r, h, v;
	cout << "请输入半径,锥高,=" << endl;
	cin >> r >> h;
	v = PI * r * r * h / 3;
	cout << "体积为=" << v << endl;
	*/

	/*
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "long long length:" << sizeof(long long) << endl;
	*/
	/*
		unsigned int testUnint = 65534;//oxfffe
		cin >> oct;
	cout << "output in unsigned int 1 type:"<< testUnint << endl;  //<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	system("pause");
	*/
	/*
	float F, C;
	cout << "请输入华氏度：" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "转换得出摄氏温度：" << C << endl;
	*/
	/*
		char x, y;

		printf(" 请输入一个字母：");

		scanf("%c", &x);

		cin >> x;

		if (x >= 'a' && x <= 'z')

			y = x - 32;

		if (x >= 'A' && x <= 'Z')

			y = x;

		printf("转换后的字符为：%c\n", y);
	*/
	/*
	float x, y;
	cout << "请输入您的x:" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 1 + 2 / (4 * x);
		cout << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << y << endl;
	}
	*/

	/*
	int a1, a2, a3;
	int C;
	cin >> a1 >> a2 >> a3;
	cout << "周长为：" << a1 + a2 + a3 << endl;
	if (a1 == a2 || a1 == a2 || a2 == a3)
	{
		cout << "是等腰三角形" << endl;
	}
	else
	{
		cout << "没有等腰捏" << endl;
	}
	*/

	/*
	double a, b;
	char Q;
	cout << "请输入数字a，运算符Q，数字b" << endl;
	cin >> a >> Q >> b;
	double result;
	bool valid = true;
	switch (Q)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b == 0)
		{
			cout << "除数不能为0" << endl;
			valid = false;
		}
		else
		{
			result = a / b;
		}
		break;
	case '%':
		if (b == 0)
		{
			cout << "除数不能为0" << endl;
			valid = false;
		}
		else
		{
			result = int(a) % int(b);
		}
		break;
	default:
		cout << "运算符不合法" << endl;
		valid = false;
		break;
	}
	if (valid)
	{
		cout << a << " " << Q << " " << b << " = " << result << endl;
	}
	
	*/

	/*char input_Character;//定义字符变量
	int letters = 0, space = 0, digit = 0, other = 0;//定义整型变量且赋初值
	printf("请输入一行字符：");//提示语句
	while ((input_Character = getchar()) != '\n') //getchar函数录入，可以把空格也算做字符
	{
		if (input_Character > 'a' && input_Character < 'z' || input_Character>'A' && input_Character < 'Z')//如果是字母
		{
			letters++;//letters加1
		}
		else if (input_Character == ' ')//如果是空格
		{
			space++;//sapce加1
		}
		else if (input_Character >= '0' && input_Character <= '9')//如果是数字
		{
			digit++;//digit加1
		}
		else
		{
			other++;//other加1
		}
	}
	printf("字母：%d个\n", letters);//输出字母个数
	printf("空格：%d个\n", space);//输出空格个数
	printf("数字：%d个\n", digit);//输出数字个数
	printf("其他字符：%d个\n", other);//输出其他字符个数
	*/

	/*
	int a, b, c, z;
	cout << "请输入两个整数：";
	cin >> a >> b;
	c = a * b;
	if (b > a)  //判断a,b的大小，如果b大于a则交换a,b的值
	{
		z = a;
		a = b;
		b = z;
	}
	while (a % b) //辗转相除法求最大公约数
	{
		z = b;
		b = a % b;
		a = z;
	}
	c = c / b;
	cout << "最大公约数是：" << b << endl;
	cout << "最小公倍数是：" << c << endl;
	*/

	/*
	int n = 0;
	while(scanf("%d",&n)!=EOF)
	{
		for (int i = 0; i <n; ++i)
		{
			for (int j=0;j<i+1;++j)
			{
				printf("* ");
			}
			printf("\n");
	}
		*/
		/*
		double a, b, x;

		printf("请输入一个大于零的数求平方根：");
		scanf("%lf", &x);

		a = 1.0;

		while ((fabs(a - b) > 1e-5))
		{
			b = a;
			a = (b + x / b) / 2;
		}

		printf("其平方根为%0.3lf\n", b);
		*/

		
		double p = 0.8;
		int n = 2;
		int N = 2;
		double all = p * 2;
		int d = 1;
		while (true)
		{
			n = n * 2;
			if (n > 100)
			{
				break;
			}
			N += n;
			all += p * n;
			d++;
		}
		double average = all / d;
		cout << "总共买了" << N << "个苹果，花了" << all << "元，平均每天花了" << average << "元" << endl;
		
	return 0;
}