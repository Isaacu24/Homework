// Homework220211.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <random>

namespace MyStd
{
    class random_Device
    {
    public:
        random_Device& operator()()
        {
            return *this;
        }
    };

    class mt19937
    {
    public:
        //랜덤 디바이스가 필요한 생성자
        mt19937(random_Device& _Other)
        {

        }

    };
}


int main()
{
    MyStd::random_Device random;
    MyStd::mt19937 mt(random());

    std::random_device rd;
    std::mt19937 mt1(rd());
}

