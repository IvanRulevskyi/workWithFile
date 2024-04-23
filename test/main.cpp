#include "Function.hpp"

int main()
{
//Завдання 1. Дано текстовий файл. Підрахувати кількість  слів, що починаються із символу, який задає користувач.
    char searchSymbol;
    cout<<"Введите первый символ слова: ";
    cin>>searchSymbol;
    searchWord("/Users/ivanrulevskiy/Desktop/WL/workWithFile/test/example.txt", searchSymbol);

    
//  Завдання 2. Дано два текстові файли. З'ясувати, чи збі- гаються їхні рядки. Якщо ні, то вивести рядок, який не  збігається, з кожного файлу.
    ::comparisonOfFileContents("/Users/ivanrulevskiy/Desktop/WL/workWithFile/test/example.txt","/Users/ivanrulevskiy/Desktop/WL/workWithFile/test/example2.txt");
    
//    Завдання 3. Дан текстовий файл. Необхідно створити  новий файл і записати в нього таку статистику по вихід- ному файлу:
//    ■ Кількість символів;
//    ■ Кількість рядків;
    ::some("/Users/ivanrulevskiy/Desktop/WL/workWithFile/test/example.txt");
    
    
}



