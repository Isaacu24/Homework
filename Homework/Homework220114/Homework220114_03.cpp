
#include <iostream>

//_Prev[j] == _Text[i]
//���𰡸� �ٸ� ���𰡷� �ٲ۴�
void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	//���� text�� �ִ� ���ڵ� �� prev�� �ִ� �͵��� �����Ѵ�?
	//text�� ���ؼ�
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