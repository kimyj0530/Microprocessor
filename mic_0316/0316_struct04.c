#include <stdio.h>

typedef struct student {
    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student *pary) {
    scanf("%d %s %d %d %d", &pary->num, pary->name, &pary->mic, &pary->lin, &pary->pro);
}

void calc_data(Student *pary) {
    pary->tot = pary->mic + pary->lin + pary->pro;
    pary->avg = pary->tot / 3;
    if (pary->avg >= 90) {
        pary->grade = 'A';
    } else if (pary->avg >= 80) {
        pary->grade = 'B';
    } else if (pary->avg >= 70) {
        pary->grade = 'C';
    } else if (pary->avg >= 60) {
        pary->grade = 'D';
    } else {
        pary->grade = 'F';
    }
}

void print_data(Student *pary) {
    printf("%d, %s, %d, %d, %d, %d, %.1f, %c\n", pary->num, pary->name, pary->mic, pary->lin, pary->pro, pary->tot, pary->avg, pary->grade);
}

int main(void) {
    int count = 0;
    Student ary[5];
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        printf("학생 %d\n", i + 1);
        input_data(&ary[i]);
        calc_data(&ary[i]);
    }
    printf("출력값은?\n");
    for (int i = 0; i < count; i++) {
        print_data(&ary[i]);
    }
    return 0;
}