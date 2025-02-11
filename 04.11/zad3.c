#define DEBUG_VAR(var) \
    printf("Variable %s = %d in file %s at line %d\n", #var, var, __FILE__, __LINE__)

int main() {
    int test = 42;
    DEBUG_VAR(test);
    return 0;
}
