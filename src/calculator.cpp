#include <iostream>
#include <iomanip> // Додана нова бібліотека для контролю форматування виводу.

using namespace std; //"імпортує" всі імена (cout, cin, endl тощо) зі стандартної бібліотеки C++ (std)

int main() 
{
    double num1, num2;
    char op;

    cout << "Simple Console Calculator\n";
    // Пізніше можна реалізувати цикл для підтримки кількох операцій без перезапуску.
    cout << "Enter: number operator number (e.g. 10 + 5):\n";

    if (!(cin >> num1 >> op >> num2)) 
    {
        cerr << "Input error!\n";
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
                cerr << "Error: Division by zero!\n";
                return 2;
            }
            break;
        default:
            cerr << "Error: Unknown operation.\n";
            return 3;
    }

    // Використовуємо iomanip для виводу з фіксованою точністю (2 знаки після коми).
    cout << "Result: " << fixed << setprecision(2) << result << "\n";
    return 0;
}