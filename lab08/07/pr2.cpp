#include <iostream>
#include <vector>
int main() {
    std::vector<int> numbers;
    int x;
    std::cout << "Введите числа (для окончания ввода введите любой не-числовой символ, например 'q'):\n";
    while (std::cin >> x) {
        numbers.push_back(x);
    }
    bool found_negative = false;
    for (int num : numbers) {
        if (num < 0) {
            std::cout << "Найдено отрицательное число: " << num << std::endl;
            found_negative = true;
            break;
        }
    }
    if (!found_negative) {
        std::cout << "Все числа неотрицательные!" << std::endl;
    }
    return 0;
}