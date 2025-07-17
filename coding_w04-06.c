#include <stdio.h>

void countCall() {
    static int counter = 0;  // ใช้ static
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//สรุปผลจากการทดลอง
// GLOBAL_RATE ถูกประกาศแบบ global ทำให้สามารถใช้ได้ทุกที่ในโปรแกรม รวมถึง main() ด้วย
// LOCAL_BONUS ถูกประกาศแบบ local ในฟังก์ชัน calculate() ทำให้ใช้ได้เฉพาะในฟังก์ชันนั้นเท่านั้น
// เมื่อพยายามใช้ LOCAL_BONUS ใน main() จะทำให้เกิด compile-time error เพราะไม่อยู่ใน scope
// การใช้ const ช่วยป้องกันการเปลี่ยนแปลงค่าคงที่โดยไม่ตั้งใจ ทำให้โปรแกรมมีความปลอดภัยและอ่านง่ายมากขึ้น