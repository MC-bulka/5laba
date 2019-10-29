#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандартное пространство имен
int main()//начало
{
    int A, B;//объявление переменных
    cout<<"Введи длина A и B:"<<endl;
    cin>>A>>B;//ввод данных
    cout<<"Длина незанятой части отрезка:"<<A%B<<endl;//остаток от деления
    return 0;//конец
}
