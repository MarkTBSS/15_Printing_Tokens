#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "This is C";
    printf("s ======= : %s\n", s);

    // การแบ่งโทเค็นแรกโดยใช้ " " เป็นตัวคั่น
    char *sToken = strtok(s, " ");  
    // เงื่อนของ Loop คือทำต่อไปเรื่อยๆ 
    // ถ้ายังเจอค่าใน sToken ซึ่งก็คือ Whitespace
    while (sToken != NULL) {
        // พิมพ์โทเค็นที่ถูกแบ่งออกมา
        printf("sToken == : %s\n", sToken); 
        // ใช้ NULL เพื่อดำเนินการแบ่งโทเค็นต่อไปในสตริงเดิม
        sToken = strtok(NULL, " "); 
    }

    return 0;
}