
#include "processes.h"
#include <stdio.h>
#include <string.h>

void printmenu() {
    printf("Task Manager:\n");
    printf("1. Create a new process\n");
    printf("2. List all processes\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    char name[MAX_NAME_LENGTH];
    int id;

    while (1) {
        printmenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Enter process name: ");
                fgets(name, MAX_NAME_LENGTH, stdin);
                name[strcspn(name, "\n")] = '\0'; 
                id = createnewprocess(name);
                if (id != 0) {
                    printf("Process created with ID %d.\n", id);
                }
                break;

            case 2:
                listprocesses();
                break;

            case 3:
                printf("Enter process ID to stop: ");
                scanf("%d", &id);
                stopprocess(id);
                break;

            case 4:
                printf("Exiting Task Manager.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}