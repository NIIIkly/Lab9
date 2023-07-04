#include <stdio.h>

int minSteps(int x, int y) {
    // Якщо x дорівнює y, потрібен лише 1 крок
    if (x == y) {
        return 1;
    }

    // Якщо y - x менше або дорівнює 2, потрібен 2 кроки
    if (y - x <= 2) {
        return 2;
    }

    // Якщо y - x більше 2, додаємо 1 крок і рекурсивно викликаємо функцію для діапазону x+1 до y-1
    return 1 + minSteps(x + 1, y - 1);
}

int main() {
    int x, y;

    printf("Введіть значення x: ");
    scanf("%d", &x);

    printf("Введіть значення y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);

    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}
