union Data {
    int i;
    char c[4];
};

struct Test {
    char flag;
    union Data data;
};