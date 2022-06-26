
#include <iostream>


// 공백을 제외하고 넣어준다
void StringTrimRemove(const char* cArr, char* pText)
{
	int i = 0;
	int index = 0;

	while (0 != cArr[i])
	{
		if (32 != cArr[i])
		{
			pText[index] = cArr[i];
			index++;
		}

		i++;
	}
}

int main()
{
	char text[1000] = { 0, };

	StringTrimRemove("a b b dfdfwq 22 f f", text);
	printf_s(text);
}
