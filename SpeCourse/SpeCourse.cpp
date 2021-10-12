// SpeCourse.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Func.cpp"

using namespace std;

int main()
{
    srand(0);
    Func f;


    ofstream Data;
    
    Data.open("C:\\Users\\vadya\\source\\repos\\SpeCourse\\F1(X,Y)1-1.csv");
    Data << "" << "," << "X" << "," << "Y" << endl;
    for (size_t i = 0; i < 10000; i++)
    {
        float x = rand() % 30000;
        Data << i << ", " << x << ", " << f.func1(x) << "\n";
    }
    Data.close();
    

    Data.open("C:\\Users\\vadya\\source\\repos\\SpeCourse\\F2(X,Y,Z)2-1.csv");
    Data << "" << "," << "X" << "," << "Y" << "," << "Z" << endl;
    for (size_t i = 0; i < 10000; i++)
    {
        float x = rand() % 100;
        float y = rand() % 30000;
        Data << i << ", " << x << ", " << y << ", " << f.func2(x, y) << "\n";
    }
    Data.close();


    Data.open("C:\\Users\\vadya\\source\\repos\\SpeCourse\\F3(X,Y,Z,W)3-1.csv");
    Data << "" << "," << "X" << "," << "Y" << "," << "Z" << "," << "W" << endl;
    for (size_t i = 0; i < 10000; i++)
    {
        float z = 0;
        float x = float(rand()) / RAND_MAX;
        float y = float(rand()) / RAND_MAX;
        while (z == 0) {
          z  = float(rand()) / RAND_MAX;
        }

        Data << i << ", " << x << ", " << y << ", " << z << ", " << f.func3(x, y, z) << "\n";
    }
    Data.close();


    Data.open("C:\\Users\\vadya\\source\\repos\\SpeCourse\\F4(X,Y,Z,W)3-1.csv");
    Data << "" << "," << "X" << "," << "Y" << "," << "Z" << "," << "W" << endl;
    for (size_t i = 0; i < 10000; i++)
    {
  
        float x = float(rand()) / RAND_MAX;
  

        Data << i << ", " << x << ", " << 2 << ", " << 2 << ", " << f.func4(x) << "\n";
    }
    Data.close();

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
