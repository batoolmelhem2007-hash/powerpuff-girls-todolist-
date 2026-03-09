#include "tasks_utils.h"
#include "writeNumber.h"

int main() {
    int choice;
    while(1){
        write(1,"1- Add Task\n",12);
        write(1,"2- View Tasks\n",14);
        write(1,"3- Delete Task\n",15);
        write(1,"4- Exit",7);
        write(1,"\nEnter your choice:",19);
        char buffer[4];
        int n=read(0,buffer,3);
        buffer[n]='\0';
        choice=0;
        int i=0;
        while(buffer[i]>='0'&&buffer[i]<='9'){
            choice=choice*10+(buffer[i]-'0');
            i++;
        }
        if(choice==1)addTask();
        else if(choice==2)viewTasks();
        else if(choice==3)deleteTask();
        else if(choice==4)break;
        else{
            write(1,"Do not be lazy, choose a number between 1 and 4\n",50);
        }
    }
}