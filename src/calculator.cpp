#include <iostream>

int main() 
{
    double num1, num2;
    char op;

    std::cout << "Простий Консольний Калькулятор\n";
    std::cout << "Введіть: число оператор число (наприклад, 10 + 5):\n";

    if (!(std::cin >> num1 >> op >> num2)) 
    {
        std::cerr << "Помилка вводу!\n";
        return 1;
    }

    double result;
    switch (op) 
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) 
            {
                result = num1 / num2;
            } 
            else 
            {
                std::cerr << "Помилка: Ділення на нуль!\n";
                return 2;
            }
            break;
        default:
            std::cerr << "Помилка: Невідома операція.\n";
            return 3;
    }

    std::cout << "Результат: " << result << "\n";
    return 0;
}