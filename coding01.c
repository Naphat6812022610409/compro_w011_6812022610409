#include <stdio.h>

void inputAndShow() {
    int math, physics, chemistry;

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math: ");
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // แสดงผลคะแนนที่รับมา
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    // เรียกใช้ฟังก์ชัน inputAndShow
    inputAndShow();
    
    return 0;
}