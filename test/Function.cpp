#include "Function.hpp"

//Завдання 1. Дано текстовий файл. Підрахувати кількість  слів, що починаються із символу, який задає користувач.

void searchWord(string filename, char searchSymbol)
{
    ifstream inputFile(filename);
    
    if (!inputFile.is_open()) {
        cout << "Файл "<<filename<<" не найден"<< endl;
    }
    
    string word;
    int count = 0;
    while (inputFile >> word)
    {
        if (word[0] == searchSymbol )
        {
            count+=1;
        }
    }
    cout<<"Слов с начальным символом: "<<searchSymbol<<" : "<<count<<endl;
    
    inputFile.close();
}

//  Завдання 2. Дано два текстові файли. З'ясувати, чи збі- гаються їхні рядки. Якщо ні, то вивести рядок, який не  збігається, з кожного файлу.

void comparisonOfFileContents(string filenameFirst, string filenameSecond)
{
    ifstream inputFileFirst(filenameFirst);
    
    if (!inputFileFirst.is_open())
    {
        cout << "Файл "<<filenameFirst<<" не найден"<< endl;
    }
    
    ifstream inputFileSecond(filenameSecond);
    
    if (!inputFileSecond.is_open())
    {
        cout << "Файл "<<filenameSecond<<" не найден"<< endl;
    }
    

    string line1;
    string line2;
    int count = 0;
    while (getline(inputFileFirst, line1) and getline(inputFileSecond, line2))
    {
        count+=1;
        if (line1 != line2)
        {
            cout <<filenameFirst << " Не совпадает строка: "<<count<<" : " << line1 << endl;
            cout <<filenameSecond << " Не совпадает строка: "<<count<<" : " << line2 << endl;
            cout << endl;
        }
    }
    
    inputFileFirst.close();
    inputFileSecond.close();
    
}

//    Завдання 3. Дан текстовий файл. Необхідно створити  новий файл і записати в нього таку статистику по вихід- ному файлу:
//    ■ Кількість символів;
//    ■ Кількість рядків;

void some(string filename)
{
    ifstream file(filename);
    
    if (!file.is_open())
    {
        cout << "Файл "<<filename<<" не найден"<< endl;
    }
    
    string line;
    int countRows = 0;
    string newObj;
    int countObj = 0;
    
    while (getline(file, line))
    {
        countRows+=1;
        newObj+=line;
    }
    
    for (size_t i = 0; i < newObj.size(); i++)
    {
        countObj+=1;
    }
    
    ofstream outputFile("/Users/ivanrulevskiy/Desktop/WL/workWithFile/test/statistic.txt");
    
    if (!outputFile.is_open()) {
        cout << "Упс, что-то пошло не так" << endl;
    }
    
    outputFile << "Количество строк в файле: "<<countRows<<endl;
    outputFile << "Количество символов в файле: "<<countObj<<endl;
    
    outputFile.close();
    
}
