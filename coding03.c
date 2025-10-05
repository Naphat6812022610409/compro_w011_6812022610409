#include <stdio.h>

void inputScores(float arr[3][3]) {
    // รับคะแนนของนักเรียน 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &arr[i][0]);
        printf("Physics: ");
        scanf("%f", &arr[i][1]);
        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

void printTable(float arr[3][3]) {
    // แสดงตารางคะแนน
    printf("Score Table:\n");
    printf("Student Math  Physics  Chemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d       %.2f    %.2f    %.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
}

void printAverage(float arr[3][3]) {
    // คำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
    float sumMath = 0, sumPhysics = 0, sumChemistry = 0;
    
    for (int i = 0; i < 3; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChemistry += arr[i][2];
    }

    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath / 3);
    printf("Physics: %.2f\n", sumPhysics / 3);
    printf("Chemistry: %.2f\n", sumChemistry / 3);
}

int main() {
    float scores[3][3]; // สร้าง 2D array เพื่อเก็บคะแนน

    // เรียกใช้ฟังก์ชันที่ต้องการ
    inputScores(scores);
    printTable(scores);
    printAverage(scores);

    return 0;
}