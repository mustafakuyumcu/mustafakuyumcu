//mustafa kuyumcu
//2000002006

#include <stdio.h>
#include <time.h>

// Predefined macros
#define FILE_INFO printf("File : %s\n Date : %s\n Time : %s\n Line : %d\n", __FILE__, __DATE__, __TIME__, __LINE__)

// Simple macros
#define NEWLINE printf("\n")
#define ENTER_RADIUS_MSG printf("Enter radius: ")
#define ENTER_HEIGHT_MSG printf("Enter height: ")
#define VALUE_MUST_BE_GREATER_THAN_ZERO_MSG printf("The value must be greater than ZERO.\n")

// Parameterized macros for cylinder calculations
#define CYLINDER_VOLUME(radius, height) ((3.14159) * (radius) * (radius) * (height))
#define CYLINDER_SURFACE_AREA(radius, height) (2 * (3.14159) * (radius) * ((radius) + (height)))

int main() {
    FILE_INFO;

    int radius, height;

    do {
        ENTER_RADIUS_MSG;
        scanf("%d", &radius);

        if (radius <= 0) {
            VALUE_MUST_BE_GREATER_THAN_ZERO_MSG;
        }
    } while (radius <= 0);

    do {
        ENTER_HEIGHT_MSG;
        scanf("%d", &height);

        if (height <= 0) {
            VALUE_MUST_BE_GREATER_THAN_ZERO_MSG;
        }
    } while (height <= 0);

    NEWLINE;

    // Calculate and display the area and volume of the cylinder
    double area = CYLINDER_SURFACE_AREA(radius, height);
    double volume = CYLINDER_VOLUME(radius, height);

    printf("Area of the cylinder is %.2lf\n", area);
    printf("Volume of the cylinder is %.2lf\n", volume);

    return 0;
}
