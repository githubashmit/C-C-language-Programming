#include <stdio.h>
#include <math.h>

// function prototypes
void registration();
void calculate_bmi();
void calculate_vo2max();
void display_bmi();
void display_services();

// global variables
char name[50];
int age;
float height;
float weight;
float bmi;

int main() {
    int choice;
    
    printf("Welcome to Fitness Calculator!\n");
    
    do {
        printf("\nChoose an option:\n");
        printf("1. Registration\n");
        printf("2. Calculate BMI\n");
        printf("3. Calculate VO2max\n");
        printf("4. Display BMI\n");
        printf("5. Display Services details\n");
        printf("6. Exit\n");
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                registration();
                break;
            case 2:
                calculate_bmi();
                break;
            case 3:
                calculate_vo2max();
                break;
            case 4:
                display_bmi();
                break;
            case 5:
                display_services();
                break;
            case 6:
                printf("Thank you for using Fitness Calculator!\n");
                break;
            default:
                printf("Invalid option! Please choose again.\n");
        }
    } while (choice != 6);
    
    return 0;
}

void registration() {
    printf("\nEnter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    
    printf("Enter your weight (in kilograms): ");
    scanf("%f", &weight);
}

void calculate_bmi() {
    bmi = weight / pow(height, 2);
    
    printf("\n%s, your BMI is %.2f\n", name, bmi);
}

void calculate_vo2max() {
    float vo2max;
    float resting_hr;
    float max_hr;
    
    printf("\nEnter your resting heart rate: ");
    scanf("%f", &resting_hr);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    max_hr = 220 - age;
    vo2max = 15 * (max_hr / resting_hr);
    
    printf("\n%s, your VO2max is %.2f\n", name, vo2max);
}

void display_bmi() {
    printf("\n%s, your BMI is %.2f\n", name, bmi);
}

void display_services() {
    printf("\nServices available:\n");
    printf("1. Registration\n");
    printf("2. Calculate BMI\n");
    printf("3. Calculate VO2max\n");
    printf("4. Display BMI\n");
    printf("5. Display Services details\n");
    printf("6. Exit\n");
}
