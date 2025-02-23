#include<stdio.h>

struct Students{
    char name [50];
    char course[50];
    char branch[50];
    int rollNumber;
    float CGPA;


};


int main(){ 
    struct Students S[10];  //  Array to store details of 10 students
         int i;
          
          //  Taking input from the user
         for (i = 0; i < 10; i++) {
            printf("Enter details for Students %d:\n", i + 1);

            printf("Enter students name: ");
            scanf("%s", S[i].name);

            printf("Enter name of course: ");
            scanf("%s", S[i].course);

            printf("Enter name of branch: ");
            scanf("%s", S[i].branch);

            printf("Enter Roll Number: ");
            scanf("%d", &S[i].rollNumber);

            printf("Enter CGPA: ");
            scanf("%f", &S[i].CGPA);

            printf("\n");
         }
         

         // Displaying Students Details
         printf("\nDisplaying Students Details:\n");
         for (i = 0; i < 10; i++) {
            printf("Student %d: Name: %s, Course: %s, Branch: %s, Roll Number: %d, CGPA: %2f\n" , i + 1, S[i].name, S[i].course, S[i].branch, S[i].rollNumber, S[i].CGPA);
         }


       return 0;
        
}