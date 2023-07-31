#include <main.h>
/**
Calculate the length of the input strings
The value of i is the length of the prefix substring
Compare characters of the prefix and input string until a mismatch or the end of the prefix is reached
*/
size_t prefix_length(const char *str, const char *prefix) {
size_t str_len = 0;
size_t prefix_len = 0;
while (str[str_len] != '\0') {
str_len++;
}
while (prefix[prefix_len] != '\0') {
prefix_len++;
}
size_t i = 0;
while (i < str_len && i < prefix_len && str[i] == prefix[i]) 
{
i++;
}
return i; 
}
