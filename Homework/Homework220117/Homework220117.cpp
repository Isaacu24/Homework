#include <iostream>



int GetStrCount(const char* _Str)
{
	int count = 0;

	for (int i = 0; 0 != _Str[i]; i++)
	{
		count++;
	}

	return count - 1;
}


int StringStartCount(const char* _Text, int _Start, const char* _FindStr)
{
	int findCount = GetStrCount(_FindStr);
	int index = _Start;

	while (0 != _Text[index])
	{
		if (_Text[index] == _FindStr[0])
		{
			for (int i = 0; 0 != _FindStr[i]; i++)
			{
				if (_Text[index + i] == _FindStr[i])
				{
					if (i == findCount)
					{
						return index;
					}
				}
				
				else
				{
					break;
				}
			}
		}
		index++;
	}

	return -1;
}

int StringEndCount(const char* _Text, int _End, const char* _FindStr)
{
	int findCount = GetStrCount(_FindStr);
	int index = _End;

	while (_Text[0] != _Text[index])
	{
		if (_Text[index] == _FindStr[0])
		{
			for (int i = 0; 0 != _FindStr[i]; i++)
			{
				if (_Text[index] == _FindStr[i])
				{
					if (i == findCount)
					{
						return index;
					}
					index--;
				}

				else
				{
					break;
				}
			}
		}
		index--;
	}

	return -1;
}

int main()
{
	int a = StringStartCount("aaa dfdf df ee ddd eee", 0, "eee");
	int b = StringEndCount("aaa  eee", 8, "eee");

	int aa = 0;
	return 0;
}