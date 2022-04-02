# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | If phonebook manager file is not opening|  NA |Error: Cannot load the Phonebook Manager file|Error: Cannot load the Phonebook Manager file|Requirement based |
|  H_02       | Diaplay Main menu | NA |Options of operations for user to choose from| Options of operations for user to choose from |Requirement based    |
|  H_03       |Exit the Program when user is done with operations| 10 | Exited |Exited |Requirement based    |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Add contact when file is opened and sufficient memory available| Contact Details by user|Contact is sucessfully added|Contact is sucessfully added|Requirement based |
|  L_02       | Display all contacts when file is not empty| 2 | all contacts data |  all contacts data |  Requirement Based |
|  L_03       |Display contacts when file is empty  | 2 or 3 or 4 or 5 or 6| Phonebook Manager is currently empty | Phonebook Manager is currently empty  | Requirement Based   |
|  L_04       | Search Contact if file is not empty  | 3 or 4 or 5 or 6| Contact not found in the phonebook manager | Contact not found in the phonebook manager  | Requirement Based   |
|  L_05       | Search specific Contact if file is not empty  | 3 or 4 or 5 or 6| details of searched contact | details of searched contact  | Requirement Based   |
|  L_06       | Remove specific contact  | 7 | contact deleted | contact deleted  | Requirement Based   |
|  L_07       | Save database  | 9 | Phonebook Manager saved to file successfully! | Phonebook Manager saved to file successfully!  | Requirement Based   | 
