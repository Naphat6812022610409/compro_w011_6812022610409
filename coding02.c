#include <stdio.h>

float average(int a, int b, int c) {
    // คำนวณค่าเฉลี่ย
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // คำนวณและแสดงผลคะแนนแต่ละวิชาและค่าเฉลี่ย
    printf("Math = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);

    // เรียกใช้ฟังก์ชัน average และแสดงค่าเฉลี่ย
    printf("Average = %.2f\n", average(math, physics, chemistry));

    return 0;
}