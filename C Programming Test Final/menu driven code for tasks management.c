#include<stdio.h>
#include<string.h>
struct Task 
{
    int id;
    char description[50];
    char status[10];
};
void main()
{
	struct Task tasks[40]; 
    int count = 0;         
    int choice,i,id,found;
    do {
        printf("\n******To Do List******\n");
        printf("\n1. Add Task");
        printf("\n2. Update Task");
        printf("\n3. Display Tasks");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if(choice==1) 
		{ 
            printf("\nEnter Task ID: ");
            scanf("%d", &tasks[count].id);

            printf("\nEnter Task Description: ");
            scanf(" %s", tasks[count].description);

            printf("\nEnter Task Status: ");
            scanf(" %s", tasks[count].status);

            count++;
            printf("\nTask added successfully!");
        }
        else if(choice==2) 
		{ 
            printf("\nEnter Task ID to update: ");
            scanf("%d", &id);
            found=0;

            for(i=0;i<count;i++) 
			{
                if(tasks[i].id==id) 
				{
                    printf("\nEnter new status: ");
                    scanf(" %s", tasks[i].status);
                    printf("\nTask updated successfully!");
                    found = 1;
                    break;
                }
            }
            if(!found) 
			{
                printf("\nTask with ID %d not found!", id);
            }
        }
        else if(choice==3) 
		{ 
            if(count==0) 
			{
                printf("\nNo tasks available!");
            } 
			else 
			{
                printf("\n******To Do List******\n");
                for (i = 0; i < count; i++) 
				{
                    printf("\nID: %d", tasks[i].id);
                    printf("\nDescription: %s", tasks[i].description);
                    printf("\nStatus: %s", tasks[i].status);
                    printf("\n-------------------");
                }
            }
        }
        else if(choice==4) 
		{
            printf("\nExit");
        }
        else 
		{
            printf("\nInvalid choice!");
        }

    } while(choice!=4);

}