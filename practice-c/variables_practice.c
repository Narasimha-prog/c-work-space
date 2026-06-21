#include <stdio.h>

// 1. GLOBAL VARIABLE
// Lives in the "Data Segment". 
// Accessible by every function in this file.
// Similar to a 'public static' field in a Java class.
int global_count = 100;

// 2. CONSTANT
// Similar to 'final' in Java.
// The compiler will throw an error if you try to change this.
const float PI = 3.14159;

void demonstrate_static() {
    // 3. LOCAL STATIC VARIABLE
    // This is the "Magic" variable. 
    // It is initialized ONLY ONCE when the program starts.
    // It "remembers" its value between function calls.
    static int call_count = 0; 
    
    // 4. LOCAL VARIABLE (Automatic)
    // Similar to a local variable inside a Java method.
    // It is created on the STACK and destroyed when the function ends.
    int local_val = 0;

    call_count++;
    local_val++;

    printf("Static (remembers): %d | Local (reset): %d\n", call_count, local_val);
}

int main() {
    printf("--- Variable Practice ---\n");
    printf("Global variable: %d\n", global_count);
    printf("Constant PI: %.5f\n\n", PI);

    printf("Calling function 3 times:\n");
    demonstrate_static();
    demonstrate_static();
    demonstrate_static();

    // 5. MEMORY ADDRESSES
    // This is something you don't usually do in Java.
    // Let's see where these variables actually live in RAM.
    printf("\n--- Memory Locations ---\n");
    printf("Address of global_count: %p\n", (void*)&global_count);
    printf("Address of local_val (in main): %p\n", (void*)&global_count);

    return 0;
}
