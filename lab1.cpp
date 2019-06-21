#include <iostream>
using namespace std;
const int c = 1;                                //шаг, на который сдвигаются строки

int main()
{
    int size, i, k;
    cout << "type size of the matrix" << endl;  //ввод размера матрицы
    cin >> size;
    long long mas[size * size], tmp;
	
    cout << "type the matrix elements" << endl; //заполнение массива матрицы
    for (i = 0; i < size * size; ++i)
        {
            cin >> mas[i];
        }

    for (int i = 0; i < c; ++i)                 //сдвиг строки матрицы вправо на с шагов
        {	
            tmp = mas[size * size - 1];
            for(int k = 0; k < (size * size - 1); ++k) 
            {
                mas[size * size - 1 - k] = mas[size * size - 1 - k - 1];
            }
            mas[0] = tmp;
        }
	
    for (i = size; i <= size * size; i += size) //Вывод матрицы на экран
        {
            for(k = size; k > 0; --k) 
            {
                    cout << mas[i - k] << " ";
            }
                cout << "\n";
        }
}

