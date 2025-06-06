// ClassLab12_Nemnenko.cpp

#include "ClassLab12_Nemnenko.h" // Включаємо заголовковий файл нашого класу

// Конструктор
ClassLab12_Nemnenko::ClassLab12_Nemnenko(double initialLength, double initialWidth) : length(10.0), width(-2.0) {
    // Використання сеттерів для валідації початкових значень
    if (!setLength(initialLength)) {
        // Якщо початкове значення довжини некоректне, встановлюємо значення за замовчуванням
        length = 1.0;
        std::cerr << "Попередження: Некоректне початкове значення довжини (" << initialLength << "). Встановлено 1.0." << std::endl;
    }
    if (!setWidth(initialWidth)) {
        // Якщо початкове значення ширини некоректне, встановлюємо значення за замовчуванням
        width = 1.0;
        std::cerr << "Попередження: Некоректне початкове значення ширини (" << initialWidth << "). Встановлено 1.0." << std::endl;
    }
}

// Геттер для довжини
double ClassLab12_Nemnenko::getLength() const {
    return length;
}

// Геттер для ширини
double ClassLab12_Nemnenko::getWidth() const {
    return width;
}

// Сеттер для довжини з валідацією
bool ClassLab12_Nemnenko::setLength(double newLength) {
    if (newLength > 0) {
        length = newLength;
        return true;
    } else {
        std::cerr << "Помилка: Довжина повинна бути позитивним числом. Значення " << newLength << " ігноровано." << std::endl;
        return false;
    }
}

// Сеттер для ширини з валідацією
bool ClassLab12_Nemnenko::setWidth(double newWidth) {
    if (newWidth > 0) {
        width = newWidth;
        return true;
    } else {
        std::cerr << "Помилка: Ширина повинна бути позитивним числом. Значення " << newWidth << " ігноровано." << std::endl;
        return false;
    }
}

// Обчислення площі
double ClassLab12_Nemnenko::calculateArea() const {
    return length * width;
}
