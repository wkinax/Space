/*
Автор: Сизых П.В., Группа: 4353
Версия: 1, Дата: начало - 04.11.2024, завершение - .11.24
Задание: 4.1.20в "Сформировать новый массив с множеством h = f - g"
*/
#include <fstream>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    fstream out;
    out.open("C:\\Users\\Полина\\Desktop\\прога4.3.txt");
    std::cout << "Автор: Сизых П.В., Группа: 4353\n";
    std::cout << "Версия: 1, Дата: начало - 04.11.2024, завершение - .11.24\n";
    std::cout << "Задание: 4.1.20в Сформировать новый массив с множеством h = f - g";
    std::cout << std::endl;
    out << "Автор: Сизых П.В., Группа: 4353\n";
    out << "Версия: 1, Дата: начало - 04.11.2024, завершение - .11.24\n";
    out << "Задание: 4.1.20в Сформировать новый массив с множеством h = f - g";
//открыла файл 4.1, проверила на ошибку
    ifstream file("C:\\Users\\Полина\\Desktop\\прога4.1.txt");
        if (!file.is_open()) {
            cerr << "Ошибка открытия файла" << endl;
            return 1;
        }
//создала множество set1, добавила числа из файла в множество
    std::set <int> set1;
    int number;
    while (file >> number) {
        set1.insert(number);
    }
    file.close();
//вывела размер set1
    int n;
    n = set1.size();
    std::cout << "Размер первого множества(f): " << n;
    out << "Размер первого множества(f): " << n;
//вывела множество set1
    std::cout << "Первое множество(f): ";
    out << "Первое множество(f): ";
    for (int num : set1) {
        std::cout << num << " ";
        out << num << " ";
    }
//открыла файл 4.2, проверила на ошибку
    ifstream feel("C:\\Users\\Полина\\Desktop\\прога4.2.txt");
    if (!feel.is_open()) {
        cerr << "Ошибка открытия файла" << endl;
        return 1;
    }
//создала множество set2, добавила числа в множество set2
    std::set <int> set2;
    int number;
    while (feel >> number) {
        set2.insert(number);
    }
    file.close();
//вывела размер set2
    int m;
    m = set2.size();
    std::cout << "Размер второго множества(g): " << m;
    out << "Размер второго множества(g): " << m;
//вывела множество set2
    std::cout << "Второе множество(g): ";
    for (int num : set2) {
        std::cout << num << " ";
        out << num << " ";
    }
    std::cout << std::endl;
//создала множество result, с помощью функции посчитала разность, вывела множество
    std::set <int> result;
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(result, result.begin()));
    std::cout << "Результат(третье множество(h)): ";
    out << "Результат(третье множество(h)): ";
    for (int num : result) {
        std::cout << num << " ";
        out << num << " ";
    }
    return 0;
    out.close();
}