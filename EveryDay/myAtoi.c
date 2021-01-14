#define MAX 2147483647      //max int, 2^31 - 1
#define MIN -2147483648     //min int, -2^31

int myAtoi(char * s){
    long num = 0;
    int sign;

    if(*s >= 'A' && *s <= 'Z' || *s >= 'a' && *s <= 'z')
        return 0;

    while(*s == ' ')
        s++;
    
    sign = 1;
    if(*s == '+' || *s == '-')
    {
        sign = *s == '-' ? -1 : 1;
        s++;
    }

    if(*s < '0' || *s > '9')
        return 0;

    for(; *s >= '0' && *s <= '9'; s++)
    {
        num = num * 10 + *s - '0';
        
        if((int)num != num)
            return sign == 1 ? MAX : MIN;   
    }

    return sign * num;
}