#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rand_string(char *str, size_t size)
{

    // Define a character set containing all lowercase and uppercase letters - This array contains 52 characters total (26 lowercase + 26 uppercase)
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";


    // Calculate the size of our character set
    // sizeof(charset) gives us 53 (52 letters + 1 null terminator, We subtract 1 to exclude the null terminator, giving us 52 usable characters!

    const size_t charset_size = sizeof(charset) - 1; // 52 characters


    // checks if the string pointer is valid or not null
    if (str) {
        // loops through each position in the string we want to fill
        for (size_t i = 0; i < size; i++) {
            int key = rand() % charset_size;
            str[i] = charset[key];
        }
        str[size] = '\0'; // null terminate the string
    }
}

