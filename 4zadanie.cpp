#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандартное прстранство имен
int main()//начало
{
    int a, res;//объявление переменных
    cout<<"Введи двузнаное число:"<<endl;//
    cin>>a;//ввод
    res = (a%10) * 10 + a/10; //последняя цифра теперь первая, а первая -- последняя
    cout<<"Число с переставленными цифрами:"<<res;//вывод
    return 0;//конец
}
