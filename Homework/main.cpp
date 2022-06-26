
#include <iostream>
//
////_itoa_s: 숫자를 문자로 바꿔주는 함수
////putchar: 전달인자를 출력하는 함수(int라고 적혀있지만 받는 건 캐릭터형)
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
////인자는 배열처럼 일련의 메모리 주소를 갖는다
//void MyPrint(const char* _Text, ...) //가변인자
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

	//&_Text: _Text의 주소
	//&*_Text:  _Text가 가진 문자열의 코드 영역 주소
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

//printf 구현하기
int main()
{
	//MyPrint("%d ttt", 1100);
	//MyPrintf1("%d ttt/n", 2000);
	MyPrintf("%d tt", 200);
	
}

