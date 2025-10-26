union Config {
    struct {
        unsigned int enable : 1;
        unsigned int speed  : 2;
        unsigned int mode   : 3;
    } normal;

    struct {
        unsigned int secure : 1;
        unsigned int key    : 7;
    } security;
};