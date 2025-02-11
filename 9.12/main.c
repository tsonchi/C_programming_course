#include <stdio.h>
#include <limits.h>
#include <stdint.h>

#define PRINT_TYPE_INFO(type, format, unsigned_format) \
    printf("%-10s  %-6s  %-3zu  %-21d  %-21d  %-6s       %-21u\n", \
           #type, format, sizeof(type), \
           INT##type##_MAX, INT##type##_MIN, unsigned_format, UINT##type##_MAX)

int main() {
    printf("Type        Format  Bytes  Max Signed Value      Min Signed Value      Unsigned Format  Max Unsigned Value\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    PRINT_TYPE_INFO(8, "%d", "%u");
    PRINT_TYPE_INFO(16, "%d", "%u");
    PRINT_TYPE_INFO(32, "%d", "%u");
    PRINT_TYPE_INFO(64, "%ld", "%lu");
    return 0;
}

