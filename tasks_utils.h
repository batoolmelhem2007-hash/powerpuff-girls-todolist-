#ifndef TASKS_UTILS_H
#define TASKS_UTILS_H

extern char tasks[100][1001];
extern int count;

void addTask();
void viewTasks();
void deleteTask();
int strsize(char* string);

#endif