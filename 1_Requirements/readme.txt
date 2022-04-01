# Requirements

 ## Introduction

The project is titled as **PhoneBook Manager** and developed using C language. It is used to add, view, search, sort, delete and save contacts to file for future retrieval. This can be used to perform CRUD operations like store contacts with first name, last name, phone number & email and these details are entered by the user. The features of this phonebook manager include searching a contact  by first name,last name, phone number and email id. User has an option to delete a contact by phone number.

# Research

A phonebook manager is a software program that enables users to easily store and find contact information, such as names, addresses,emails and phone numbers. They are contact-centric databases that provide a fully integrated approach to tracking all information and communication activities linked to contacts. Simple ones for personal use are included in most smartphones.Contact lists have been available for a long time. The original contact management system (CMS) was Exsell for DOS by Excalibur Sources, released in 1984. This kind of application is used by almost everyone who has the access to an electronic device.

### Advantages

 - Improved data management
 - Easy and faster access 
 - Better, longer-lasting customer relationships
 - Increased productivity
 - No hassle of physical maintenance of diaries
 - Backups available in case of unexpected activities
 
## Cost and Features
 - Complexity 
 - Memory management
 - Storage
 - 

##  Defining our System

![System Definition](https://github.com/jayanthbonagiri/Stepin-PhoneBook_Manager/blob/main/1_Requirements/Defining_the_system.png)

 Phonebook Manager have features like:
 -  Add a new contact. 
 - Delete an existing contact.
 -  Search for existing contact.
 -  Save contact to file.
 - Read record from file.
 - Display contacts.

## SWOT Analysis
![SWOT](https://github.com/jayanthbonagiri/Stepin-PhoneBook_Manager/blob/main/1_Requirements/SWOT.png)


# 4 W's and 1 H

## Who
Anyone with an electronic device with a display and has a requirement of a phonebook manager.

## What
A phonebook manager with features like add, delete, search, display and store data to a file.

## When

It can be used when there is no access to physical notebook and has lot of data to store.

## Where

It can be used in all sectors irrespective of their field of work. 

## How

This application was developed in C language to avoid hassle of maintaining bulky diaries. 


# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR01 |Main Menu  | Implemented |
| HR02 | Data Storing | Implemented |
| HR03 | Data Retrieval |  Implemented |
| HR04 | Graphical User Interface | Future |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR01 |New contact shall be added by providing all the needed information and stored into structure.  | HR01| Implemented |
| LR02 | Reading contact data is be possible in 5 ways, first being by searching by first name, last name, phone number email id and by printing all the contacts available | HR01| Implemented |
 LR03 | All the data should be stored into a file when user wants to do it. | HR02| Implemented |
| LR04 | If user searches for an invalid key "Contact not found" message should be displayed | HR03| Implemented |
| LR05 |User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file  | HR02| Implemented |
| LR06 |If opening of the file fails, then the system should display "Error Cannot load the database file" and should not end the program execution | HR03| Implemented |
| LR07 |A clean graphical user interface with all required buttons for ease of use  | HR04| Implemented |
