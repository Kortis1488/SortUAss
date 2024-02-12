#include <iostream>
#include <boost/filesystem/operations.hpp>
#include "../inc/Node.h"

namespace fsb = boost::filesystem;
using namespace std;

int main(int argc, char* argv[])
{
    string path = "Z:\\Desktop\\test";
    Node node(path);
    
    for(;;){
    cout<<endl;
    cin >> path;
    }
    return 0;
}

/*TODO
    
*/
/*
    программа сталкивается с расширением файла в следующих случаях
    1) запрос у пользователя - какие файлы с каким расширением в какую папку отсортировать (этим займётся класс который я ещё не придумал, но информация должна будет поступить в конечном итоге в Node в string)
    2) проверка при сортировки является ли этот файл с нужным расширением (это класс соритровки)

    их объединяет то, что они работают с расширениями, однако для запроса у пользователя расширение не проверяет буст
    а для сортировки берутся именно файлы хранящиеся в node.
    вопрос как реализовать это.

    шаблон проверки
    1) берётся файл
    2) из него извлекается расширение
    3) если оно совпадает с правилом - переместить
        иначе - не трогать

    реализация:
        написать это в классе сортировки 
*/