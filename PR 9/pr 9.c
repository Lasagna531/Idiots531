#include <stdio.h>

int minSteps(int x, int y) {
    if (y <= x) {
        return x - y;  // Якщо y <= x, то необхідно зробити (x - y) кроків назад
    }

    // Ініціалізуємо змінні
    int steps = 0;
    int diff = y - x;
    int power2 = 1;

    // Знаходимо мінімальну кількість кроків
    while (diff > power2) {
        diff -= power2;
        steps++;
        if (steps % 2 == 0) {
            power2 *= 2;
        }
    }

    // Додаємо залишок diff до кількості кроків
    steps += diff;

    return steps;
}

int main() {
    int x, y;

    // Зчитуємо значення x та y з клавіатури
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    // Обчислюємо мінімальну кількість кроків
    int steps = minSteps(x, y);

    // Виводимо результат
    printf("Мінімальна кількість кроків: %d\n", steps);

    return 0;
}
