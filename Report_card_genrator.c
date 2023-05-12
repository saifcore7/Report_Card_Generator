#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int main()
{
    usleep(1000000);
    printf("\033[33mLoading.....\033[0m\n");
    usleep(1000000);
    printf("\n\033[32m**************************************************\033[0m\n");
    usleep(1000000);
    printf("\033[35mWelcome to Jawahar Navodaya Vidyalaya Report Card Generator\033[0m\n");
    usleep(1000000);
    printf("\033[32m**************************************************\033[0m\n\n");
    usleep(1000000);

    // Input student details

    char name[100];
    char section;
    int standard, maths_marks, english_marks, hindi_marks, science_marks, social_science_marks;
    printf("\033[36mWait connecting to server....\n");
    usleep(2000000);
    printf("\n");
    printf("Starting the server");
    usleep(300000);
    printf("..");
    usleep(300000);
    printf("...\033[0m\n");
    usleep(2000000);
    printf("\n");
    printf("\033[33mNote:- Necessary input validations are given below read carefully. Otherwise errors will arise.\033[0m\n");
    printf("\n");
    printf("\033[38;2;255;165;0m* Name must have words,characters and strings only with space where ever required.\033[0m\n");
    usleep(1000000);
    printf("\033[38;2;255;165;0m* Section must have a character (between a and k) only.\033[0m\n");
    usleep(1000000);
    printf("\033[38;2;255;165;0m* Standard must be greater than 1 atleast and less than or equal to 12. \033[0m\n");
    usleep(1000000);
    printf("\033[38;2;255;165;0m* None of the marks must be greater than 100 and must have numbers only.\033[0m\n");
    usleep(1000000);
    printf("\n");
    printf("\033[30mEnter student name: \033[0m");
    fgets(name, sizeof(name), stdin);

    // Loop through each character in the string and check if it is a letter or a space
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!isalpha(name[i]) && !isspace(name[i]))
        {
            printf("Error: Name must only contain letters and spaces.\n");
            exit(EXIT_FAILURE);
        }
    }

    // Remove trailing newline character
    name[strcspn(name, "\n")] = '\0';

    printf("\033[30mEnter standard (class): \033[0m");
    if (scanf("%d", &standard) != 1 || standard < 1 || standard > 12)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for standard.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    printf("\033[30mEnter section: \033[0m");
    if (scanf(" %c", &section) != 1 || (section < 'A' || section > 'K' && section < 'a' || section > 'k'))
    {
        printf("\033[38;2;255;215;0mError: Invalid input for section.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    // Maths
    printf("\033[30mEnter mathematics marks (out of 100): \033[0m");
    if (scanf("%d", &maths_marks) != 1 || maths_marks < 0 || maths_marks > 100)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for mathematics marks.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    // English
    printf("\033[30mEnter English marks (out of 100): \033[0m");
    if (scanf("%d", &english_marks) != 1 || english_marks < 0 || english_marks > 100)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for English marks.\033[0m\n");
        exit(EXIT_FAILURE);
    }
    // Hindi
    printf("\033[30mEnter English marks (out of 100): \033[0m");
    if (scanf("%d", &hindi_marks) != 1 || hindi_marks < 0 || hindi_marks > 100)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for English marks.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    // Science
    printf("\033[30mEnter Science marks (out of 100): \033[0m");
    if (scanf("%d", &science_marks) != 1 || science_marks < 0 || science_marks > 100)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for Science marks.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    // Social Science
    printf("\033[30mEnter Social Studies marks (out of 100): \033[0m");
    if (scanf("%d", &social_science_marks) != 1 || social_science_marks < 0 || social_science_marks > 100)
    {
        printf("\033[38;2;255;215;0mError: Invalid input for Social Studies marks.\033[0m\n");
        exit(EXIT_FAILURE);
    }

    // Calculate total marks and grade

    int total_marks = maths_marks + english_marks + hindi_marks + science_marks + social_science_marks;
    char grade;
    if (total_marks > 500 || total_marks < 0)
    {
        printf("\033[38;2;255;215;0mInvalid total marks. Please enter valid marks.\033[0m\n");
        exit(0);
    }
    else if (total_marks >= 450 && total_marks <= 500)
    {
        grade = 'A';
    }
    else if (total_marks >= 400 && total_marks <= 449)
    {
        grade = 'B';
    }
    else if (total_marks >= 350 && total_marks <= 399)
    {
        grade = 'C';
    }
    else if (total_marks >= 300 && total_marks <= 349)
    {
        grade = 'D';
    }
    else if (total_marks >= 200 && total_marks <= 299)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("\n");
    usleep(1000000);
    printf("\033[32mWait generating report card....\033[0m\n");
    usleep(2000000);
    printf("\n");
    printf("\033[36mReport card is ready... \033[0m\n");
    usleep(1000000);
    printf("\n");

    // Print report card

    printf("\n\033[32m-----------------------------------------------------------\033[0m\n");
    usleep(500000);
    printf("                \033[35mJawahar Navodaya Vidyalaya\033[30m\n");
    usleep(500000);
    printf("                   \033[31mAnnual Report Card\033[0m\n");
    printf("\n");
    printf("\n");
    usleep(500000);
    printf("\033[38;2;64;224;208m      Name: \033[38;2;255;215;0m%s\033[0m\n", name);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Standard: \033[38;2;255;215;0m%d\033[0m\n", standard);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Section: \033[38;2;255;215;0m%c\033[0m\n", section);
    usleep(500000);
    printf("\n");
    printf("\n");
    usleep(500000);
    printf("\033[30m      Marks Secured out of 100:-\n");
    printf("\n");
    usleep(500000);
    printf("\033[38;2;64;224;208m      Mathematics: \033[38;2;255;215;0m%d\033[0m\n", maths_marks);
    usleep(500000);
    printf("\033[38;2;64;224;208m      English: \033[38;2;255;215;0m%d\033[0m\n", english_marks);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Hindi: \033[38;2;255;215;0m%d\033[0m\n", hindi_marks);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Science: \033[38;2;255;215;0m%d\033[0m\n", science_marks);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Social Science: \033[38;2;255;215;0m%d\033[0m\n", social_science_marks);
    printf("\n");
    printf("\n");
    usleep(500000);
    printf("\033[38;2;64;224;208m      Total marks secured: \033[38;2;255;215;0m%d\033[0m\n", total_marks);
    usleep(500000);
    printf("\033[38;2;64;224;208m      Grade: \033[38;2;255;215;0m%c\033[0m\n", grade);
    usleep(500000);
    printf("\033[32m--------------------------------------------------------------\033[0m\n");
    usleep(500000);
    printf("                     \033[38;2;255;165;0mBest of Luck!!\n");
    usleep(500000);
    printf("                 For future Endeavours!!\033[0m");

    return 0;
} // end of main
