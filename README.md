# myString

This was a project I developed for the first-year course "Ingeniería de Computadores II". 

It's a small and straightforward library implemented in the C programming language, designed to work with strings. To achieve this, it relies mainly on the use of pointers. The functions implemented in the library are:

- __*Int mi_strlen (char\* str):*__  Returns an integer with the length of str (number of characters until reaching the null terminator).
- __*char\* mi_strcpy (char\* s1, char\* s2):*__ Copies the characters from s2 to s1 and adds a null terminator at the end. Returns the address of s1.
- __*char\* mi_strcat (char\* s1, char\* s2):*__ Adds the characters of s2 to the end of s1, essentially concatenating s2 to s1. Returns the address of s1.
- __*char\* mi_strdup (char\* str):*__ Creates a duplicate of str using dynamic memory. The content of the duplicate will be identical to that of str. Returns the address of the duplicate.
- __*Int mi_strequals (char\* s1, char\* s2):*__ Compares the strings s1 and s2. If they are identical, the function returns 1. If they are different, the function returns 0.
