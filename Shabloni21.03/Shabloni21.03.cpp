#include <iostream>


//Добовляет в конец масива число
int push_back(int*& arr, int size, int value)
{
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++)
        newArr[i] = arr[i];
    delete[] arr;
    newArr[size++] = value;
    arr = newArr;
    return size;
}

int main()
{
    int size = 5;
    int* arr = new  int[size] {2, 8, 7, 9, 70};

   
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    int value = 6;
    int sz = push_back(arr, size, value);
    std::cout << "Измененный массив: ";
    for (int i = 0; i < sz; i++)
        std::cout << arr[i] << " ";
    delete[] arr;

    return 0;
}
//удаление последнего элемента в масиве
template < typename T >
T* resize(T* ptr, std::size_t old_size, std::size_t new_size)
{
    T* buffer = new T[new_size];
    std::memcpy(buffer, ptr, std::min(old_size, new_size) * sizeof(T));
    delete[] ptr;
    return ptr = buffer;
}

int main()
{
    int* p = new int[3];
    for (int i = 0; i < 3; i++)
        std::cout << (p[i] = i) << ' ';
    p = resize(p, 3, 2);
    std::cout << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << p[i] << ' ';
    delete[] p;
    std::cout << std::endl;
    return 0;

    //удаляет на конкретной позиции 
    void remove(int position)
    {
        int* temp_arr = new int[size - 1];
        for (int i = 0; i < size; i++)
        {
            static int shift = 0;
            if (i == position)
                shift++;
            int temp = arr[i + shift];
            temp_arr[i] = arr[i + shift];
        }
        delete arr;
        arr = temp_arr;
        size--;
    }

    //удаление всех повторяющихся элементов в маcсиве 
    int main()
    {
        srand((int)time(0));
        int n;
        cout << "n="; cin >> n;

        double* a = new double[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % 5 + 1;
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] == a[j])
                {
                    for (int k = j; k < n; k++)
                        a[k] = a[k + 1];
                    n--;
                    j--;
                }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
            cout << endl;
            delete[]a;
            return 0;
        }
    }