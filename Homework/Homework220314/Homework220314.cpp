
#include <iostream>

int main()
{
    char Arr[10] = "Title";

    if ("Title" == Arr)
    {
        std::cout << "차이 없음" << std::endl;
    }

    else
    {
        std::cout << "차이 있음" << std::endl;

        //주소값으로 비교된다.
        //배열의 이름 == 배열의 시작 주소
        //Title 또한 const char[6]짜리 배열
    }


}

