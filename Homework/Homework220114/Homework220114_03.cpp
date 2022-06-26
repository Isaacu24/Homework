
#include <iostream>

//_Prev[j] == _Text[i]
//무언가를 다른 무언가로 바꾼다
void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	//먼저 text에 있는 문자들 중 prev에 있는 것들을 추출한다?
	//text와 비교해서
	for (size_t i = 0; 0 != _Prev[i]; i++)
	{
		for (size_t j = 0; 0 != _Text[j]; j++)
		{

		}

	}

}


int main()
{
	char text[100] = "aa bb aabb aaa aa aaaa aaaaaa cdaad";
	TextChange(text, "aa", "fff");

	printf_s(text);

	return 0;
}