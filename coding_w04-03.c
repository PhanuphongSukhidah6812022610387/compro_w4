#include <stdio.h>

int main() {
    // ประกาศตัวแปร
    char nameInitial = 'P';  // ตัวอักษรแรกของชื่อ
    int age = 19;            // อายุ (จำนวนเต็ม)
    float weight = 58.50;    // น้ำหนัก (จำนวนทศนิยม 1 ตำแหน่ง)
    char gender[] = "male"; // เพศ (เป็นข้อความ)

    // แสดงผล
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}