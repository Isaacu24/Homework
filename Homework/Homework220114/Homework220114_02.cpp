
#include <iostream>


int GetCount(const char* pChar)
{
	int count = 0;

	for (size_t i = 0; 0 != pChar[i]; i++)
	{
		count++;
	}

	return count;
}


int ToInt(const char* pChar)
{
	int value = 0;
	int index = 0;

	int count = GetCount(pChar);
	
	for (size_t i = 0; 0 != pChar[i]; i++)
	{
		index = pChar[i] - 48;	
		int ten = 1;

		for (int j = 0; j < count - 1; j++)
		{
			ten *= 10;
		}
		value += index * ten;
		count--;
	}

	return value;
}


int Main0()
{
	int value = ToInt("987654321");
	int a = 0;

	return 0;
}

 
 
 
// 
//#include <iostream>
//
//
//int ToInt1(const char* cInt)
//{
//	int index = 0;
//	int iArr[100] = { 0, };
//
//	for (size_t i = 0; 0 != cInt[i]; i++)
//	{
//		index++;
//	}
//
//	int i = 0;
//	int number = 0;
//
//	while (0 != cInt[i])
//	{
//		switch (cInt[index - 1])
//		{
//		case 49:
//			iArr[i] = 1;
//			break;
//
//		case 50:
//			iArr[i] = 2;
//			break;
//
//		case '3':
//			iArr[i] = 3;
//			break;
//
//		case '4':
//			iArr[i] = 4;
//			break;
//
//		case '5':
//			iArr[i] = 5;
//			break;
//
//		case '6':
//			iArr[i] = 6;
//			break;
//
//		case '7':
//			iArr[i] = 7;
//			break;
//
//		case '8':
//			iArr[i] = 8;
//			break;
//
//		case '9':
//			iArr[i] = 9;
//			break;
//
//		case '0':
//			iArr[i] = 0;
//			break;
//		}
//
//		index--;
//		i++;
//	}
//
//
//	{
//		int i = 0;
//
//		while (0 != iArr[i])
//		{
//			switch (i)
//			{
//			case 0:
//				number += iArr[i];
//				break;
//
//			case 1:
//				number += iArr[i] * 10;
//				break;
//
//			case 2:
//				number += iArr[i] * 100;
//				break;
//
//			case 3:
//				number += iArr[i] * 1000;
//				break;
//
//			case 4:
//				number += iArr[i] * 10000;
//				break;
//
//			case 5:
//				number += iArr[i] * 100000;
//				break;
//
//			case 6:
//				number += iArr[i] * 1000000;
//				break;
//
//			case 7:
//				number += iArr[i] * 10000000;
//				break;
//
//			case 8:
//				number += iArr[i] * 100000000;
//				break;
//
//			case 9:
//				number += iArr[i] * 1000000000;
//				break;
//			}
//
//			i++;
//		}
//	}
//
//	return number;
//}
//
//
//int main()
//{
//	int value = 0;
//	value = ToInt1("123456789");
//
//	return 0;
//}