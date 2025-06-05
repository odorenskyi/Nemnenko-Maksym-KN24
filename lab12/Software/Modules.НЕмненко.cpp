// ClassLab12_Nemnenko.h

#ifndef CLASSLAB12_NEMNENKO_H
#define CLASSLAB12_NEMNENKO_H

#include <iostream> // Для std::cout, std::cerr
#include <string>   // Може бути корисно, якщо ви додасте інші атрибути/методи, що потребують рядків

/**
 * @brief Клас ClassLab12_Nemnenko представляє абстракцію двовимірної сутності
 * предметної області (наприклад, палітурки книги), яка має довжину та ширину.
 * Відповідає вимогам Задачі 12.1 та принципам інкапсуляції.
 */
class ClassLab12_Nemnenko {
private:
    double length; ///< @brief Довжина об'єкта (наприклад, палітурки).
    double width;  ///< @brief Ширина об'єкта (наприклад, палітурки).

public:
    /**
     * @brief Конструктор класу ClassLab12_Nemnenko.
     * Ініціалізує довжину та ширину об'єкта з валідацією.
     * @param initialLength Початкове значення довжини.
     * @param initialWidth Початкове значення ширини.
     */
    ClassLab12_Nemnenko(double initialLength, double initialWidth);

    /**
     * @brief Повертає поточне значення довжини об'єкта.
     * @return Поточна довжина.
     */
    double getLength() const;

    /**
     * @brief Повертає поточне значення ширини об'єкта.
     * @return Поточна ширина.
     */
    double getWidth() const;

    /**
     * @brief Встановлює нове значення довжини об'єкта.
     * Виконує валідацію: довжина повинна бути позитивним числом.
     * @param newLength Нове значення довжини.
     * @return true, якщо довжину успішно встановлено; false, якщо значення недійсне.
     */
    bool setLength(double newLength);

    /**
     * @brief Встановлює нове значення ширини об'єкта.
     * Виконує валідацію: ширина повинна бути позитивним числом.
     * @param newWidth Нове значення ширини.
     * @return true, якщо ширину успішно встановлено; false, якщо значення недійсне.
     */
    bool setWidth(double newWidth);

    /**
     * @brief Обчислює та повертає площу об'єкта (палітурки).
     * @return Обчислене значення площі (length * width).
     */
    double calculateArea() const;

    // Деструктор (якщо немає динамічної пам'яті, можна залишити стандартний або не оголошувати)
    // ~ClassLab12_Nemnenko() = default;
};

#endif // CLASSLAB12_NEMNENKO_H
