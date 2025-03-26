#include <stdio.h>

/* 
 * Department Switch Case Demo
 * Branch: ca1-cse
 * Focus: Computer Science Engineering
 */

int main() {
    int choice;
    
    printf("Select a department:\n");
    printf("1. CSE\n");
    printf("2. AIML\n");
    printf("3. ECE\n");
    printf("4. MEC\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("CSE: Computer Science Engineering\n");
            printf("Courses: Data Structures, Algorithms, Database Systems, Computer Networks\n");
            printf("\n*** This is the CSE branch ***\n");
            printf("CSE is the primary focus of this branch.\n");
            break;
        case 2:
            printf("AIML: Artificial Intelligence and Machine Learning\n");
            printf("Courses: Machine Learning, Deep Learning, Natural Language Processing, Computer Vision\n");
            break;
        case 3:
            printf("ECE: Electronics and Communication Engineering\n");
            printf("Courses: Digital Electronics, Signal Processing, Communication Systems, VLSI Design\n");
            break;
        case 4:
            printf("MEC: Mechanical Engineering\n");
            printf("Courses: Thermodynamics, Fluid Mechanics, Manufacturing Processes, Machine Design\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }
    
    return 0;
} 