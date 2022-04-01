/**
 * @file phonebook1.h
 * @author Jayanth (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

/**
 * @brief structure to store data of a contact
 * 
 */
typedef struct 
{
    char firstName[50];
    char lastName[50];
    char phoneNumber[11];
    char email[50];
} Contact;

/**
 * @brief this function changes the string to lower case
 * 
 * @param string passed to covert to lowercase 
 * 
 */
void LowerString(char *str);

/* enumerator for different search types */

/**
 * @brief thsi enum is for serching through the database
 * 
 */
typedef enum { FIRST_NAME, LAST_NAME, MOBILE_NUMBER, EMAIL_ID, TEST } search_t;

/**
 * @brief this function is for adding new entries to the structure
 * 
 */
int addContact();

/**
 * @brief this function shows the specific record of the structure
 * 
 * @param index it is the index to identify the record
 */
int displayContact(int index);

/**
 * @brief this function displays all the records of the structure
 * 
 */
int displayAllContacts();

/**
 * @brief this function searches for a specific record in the structure
 * 
 * @param key user input to search the specific record
 * @param type search by name, last name or mobile number
 */
int searchContact(char *selection, search_t attribute);

/**
 * @brief this function is used to delete the record with phone number
 * 
 * @param phoneNumber 
 */
int removeContact(char *phoneNumber);

/**
 * @brief this function fetches the data from the file
 * 
 */
int retriveFromFile();

/**
 * @brief this function used by the sort_Contacts() to compare the strings
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int comparator(const void* p, const void* q);

/**
 * @brief this function will sort the contacts in alphabetical order of the first name
 * 
 */
void sort_Contacts();

/**
 * @brief this function saves the structure and its data to the file
 * 
 */
int storeToFile();

/**
 * @brief This function will sort all the contacts alphabetically
 * 
 */
void sortContacts();


#endif // PHONEBOOK_H
