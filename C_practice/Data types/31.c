struct
{
    int a;
    char b;
} ab;

#pragma pack(push, 1)
struct
{
    char a;
    int b;
} ba;
#pragma pack(pop)