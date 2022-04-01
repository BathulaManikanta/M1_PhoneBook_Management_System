/**
 * @file phonebook1.c
 * @author Jayanth (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "phonebook1.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXIMUM_SIZE 200
int presentSize = 0; //current number of contacts in the Contact structure

void LowerString(char *string)
{
    int length;
    length = strlen(string);
    int j;
    for(j=0; j<length; j++) 
    {
        string[j] = tolower(string[j]);
    }
}

Contact contacts[MAXIMUM_SIZE]; // array of structure Contact

int addContact()
{
    if(presentSize == MAXIMUM_SIZE) 
    {
        printf("\nPhoneBook Manager is out of storage\n");
        return 0;
    }
    else
    {
    Contact* c1;
    c1 = (Contact*)(malloc(sizeof(Contact)));
    if(c1==NULL)
    {
        printf("\nOut of memory error\n");
    }
    else
    {
        int flag=0;
        printf("\n First Name: ");
        gets(c1->firstName);
        printf("\n Last Name: ");
        gets(c1->lastName);
        printf("\n Phone Number: ");
        gets(c1->phoneNumber);
        printf("\n Email Id: ");
        gets(c1->email);

        contacts[presentSize] = *c1;
        ++presentSize;

        printf("\nContact is sucessfully added.\n");
        free(c1);

    }

    }
}





int displayContact(int i)
{
    if(i < 0 || i >= presentSize) 
    {
        printf("\nInvalid index entered");
        return 0;
    }

    Contact* c1 = &contacts[i];
    printf("\nFirst Name: %s\n", c1->firstName);
    printf("Last Name : %s\n", c1->lastName);
    printf("Mobile No : %s\n", c1->phoneNumber);
    printf("Email Id : %s\n\n",c1->email);
    
    return 1;
}


int displayAllContacts()
{
    if(presentSize == 0) 
    {
        printf("\nPhoneBook Manager is currently empty\n");
        return 0;
    }
    int k;
    for(k = 0;k< presentSize; k++)
    {
        displayContact(k);
        printf("\n");
    }
}


int searchContact(char *selection, search_t attribute)
{
    int flag = 0,i;

    LowerString(selection);
    char content[41];

    if(attribute == FIRST_NAME) 
    { // searching by first name
        for(i=0; i<presentSize; i++)
         {

            strcpy(content, contacts[i].firstName);
            LowerString(content);

            if(strcmp(content, selection) == 0) 
            {
                displayContact(i);
                flag = 1;
            }
        }
    }
    else if(attribute == LAST_NAME) 
    { // searching by last name
        for(i=0; i<presentSize; i++) 
        {
            strcpy(content, contacts[i].lastName);
            LowerString(content);

            if(strcmp(content, selection) == 0)
            {
                displayContact(i);
                flag = 1;
            }
        }
    }
    else if(attribute  == MOBILE_NUMBER) 
    { // searching by mobile number
        for(i=0; i<presentSize; i++) 
        {
            strcpy(content, contacts[i].phoneNumber);
            LowerString(content);

            if(strcmp(content, selection) == 0) 
            {
                displayContact(i);
                flag = 1;
            }
        }
    }
    else if(attribute  == EMAIL_ID) 
    { // searching by email id
        for(i=0; i<presentSize; i++) 
        {
            strcpy(content, contacts[i].email);
            LowerString(content);

            if(strcmp(content, selection) == 0) 
            {
                displayContact(i);
                flag = 1;
            }
        }
    }
    else 
    {
        printf("\nInvalid Searching type\n");
        return 0;
    }

    if(!flag) {
        printf("\nContact not found in the phonebook manager\n");
    }

}



int comparator(const void* p, const void* q)
{
    char *s,*t;
    s = ((Contact*)p)->firstName;
    LowerString(s);
    t = ((Contact*)q)->firstName;
    LowerString(t);
    return strcmp(s,t);
}



void sort_Contacts()
{
    qsort(contacts, presentSize, sizeof(Contact), comparator);
    displayAllContacts();
}




int removeContact(char *phoneNumber)
{
    if(presentSize == 0) 
    {
        printf("\nPhoneBook Manager is empty, Cannot delete anything\n");
        return 0;
    }


    int i, j;
    int cnt = 0;
    for(i=0; i<presentSize; i++) 
    {
        if(strcmp(contacts[i].phoneNumber, phoneNumber) == 0) 
        {
            for(j=i; j<presentSize-1; j++) 
            {
                contacts[j] = contacts[j+1];
            }

            strcpy(contacts[j].firstName, "");
            strcpy(contacts[j].lastName, "");
            strcpy(contacts[j].phoneNumber, "");
            strcpy(contacts[j].email, "");

            presentSize -= 1;
            ++cnt;
        }
    }
    if(cnt == 0) 
    {
        printf("\nNo Contact is deleted\n");
    }
    else 
    {
        printf("%d contact deleted\n", cnt);
    }
}


int retriveFromFile()
{
    FILE *fp;
    if((fp = fopen("PhoneBook_Manager.txt", "r")) == NULL) 
    {
        printf("\nError: Cannot load the Contact Manager file\n");
        return 5;
    }


    /* read the size of the phone book */
    if(fread(&presentSize, sizeof(presentSize), 1, fp) != 1) 
    {
        printf("\nError, Cannot read data\n");
        return 3;
    }

    /* read the actual phone book content */
    if(fread(contacts, sizeof(contacts), 1, fp) != 1) 
    {
        printf("\nError, Cannot read data\n");
        return 4;
    }
    fclose(fp);
    return 5;

}


int storeToFile()
{
    FILE *fp;
    if( (fp = fopen("PhoneBook_Manager.txt", "w")) == NULL ) 
    {
        printf("\nCannot create Contact Manager file\n");
        return 2;
    }

    /* Save the current size of the phonebook */
    if (fwrite(&presentSize, sizeof(presentSize), 1, fp) != 1 ) 
    {
        printf("\nCannot save the contact\n");
        return 3;
    }

    /* save the phonebook contents */
    if(fwrite(contacts, sizeof(contacts), 1, fp) != 1)
     {
        printf("\nCannot save the contact\n");
        return 4;
    }

    printf("\nPhoneBook Manager saved to file successfully! \n");
    fclose(fp);
    return 5;
}
