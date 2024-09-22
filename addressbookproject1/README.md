---

# Address Book (Mini Project)

### Author: Aditya Shivaji Kumbhar

### Date: 22-09-2024

## Project Overview:
This is a basic **Address Book** program that allows users to store, search, edit, and delete contact information, using **file handling** concepts in C. The contact details stored include name, mobile number, email, and address.

---

## Features:
1. **Add Contacts**: Users can add new contacts.
2. **Search Contacts**: Find a contact by name, mobile number, or email.
3. **Edit Contacts**: Modify existing contact details.
4. **Delete Contacts**: Remove a contact from the address book.
5. **Print Contacts**: Display all saved contacts.

---

## Prerequisites:
- C compiler (such as GCC).
- Basic knowledge of C programming.
- CSV file reader for inspecting output files.

---.

### High-level overview of the code functionality:
1. **Main Menu**: 
   - A menu is displayed to the user, offering options such as:
     - Adding a new contact
     - Searching for a contact
     - Printing all contacts
     - Editing an existing contact
     - Deleting a contact

2. **Add Contacts**:
   - Allows the user to input new contact details (name, mobile number, email, and address).
   - **Validation**: 
     - The name must contain only alphabetic characters and spaces.
     - The mobile number must be exactly 10 digits and must not already exist in the database.
     - The email must follow the format "xyz@gmail.com" and must not already exist in the database.
     - The address is validated to contain only valid characters.
   - After input validation, the contact details are saved in the `temp.csv` file before copying them back into the main file (`data.csv`).

3. **Search Contacts**:
   - The user can search for a contact by name. If there are multiple contacts with the same name, the user is prompted to narrow down the search by providing either the mobile number or the email.
   - The program handles cases where no contacts are found or where multiple contacts have the same name.

### Improvements & Suggestions:
1. **Error Handling**:
   - The program should properly handle cases when the input file (`data.csv`) cannot be opened or accessed, especially for critical functions like searching and editing.
   - When the user chooses not to continue (`N/n`), the program will terminate successfully, but the condition `if (ch == 'N' || 'n')` is incorrectly written. It should be `if (ch == 'N' || ch == 'n')`.

2. **Code Readability**:
   - For better readability and maintainability, functions can be split further (e.g., separating input validation for mobile, email, etc., into their own functions).
   - In the `search()` function, instead of using `goto`, consider refactoring the code to use loops or functions to make the flow more structured.

3. **File Handling Logic**:
   - Instead of copying data back and forth between files (`data.csv` and `temp.csv`), it would be better to:
     - Open the file in append mode for adding new contacts.
     - Read and search within the file for search operations, without the need for temporary files unless editing or deleting.

4. **Functionality for Editing and Deleting Contacts**:
   - The code currently includes placeholders for `edit()` and `delete()` functions. You may want to implement these by leveraging the existing file operations.
