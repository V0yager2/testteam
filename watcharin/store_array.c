/*
รับค่าจำนวนเต็ม 5 ตัวแล้วนำไปเก็บใน Array และแสดงผลทั้งหมด
*/
#include <stdio.h>
int main() {
    int numbers[5];
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]); // รับค่าและเก็บในอาเรย์
        sum += numbers[i]; // บวกค่าที่รับมาในsum
    }
    printf("Sum of entered numbers: %d\n", sum);
    printf("Numbers in array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // แสดงค่าที่เก็บในอาเรย์
    }
    
    return 0;
}
/*
Enter 5 integers: 1 2 3 4 5 
Entered numbers are: 1 2 3 4 5 
Sum of entered numbers: 15
*/