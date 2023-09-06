#include <stdio.h>

 

int main() {

    int start, end;
    printf("Start: ");
    scanf("%d", &start);
    printf("end: ");
    scanf("%d", &end);S
    printf("สูตรคูณแม่ 2 ตั้งแต่ %d ถึง %d:\n", start, end);

    if (start <= end) {

        for (int i = start; i <= end; i++) {

            printf("2 x %d = %d\n", i, 2 * i);

        }

    } else {

        printf("จุดเริ่มต้นต้องไม่มากกว่าจุดจบ\n");

    }

 

    return 0;

}