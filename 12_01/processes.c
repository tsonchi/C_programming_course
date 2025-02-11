#include "processes.h"
#include <string.h>
#include <stdio.h>

Process processes[MAX_PROCESSES];
int processcount = 0;
static int nextid = 1;

static int nextprocessid() {
    if (nextid > 0) {
        return nextid++;
    }
    return 0;
}

int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        printf("Error: Maximum number of processes reached.\n");
        return 0;
    }
    int id = nextprocessid();
    if (id == 0) {
        printf("Error: Unable to generate a unique process ID.\n");
        return 0;
    }
    processes[processcount].id = id;
    strncpy(processes[processcount].name, name, MAX_NAME_LENGTH - 1);
    processes[processcount].name[MAX_NAME_LENGTH - 1] = '\0';
    processcount++;
    return id;
}

void stopprocess(int id) {
    int found = 0;
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            found = 1;
            for (int j = i; j < processcount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processcount--;
            break;
        }
    }
    if (!found) {
        printf("Error: Process with ID %d not found.\n", id);
    }
}

void listprocesses() {
    if (processcount == 0) {
        printf("No processes running.\n");
        return;
    }
    for (int i = 0; i < processcount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}