#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
unsigned int binary_to_uint(const char *d);
void print_binary(unsigned long int z);
int get_bit(unsigned long int z, unsigned int index);
int set_bit(unsigned long int *z, unsigned int index);
int clear_bit(unsigned long int *z, unsigned int index);
unsigned int flip_bits(unsigned long int z, unsigned long int m);
int get_endianness(void);
#endif
