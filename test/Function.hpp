# pragma once
#include <iostream>
#include <fstream>
using namespace std;

//Завдання 1. Дано текстовий файл. Підрахувати кількість  слів, що починаються із символу, який задає користувач.
void searchWord(string filename, char searchSymbol);

//  Завдання 2. Дано два текстові файли. З'ясувати, чи збі- гаються їхні рядки. Якщо ні, то вивести рядок, який не  збігається, з кожного файлу.
void comparisonOfFileContents(string filenameFirst, string filenameSecond);

//    Завдання 3. Дан текстовий файл. Необхідно створити  новий файл і записати в нього таку статистику по вихід- ному файлу:
//    ■ Кількість символів;
//    ■ Кількість рядків;
void some(string filename);
