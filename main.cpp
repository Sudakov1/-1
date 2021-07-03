#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[10]; 


        for (int i = 0; i < 10; i++){
            cout << "Введите элемент " << i+1 << ": "; // ввод элементов
            cin >> arr[i];
        }
        for (int i = 0; i < 10; i++)    
        {
            if (arr[i] % 2 == 0)
                arr[i] = 0;
        }
        for (int i = 0; i < 10; i++)          {
            cout << arr[i] << " "; //вывод массива
        }
 
        cout << endl;
///////////////////////////////////

        char c;
        string str;
        bool b = true;
        cout << "Введите символ: ";
        cin >> c;
        while (isdigit(c) || isalpha(c))    // проверка и ввод символа
        {
            cout << "Введена цифра или буква, повторите ввод: " << endl;
            cin >> c;
        }
        cout << "Введите строку: ";
        cin >> str; // ввод строки

        for (int i = 0; i < str.length(); i++)
        {
            if (c == str[i] && b)  
            {
                cout << "Символ находится на  " << i + 1 << " месте" << endl; // проверка
                b = false;
            }
        }
        if (b)
            cout << "Символ в строке не найден!" << endl; 
 





        /////////////////////

        int m[3][3]; // матрица созданме

        cout << "Заполните матрицу: " << endl;
        for (int i = 0; i < 3; i++) // ввод матрицы
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
       int res = m[0][0] * m[1][1] * m[2][2]    + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1]  - m[0][2] * m[1][1] * m[2][0] - m[0][0] * m[1][2] * m[2][1]
            - m[0][1] * m[1][0] * m[2][2]; // определение определителя и вывод его(ниже)

        cout << "Определитель матрицы:  " << res << endl;  
 
}
