#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp;
    char name[20];
    int age;
    double height;
    double ave_age = 0;

    if ((fp = fopen("user_info.txt", "w")) == NULL) {
        printf("���� ���� ����\n");
        return;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ��° ���������� �Է��ϼ���(���� �̸� Ű ��) : ", i + 1);
        scanf("%d %s %lf", &age, &name, &height);
        fprintf(fp, "%d %s %lf\n", age, name, height);
    }

    fclose(fp);

    if ((fp = fopen("user_info.txt", "r")) == NULL) {
        printf("���� ���� ����\n");
        return 0;
    }
}