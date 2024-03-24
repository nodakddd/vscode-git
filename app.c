#include <stdio.h>

int main() {
	int ko = 0;
	int math = 0;
	int eng = 0;
	int grade = 0;
    int age = 0;

	double avg = 0;
	char* grade = "";

	scanf("%d %d %d", &ko, &eng, &math);

	avg = (ko + eng + math) / 3.0;

	if (avg >= 90)
		grade = "A";
	else if (avg >= 80 && avg < 90)
		grade = "B";
	else if (avg >= 70 && avg < 80)
		grade = "C";
	else if (avg >= 60 && avg < 70)
		grade = "D";
	else
		grade = "F";

	printf("%.2f %s\n", avg, grade);

	return 0;

}