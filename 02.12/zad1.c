#include <stdio.h>
#include <limits.h>

#define PRINT_INT_TYPE_INFO(type, format, unsigned_format) \
    printf(" %-12s  %-7s  %-6zu  %-21d  %-21d  %-14s  %-21u \n", \
           #type, format, sizeof(type), \
           INT_MAX, INT_MIN, unsigned_format, UINT_MAX)

int main() {
    printf(" Type          Format   Bytes   Max Signed Value       Min Signed Value       Unsigned Format   Max Unsigned Value    \n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    PRINT_INT_TYPE_INFO(int, "%d", "%u");
    PRINT_INT_TYPE_INFO(short, "%hd", "%hu");
    PRINT_INT_TYPE_INFO(long, "%ld", "%lu");
    PRINT_INT_TYPE_INFO(long long, "%lld", "%llu");
    return 0;
}
