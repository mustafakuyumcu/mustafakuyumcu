//mustafa kuyumcu
//2000002006

#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTS 100

int main() {
    char elements_input[500];  // Assuming the input won't exceed 500 characters
    char *elements_list[MAX_ELEMENTS];
    int num_elements = 0;

    // Get a list of chemical elements from the user
    printf("Enter a list of chemical elements: ");
    fgets(elements_input, sizeof(elements_input), stdin);

    // Tokenize the input string into a list of elements
    char *token = strtok(elements_input, ",");
    while (token != NULL && num_elements < MAX_ELEMENTS) {
        elements_list[num_elements++] = strdup(token);
        token = strtok(NULL, ",");
    }

    // Display the total number of elements
    printf("**********************************************\n");
    printf("There are %d chemical elements in the list.\n", num_elements);

    // Display each element in a numbered list
    for (int i = 0; i < num_elements; i++) {
        printf("%d. chemical element is: %s\n", i + 1, elements_list[i]);
        free(elements_list[i]);  // Free allocated memory for each element
    }

    return 0;
}
