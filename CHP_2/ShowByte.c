#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_byte(byte_pointer start,size_t len){
    for (int i = 0; i < len;i++){
        printf("%.2x ", start[i]);
    }
    printf("\n");
    return;
} 
void show_byte_int(const int val){
    show_byte((byte_pointer)&val, sizeof(int));
    return;
}
void show_byte_double(const double val){
    show_byte((byte_pointer)&val, sizeof(double));
    return;
}
void show_byte_long(const long long val){
    show_byte((byte_pointer)&val, sizeof(long long));
    return;
}
void show_pointer(void* ptr){
    show_byte((byte_pointer)&ptr, sizeof(void *));
}
int main(){
    show_byte_int((int)0x1234);
    show_byte_long((long long)0x123456);
    show_byte_double((double)0x123456);
    int a = 23;
    show_pointer((void *)&a);
    const char *s = "abcdef";
    show_byte((byte_pointer)s, strlen(s));
    return 0;
}