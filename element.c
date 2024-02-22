//mustafa kuyumcu
//2000002006

#include <stdio.h>

// Structure to represent one element from the periodic table
typedef struct {
    char name[20];
    char symbol[2];
    int atomic_number;
    int mass_number;
    int ionic_weight;
    int neutron_number;
    int electron_number;
} element_t;

// Function to calculate electron number and neutron number
void calculateNumbers(element_t *element) {
    element->electron_number = element->ionic_weight + element->atomic_number;
    element->neutron_number = element->mass_number - element->atomic_number;
}

// Function to print chemical elements information
void print(element_t chm_element[], int num_elements) {
    printf("*************************************\n");
    printf("******Chemical Element List**********\n");
    printf("*************************************\n");
    printf("Element name  Symbol  Atomic number  Mass number  Ionic weight  Neutron  Electron\n");

    for (int i = 0; i < num_elements; i++) {
        printf("%-13s %-7s %-14d %-12d %-13d %-8d %-8d\n", chm_element[i].name, chm_element[i].symbol,
               chm_element[i].atomic_number, chm_element[i].mass_number, chm_element[i].ionic_weight,
               chm_element[i].neutron_number, chm_element[i].electron_number);
    }
}

int main() {
    element_t chm_element[118];  // Array of structures holding 118 elements
    int num_elements = 0;
    char choice;

    do {
        printf("Enter element name: ");
        scanf("%s", chm_element[num_elements].name);

        printf("Enter element symbol: ");
        scanf("%s", chm_element[num_elements].symbol);

        printf("Enter the atomic number: ");
        scanf("%d", &chm_element[num_elements].atomic_number);

        printf("Enter the mass number: ");
        scanf("%d", &chm_element[num_elements].mass_number);

        printf("Enter the ionic weight: ");
        scanf("%d", &chm_element[num_elements].ionic_weight);

        // Calculate electron number and neutron number
        calculateNumbers(&chm_element[num_elements]);

        num_elements++;

        printf("Do you want to continue? (Y/N) ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    // Print chemical elements information
    print(chm_element, num_elements);

    return 0;
}
