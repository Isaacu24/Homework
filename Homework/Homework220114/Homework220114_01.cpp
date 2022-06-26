
#include <iostream>

int Main()
{
	int i = 2;
	int number[10] = { 0, };

	int index = 0;

	while (index < 10)
	{
		if (i % 2 == 0)
		{
			number[index] = i;
			index += 1;
		}

		i++;
	}


	{
		int i = 0;
		int number[10] = { 0, };

		int index = 0;

		while (index < 10)
		{
			if (i % 2 == 1)
			{
				number[index] = i;
				index += 1;
			}

			i++;
		}
	}


	return 0;
}