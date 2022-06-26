// Vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include "GameVector.h"



int main()
{
   
    {
        GameVectorSort<int> MyVector = GameVectorSort<int>();

        int a = 0;

        MyVector.push_back(4);
        MyVector.push_back(1);
        MyVector.push_back(2);
        MyVector.push_back(34);
        MyVector.push_back(0);
        MyVector.push_back(-5);
        MyVector.push_back(99);
        MyVector.push_back(100);
       

        for (size_t i = 0; i < MyVector.size(); i++)
        {
            std::cout << MyVector[i] << std::endl;
        }

    }

}
