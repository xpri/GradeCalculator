#include <stdio.h>
float homework1;
float homework2;
float homework3;
float homeworksum;
float homeworkAverage;
float homeworkweightedAverage;
float exam1;
float exam2;
float examsum;
float examAverage;
float examweightedAverage;
float quiz1;
float quiz2;
float quiz3;
float quiz4;
float quizsum;
float quizAverage;
float quizweightedAverage;
float project1;
float project2;
float projectsum;
float projectAverage;
float projectweightedAverage;
float portfolio;
float portfolioweighted;
float totalweightedgrade;
//defining variables
void main () {

    printf("First Homework Grade:");
    scanf("%f", &homework1);
    printf("The value entered is %f.\n",homework1);

    printf("Second Homework Grade:");
    scanf("%f", &homework2);
    printf("The value entered is %f.\n",homework2);

    printf("Third Homework Grade:");
    scanf("%f", &homework3);
    printf("The value entered is %f.\n",homework3);

    homeworksum = homework1 + homework2 + homework3;
    homeworkAverage = homeworksum / 3;
    homeworkweightedAverage = homeworkAverage * .25;
    //homework weighted grade is calculated

    printf("First Exam Grade:");
    scanf("%f", &exam1);
    printf("The value entered is %f.\n",exam1);

    printf("Second Exam Grade:");
    scanf("%f", &exam2);
    printf("The value entered is %f.\n",exam2);

    examsum = exam1 + exam2;
    examAverage = examsum / 2;
    examweightedAverage = examAverage *.30;
    //exam weighted average is calculated
    
    printf("First Quiz Grade:");
    scanf("%f", &quiz1);
    printf("The value entered is %f.\n",quiz1);

    printf("Second Quiz Grade:");
    scanf("%f", &quiz2);
    printf("The value entered is %f.\n",quiz2);

    printf("Third Quiz Grade:");
    scanf("%f", &quiz3);
    printf("The value entered is %f.\n",quiz3);

    printf("Fourth Quiz Grade:");
    scanf("%f", &quiz4);
    printf("The value entered is %f.\n",quiz4);

    quizsum = quiz1 + quiz2 + quiz3 + quiz4;
    quizAverage = quizsum / 4;
    quizweightedAverage = quizAverage *.20;
    //quiz weighted grade is calculated

    printf("First Project Grade:");
    scanf("%f", &project1);
    printf("The value entered is %f.\n",project1);

    printf("Second Project Grade:");
    scanf("%f", &project2);
    printf("The value entered is %f.\n",project2);

    projectsum = project1 + project2;
    projectAverage = projectsum /2;
    projectweightedAverage = projectAverage * .15;
    //project weighted grade is calculated

    printf("Portfolio Grade:");
    scanf("%f", &portfolio);
    printf("The value entered is %f.\n",portfolio);
    
    portfolioweighted = portfolio *.1;
    //portfolio weighted grade is calculated

    totalweightedgrade = (homeworkweightedAverage + examweightedAverage + quizweightedAverage + projectweightedAverage + portfolioweighted);

    printf("The Final Grade For This Course Is... ");
    printf("%g", totalweightedgrade);
    //total weighted grade is calculated
}







