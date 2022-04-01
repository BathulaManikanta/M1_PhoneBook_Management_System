
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "phonebook1.h"

int main()
{
    retriveFromFile();
    char selection[50];

    int user_choice;
    while(1)
    {
        printf("PhoneBook_Manager Utility Main menu\n\n");
        printf("    1. Add a new Contact\n");
        printf("    2. Display All Contacts\n");
        printf("    3. Search Contact by First Name\n");
        printf("    4. Search Contact by Last Name\n");
        printf("    5. Search Contact by Phone Number\n");
        printf("    6. Search Contact by Email Id\n");
        printf("    7. Delete a Contact by Phone Number \n");
        printf("    8. Sort Contacts Alphabeticaly and display\n");
        printf("    9. Save Data to a File\n");
        printf("    10. Exit\n");
        
        do {
            printf("Enter your choice: \n");
            gets(selection);
            user_choice = atoi(selection);
        } 
        while (user_choice < 1 || user_choice > 10);

        switch(user_choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            displayAllContacts();
            break;
        case 3:
            printf("Please enter the First Name of contact to search:\n ");
            gets(selection);
            searchContact(selection, FIRST_NAME);
            break;
        case 4:
            printf("Please enter the Last Name of the contact to search: \n");
            gets(selection);
            searchContact(selection, LAST_NAME);
            break;
        case 5:
            printf("Please enter the Phone Number of the contact to search: \n");
            gets(selection);
            searchContact(selection, MOBILE_NUMBER);
            break;
        case 6:
            printf("Please enter the Email Id of the contact to search: \n");
            gets(selection);
            searchContact(selection, EMAIL_ID);
            break;
        case 7:
            printf("Please enter the Phone Number of the contact to delete: \n");
            gets(selection);
            removeContact(selection);
            break;
        case 8:
            sort_Contacts();
            break;
        case 9:
            storeToFile();
            break;
        case 10:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}
