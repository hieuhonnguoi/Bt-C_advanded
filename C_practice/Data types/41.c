struct Packet {
    unsigned char header;
    union {
        struct {
            unsigned int id   : 4;
            unsigned int type : 3;
            unsigned int err  : 1;
        } bits;
        unsigned char raw;
    } data;
}