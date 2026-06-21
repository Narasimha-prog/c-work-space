#include <stdio.h>
#include <stdint.h> // For uint8_t

int main() {
    // 1. The Variables (Smallest to Largest)
    uint8_t        bit8  = 255;                // 1 Byte
    short          bit16 = 32767;              // 2 Bytes
    int            bit32 = 2147483647;         // 4 Bytes
    long long      bit64 = 9223372036854775807LL; // 8 Bytes
    float          f32   = 3.14f;              // 4 Bytes
    double         f64   = 3.1415926535;       // 8 Bytes
    char           str[] = "Gemini";           // String (Pointer)

    printf("TYPE           | SIZE | FORMAT | VALUE\n");
    printf("---------------|------|--------|--------------------------\n");

    // %hhu = half-half-unsigned (Byte)
    printf("uint8_t (byte) | %zu    | %%hhu    | %hhu\n", sizeof(bit8), bit8);

    // %hd = half-decimal (Short)
    printf("short          | %zu    | %%hd     | %hd\n", sizeof(bit16), bit16);

    // %d = decimal (Int)
    printf("int            | %zu    | %%d      | %d\n", sizeof(bit32), bit32);

    // %lld = long-long-decimal
    printf("long long      | %zu    | %%lld    | %lld\n", sizeof(bit64), bit64);

    // %f = float, %.2f limits to 2 decimals
    printf("float          | %zu    | %%.2f    | %.2f\n", sizeof(f32), f32);

    // %lf = long-float (Double)
    printf("double         | %zu    | %%lf     | %lf\n", sizeof(f64), f64);

    // %s = string, %p = pointer address
    printf("string (addr)  | %zu    | %%p      | %p\n", sizeof(str), str);

    printf("--------------|------|--------|--------------------------\n");

    return 0;
}
