#include <stdio.h>  
  
int main() {  
    int t1, t2, t3;  
  
    // Просимо користувача ввести три значення  
    printf("Введіть три значення: ");  
  
    // Зчитуємо три значення t1, t2 та t3 за допомогою функції scanf()  
    scanf("%d %d %d", &t1, &t2, &t3);  
  
    // Обчислюємо час, необхідний для того, щоб три гостя змогли з'їсти пиріг,  
    // використовуючи формулу: time = 1 / (1/t1 + 1/t2 + 1/t3)  
    double time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);  
  
    // Виводимо результат за допомогою функції printf() з форматуванням до двох знаків після коми  
    printf("Час, необхідний для з'їдання пирога: %.2lf годин", time);  
  
    return 0;  
}