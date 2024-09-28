#include <stdio.h>

int main()
{
int attendance, assignment_score, exam_result;
char final_grade;    
printf("Enter attendance (out of 100): ");
scanf("%d", &attendance);
printf("Enter assignment score (out of 100): ");
scanf("%d", &assignment_score);
printf("Enter exam result (out of 100): ");
scanf("%d", &exam_result);
if (attendance >= 90)
    {
    if (assignment_score >= 80) {
        if (exam_result >= 70)
            final_grade = 'A';
        else if (exam_result >= 60) 
            final_grade = 'B';
        else 
            final_grade = 'C';
            
        } 
    else if (assignment_score >= 60) {
            if (exam_result >= 70) 
                final_grade = 'B';
             else if (exam_result >= 60)
                final_grade = 'C';
             else 
                final_grade = 'D';     
        } 
    
    } 
else if (attendance >= 80)
    {
    if (assignment_score >= 70) {
        if (exam_result >= 60) 
                final_grade = 'B';
             else 
                final_grade = 'C';
            
        } 
    else {
            final_grade = 'D';
        }
    } 

else
    {  
        final_grade = 'F';
    }
    printf("Your Final grade is: %c\n", final_grade);

    return 0;
}