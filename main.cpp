
#include <iostream>

template<typename T, size_t S>
class Array
{
    public:
    Array(){
        arraySize = S;
    }

    ~Array(){
    }

    size_t size()
    {
        return S;
    }

    T& operator[](size_t index)
    {
        return arraySize[index];
    }

    const T& operator[] const(size_t index)
    {
        return arraySize[index];
    }
    private:
    T arraySize[S];
}

int main()
{
    Array<int, 5> arr;
    arr[1] = 6;
    arr[3] = 2;
    arr[0] = 1;
    std::cout << arr;
}

