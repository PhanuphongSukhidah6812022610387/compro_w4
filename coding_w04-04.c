#include <stdio.h>

int main() {
    // กรณีที่ 1: ใช้ int
    int score1 = 90.5;  // จะเกิดการตัดทศนิยม
    printf("กรณีที่ 1 - int score: %d\n", score1);

    // กรณีที่ 2: ใช้ float
    float score2 = 90.5;
    printf("กรณีที่ 2 - float score: %.1f\n", score2);

    return 0;
}
//ถ้าใช้ int score1 = 90.5; จะเกิด error เพราะ int เก็บแค่จำนวนเต็มไม่ได้ ต้องใช้ float หรือ double แทน ถ้าต้องการเก็บค่าทศนิยม 