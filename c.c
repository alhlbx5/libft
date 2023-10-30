# include <stdio.h>
# include <string.h>
# include <stdlib.h>
 
int main()
{
const char *string1 = "hello";
const char *string2 = "world";

// Calculate the total length needed for both strings, new lines, and null terminator
size_t len1 = strlen(string1);
size_t len2 = strlen(string2);
size_t total_len = len1 + len2 + 2; // 2 for the new lines and 1 for the null-terminator

// Allocate memory for both strings with new lines in one malloc call
char *combined_strings = (char *)malloc(total_len);

if (combined_strings != NULL) {
    // Copy the first string into the allocated memory
    strcpy(combined_strings, string1);
    
    // Add a new line
    strcat(combined_strings, "\n");

    // Append the second string
    strcat(combined_strings, string2);

    // Now, combined_strings contains "hello\nworld"
    printf("%s\n", combined_strings);

    // Don't forget to free the memory when you're done
    free(combined_strings);
} else {
    // Memory allocation failed
    printf("Memory allocation failed\n");
}
}