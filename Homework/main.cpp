
#include <iostream>
//
////_itoa_s: ���ڸ� ���ڷ� �ٲ��ִ� �Լ�
////putchar: �������ڸ� ����ϴ� �Լ�(int��� ���������� �޴� �� ĳ������)
//
//void MyPrintf1(const char* _Text, ...)
//{
//	long long* IntPtr = (long long*)&_Text;
//
//	IntPtr += 1;
//
//	for (int i = 0; 0 != _Text[i]; i++)
//	{
//		if ('%' == _Text[i])
//		{
//			switch (_Text[i + 1])
//			{
//			case 'd':
//			{
//				char Arr[10];
//
//				_itoa_s(*IntPtr, Arr, 10);
//
//				int count = 0;
//
//				while (0 != Arr[count])
//				{
//					putchar(Arr[count]);
//					count++;
//				}
//
//				i += 1;
//				IntPtr += 1;
//			}
//			break;
//
//			case 's':
//			{
//
//			}
//			break;
//
//			default:
//				break;
//			}
//		}
//
//		else
//		{
//			putchar(_Text[i]);
//		}
//	}
//}
//
//
//
////���ڴ� �迭ó�� �Ϸ��� �޸� �ּҸ� ���´�
//void MyPrint(const char* _Text, ...) //��������
//{
//	char* charPtr = (char*)&_Text;
//	charPtr += 8;
//
//	for (int i = 0; 0 != _Text[i]; i++)
//	{
//		if (('%' != _Text[i]))
//		{
//			putchar(_Text[i]);
//		}
//
//		else
//		{
//			switch (_Text[i + 1])
//			{
//			case 'd':
//			{
//				int* intPtr = (int*)charPtr;
//
//				char Arr[10] = {};
//				_itoa_s(*intPtr, Arr, 10);
//
//				for (int j = 0; 0 != Arr[j]; j++)
//				{
//					putchar(Arr[j]);
//				}
//
//				i += 1;
//				intPtr += 8;
//			}
//			break;
//
//			case 's':
//				break;
//
//			default:
//				break;
//			}
//		}
//
//	}
//}
//


void MyPrintf(const char* const _Text, ...)
{
	int a = 0;

	//&_Text: _Text�� �ּ�
	//&*_Text:  _Text�� ���� ���ڿ��� �ڵ� ���� �ּ�
	char* CharPtr = (char*)&_Text;

	CharPtr += 8;

	while (0 != _Text[a])
	{
		if ('%' == _Text[a])
		{
			if ('d' == _Text[a + 1])
			{
				int* IntPtr = (int*)CharPtr;
				char Arr[10];

				_itoa_s(*IntPtr, Arr, 10);

				int i = 0;

				while (0 != Arr[i])
				{
					putchar(Arr[i]);

					IntPtr += 2;
					i++;
				}
			}

			else if ('s' == _Text[a + 1])
			{

			}

			a += 2;
		}

		else
		{
			putchar(_Text[a]);
			a++;
		}
	}
}

//printf �����ϱ�
int main()
{
	//MyPrint("%d ttt", 1100);
	//MyPrintf1("%d ttt/n", 2000);
	MyPrintf("%d tt", 200);
	
}

