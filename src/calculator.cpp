#include <iostream>
#include <iomanip> // Додана нова бібліотека для контролю форматування виводу.

using namespace std; //"імпортує" всі імена (cout, cin, endl тощо) зі стандартної бібліотеки C++ (std)

int main() 
{
    double num1, num2;
    char op;

    cout << "Простий Консольний Калькулятор\n";
    // Пізніше можна реалізувати цикл для підтримки кількох операцій без перезапуску.
    cout << "Введіть: число оператор число (наприклад, 10 + 5):\n";

    if (!(cin >> num1 >> op >> num2)) 
    {
        cerr << "Помилка вводу!\n";
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
                cerr << "Помилка: Ділення на нуль!\n";
                return 2;
            }
            break;
        default:
            cerr << "Помилка: Невідома операція.\n";
            return 3;
    }

    // Використовуємо iomanip для виводу з фіксованою точністю (2 знаки після коми).
    cout << "Результат: " << fixed << setprecision(2) << result << "\n";
    return 0;
}