#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAXN 1000

typedef struct {
    double x, y;
    char gender;
} Student;

double distance(Student a, Student b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main() {
    int N;
    Student students[MAXN];
    Student boys[MAXN], girls[MAXN];
    int boy_count = 0, girl_count = 0;

    // Input
    printf("Enter number of students: ");
    scanf("%d", &N);

    if (N % 2 != 0) {
        printf("Number of students must be even.\n");
        return 1;
    }

    printf("Enter student data (x y gender):\n");
    for (int i = 0; i < N; ++i) {
        scanf("%lf %lf %c", &students[i].x, &students[i].y, &students[i].gender);
        if (students[i].gender == 'B')
            boys[boy_count++] = students[i];
        else if (students[i].gender == 'G')
            girls[girl_count++] = students[i];
        else {
            printf("Invalid gender input.\n");
            return 1;
        }
    }

    // Check even counts
    if (boy_count % 2 != 0 || girl_count % 2 != 0) {
        printf("Number of boys and girls must be even.\n");
        return 1;
    }

    // Maximize total distance by pairing across circle
    double total_distance = 0.0;

    for (int i = 0; i < boy_count / 2; ++i) {
        int j = i + boy_count / 2;
        total_distance += distance(boys[i], boys[j]);
    }

    for (int i = 0; i < girl_count / 2; ++i) {
        int j = i + girl_count / 2;
        total_distance += distance(girls[i], girls[j]);
    }

    printf("Maximum total ball passing distance: %.6lf\n", total_distance);

    return 0;
}
