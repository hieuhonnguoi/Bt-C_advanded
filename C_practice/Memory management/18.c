void myfunction() {
    char *q;
    for (int i = 0; i < 1000; i++) {
        q = (char *)malloc(8);
        if (q != NULL) {
            memcpy(q, "hello", 6);
        }
    }
}