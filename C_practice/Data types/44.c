union Frame {
    struct {
        unsigned short len  : 10;
        unsigned short type : 3;
        unsigned short crc  : 3;
    } info;

    struct {
        unsigned char low;
        unsigned char high;
    } bytes;
};