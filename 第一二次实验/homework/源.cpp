#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
//#define PI  3.14159
int main()
{
	/*int r, h, v;
	cout << "������뾶,׶��,=" << endl;
	cin >> r >> h;
	v = PI * r * r * h / 3;
	cout << "���Ϊ=" << v << endl;
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
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	system("pause");
	*/
	/*
	float F, C;
	cout << "�����뻪�϶ȣ�" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "ת���ó������¶ȣ�" << C << endl;
	*/
	/*
		char x, y;

		printf(" ������һ����ĸ��");

		scanf("%c", &x);

		cin >> x;

		if (x >= 'a' && x <= 'z')

			y = x - 32;

		if (x >= 'A' && x <= 'Z')

			y = x;

		printf("ת������ַ�Ϊ��%c\n", y);
	*/
	/*
	float x, y;
	cout << "����������x:" << endl;
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
	cout << "�ܳ�Ϊ��" << a1 + a2 + a3 << endl;
	if (a1 == a2 || a1 == a2 || a2 == a3)
	{
		cout << "�ǵ���������" << endl;
	}
	else
	{
		cout << "û�е�����" << endl;
	}
	*/

	/*
	double a, b;
	char Q;
	cout << "����������a�������Q������b" << endl;
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
			cout << "��������Ϊ0" << endl;
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
			cout << "��������Ϊ0" << endl;
			valid = false;
		}
		else
		{
			result = int(a) % int(b);
		}
		break;
	default:
		cout << "��������Ϸ�" << endl;
		valid = false;
		break;
	}
	if (valid)
	{
		cout << a << " " << Q << " " << b << " = " << result << endl;
	}
	
	*/

	/*char input_Character;//�����ַ�����
	int letters = 0, space = 0, digit = 0, other = 0;//�������ͱ����Ҹ���ֵ
	printf("������һ���ַ���");//��ʾ���
	while ((input_Character = getchar()) != '\n') //getchar����¼�룬���԰ѿո�Ҳ�����ַ�
	{
		if (input_Character > 'a' && input_Character < 'z' || input_Character>'A' && input_Character < 'Z')//�������ĸ
		{
			letters++;//letters��1
		}
		else if (input_Character == ' ')//����ǿո�
		{
			space++;//sapce��1
		}
		else if (input_Character >= '0' && input_Character <= '9')//���������
		{
			digit++;//digit��1
		}
		else
		{
			other++;//other��1
		}
	}
	printf("��ĸ��%d��\n", letters);//�����ĸ����
	printf("�ո�%d��\n", space);//����ո����
	printf("���֣�%d��\n", digit);//������ָ���
	printf("�����ַ���%d��\n", other);//��������ַ�����
	*/

	/*
	int a, b, c, z;
	cout << "����������������";
	cin >> a >> b;
	c = a * b;
	if (b > a)  //�ж�a,b�Ĵ�С�����b����a�򽻻�a,b��ֵ
	{
		z = a;
		a = b;
		b = z;
	}
	while (a % b) //շת����������Լ��
	{
		z = b;
		b = a % b;
		a = z;
	}
	c = c / b;
	cout << "���Լ���ǣ�" << b << endl;
	cout << "��С�������ǣ�" << c << endl;
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

		printf("������һ�������������ƽ������");
		scanf("%lf", &x);

		a = 1.0;

		while ((fabs(a - b) > 1e-5))
		{
			b = a;
			a = (b + x / b) / 2;
		}

		printf("��ƽ����Ϊ%0.3lf\n", b);
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
		cout << "�ܹ�����" << N << "��ƻ��������" << all << "Ԫ��ƽ��ÿ�컨��" << average << "Ԫ" << endl;
		
	return 0;
}