#include <stdio.h>
#include <string.h> 

int main(){
    struct flight{
        char name[50];
        int age;
        int seat_number;
        char class[50];
    };

    int pass;
    printf("Enter the number of passengers: ");
    scanf("%d", &pass);

    struct flight passengers[pass];

    
    printf("Enter the class (economy, business, etc.): ");
    scanf("%s", passengers[0].class); 

   
    if (strcmp(passengers[0].class, "economy") == 0) {
      
        for (int i = 0; i < pass; i++) {
            printf("\nEnter details for passenger %d\n", i + 1);
            printf("Enter the name: ");
            scanf("%s", passengers[i].name);  
            printf("Enter the age: ");
            scanf("%d", &passengers[i].age);
            printf("Enter the seat number: ");
            scanf("%d", &passengers[i].seat_number);
        }
    } else {
        printf("The class entered is not economy.\n");
    }

 
    printf("\nPassenger Details:\n");
    for (int i = 0; i < pass; i++) {
        printf("\nPassenger %d\n", i + 1);
        printf("Name: %s\n", passengers[i].name);
        printf("Age: %d\n", passengers[i].age);
        printf("Seat Number: %d\n", passengers[i].seat_number);
        printf("Class: %s\n", passengers[i].class);
    }

    return 0;
}

