#include <stdio.h>
#include <string.h>

// Функція для обчислення факторіалу
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Функція для обчислення кількості анаграм
int countAnagrams(char word[]) {
    int length = strlen(word);
    int count[26] = {0};  // Масив для збереження кількості кожної букви

    // Підраховуємо кількість кожної букви у слові
    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++;
    }

    int totalAnagrams = factorial(length);  // Загальна кількість анаграм

    // Ділимо загальну кількість анаграм на факторіали кількостей кожної букви
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            totalAnagrams /= factorial(count[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];

    // Зчитуємо слово з клавіатури
    printf("Введіть слово: ");
    scanf("%s", word);

    // Обчислюємо кількість анаграм
    int anagramCount = countAnagrams(word);

    // Виводимо результат
    printf("Кількість анаграм: %d\n", anagramCount);

    return 0;
}
