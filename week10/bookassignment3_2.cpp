#include <cstdio>
#include <cstring>

#define LOWER_SIZE 6    
#define UPPER_SIZE 6    

char read_fro(char* array, int index, int size) {
    if (index >= 0 && index < size) {
        return array[index];  // Return the character if the index is valid
    } else {
        printf("Oops! The index %d is out of bounds. Cannot read.\n", index);
        return '\0';  // Return a null character if index is invalid
    }
}

// Function to write a character to either array with bounds checking
void write_to(char* array, int index, int size, char value) {
    if (index >= 0 && index < size) {
        array[index] = value;  // Safe to write since index is within bounds
        printf("Successfully wrote '%c' to index %d.\n", value, index);
    } else {
        printf("Oops! The index %d is out of bounds. Cannot write '%c'.\n", index, value);
    }
}

int main() {
    char lower[] = "abc?e";  // Initialize lower array with "abc?e"
    char upper[] = "ABC?E";  // Initialize upper array with "ABC?E"
    char* upper_ptr = upper;

    // Modifying lower array directly
    lower[3] = 'd';  // lower now contains "abcdE"
    printf("After changes, lower array is: %s\n", lower);

    // Let's update the upper array safely using our write_to function
    printf("\nUpdating the upper array...\n");
    write_to(upper, 3, UPPER_SIZE, 'D');  // upper now contains "ABCD?"
    printf("Upper array after modification: %s\n", upper);

    // Let's safely read from both arrays using our read_fro function
    printf("\nReading from arrays...\n");
    char letter_d = read_fro(lower, 3, LOWER_SIZE);  // letter_d equals 'd'
    char letter_D = read_fro(upper, 3, UPPER_SIZE);  // letter_D equals 'D'
    
    // Output the values read
printf("Read from lower array: '%c'\n", letter_d);
	printf("Read from upper array: '%c'\n", letter_D);

	return 0;
}
