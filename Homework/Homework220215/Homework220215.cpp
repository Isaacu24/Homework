// Homework220215.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <Windows.h>
#include <iostream>
#include <assert.h>
#include <crtdbg.h> 

using DataType = int;
//template <typename DataType>
class GameArray
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize()
    {
        return Size_;
    }

    DataType& operator[](int _Index)
    {
        if (_Index >= Size_)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    void operator=(const GameArray& _Other)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }
    }

    inline void Relese()
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    void Relese(DataType* _Other)
    {
        if (nullptr != _Other)
        {
            delete[] _Other;
            _Other = nullptr;
        }
    }

    void ReSize(unsigned int _Size)
    {
        DataType* newArr = new DataType[Size_];     

        for (size_t i = 0; i < Size_; i++)
        {
            newArr[i] = ArrData_[i];
        }     

        Relese();

        ArrData_ = new DataType[_Size];        

        for (size_t i = 0; i < Size_; i++)
        {
            if (i < _Size)
            {
                ArrData_[i] = newArr[i];
            }

            else
            {
                break;
            }
        }

        Relese(newArr);
        Size_ = _Size;
    }

public:
    GameArray(unsigned int _Size)
        : Size_(0)
        , ArrData_(nullptr)
    {
        ReSize(_Size);
    }
    ~GameArray()
    {
        Relese();
    }
    
};

void CursorView(char show)
{
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;

    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameArray NewArray = GameArray(20);
    GameArray NewArray1 = GameArray(10);

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        NewArray[i] = i;
    }

    NewArray.ReSize(10);

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        std::cout << NewArray[i] << std::endl;
    }

    
    
    
    int a = 0;
}
