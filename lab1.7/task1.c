#include <stdio.h>

typedef struct {
	int id;
	char name[25];
	float gpa;
} students;


int main(){
	int stuNum;

	printf("Enter the number of students: ");
	scanf("%d", &stuNum);
	students stu [stuNum];

	for (int i = 0 ; i < stuNum ; i++){
		printf("Enter Id for student %d: ", i+1);
		scanf("%d", &stu[i].id);
		printf("Enter name for student %d: ", i+1);
		scanf(" %s", stu[i].name);
		printf("Enter GPA for student %d: ", i+1);
		scanf(" %f", &stu[i].gpa);
	}

	printf("\n\nStudent Records:\n");

	for (int i = 0; i<stuNum ; i++){
		printf("ID: %d, Name: %s, GPA: %.2f\n", stu[i].id, stu[i].name, stu[i].gpa);
	}
	return 0;
}
