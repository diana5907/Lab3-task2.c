#include <stdio.h>

int main() {
    float d1, d2, area1, area2;
    d1 = 14;
    d2 = 48;
    area1 = 0.5 * d1 * d2;
    printf("Площа першого ромба: %f\n", area1);
    d1 = 25;
    d2 = 5;
    area2 = 0.5 * d1 * d2;
    printf("Площа другого ромба: %f\n", area2);
    if (area1 > area2) {
        printf("Перший ромб має більшу площу.");
    }
    else if (area2 > area1) {
        printf("Другий ромб має більшу площу.");
    }
    else {
        printf("Ромби мають однакову площу.");
    }
    return 0;
}