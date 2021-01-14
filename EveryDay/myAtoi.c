int myAtoi(char * s){
    int num = 0;
    int sign;

    if(*s >= 'A' && *s <= 'Z' || *s >= 'a' && *s <= 'z')
        return 0;

    while(*s == ' ')
        s++;
    
    sign = 1;

    if(*s == '+' || *s == '-')
    {
        sign = *s == '+' ? 1 : -1;
        s++;
    }

    if(*s < '0' || *s > '9')
        return 0;

    for(; *s >= '0' && *s <= '9'; s++)
    {
        //garantee -2^31 <= num <= 2^31 - 1
        if(num > 214748364) 
            return sign == 1 ? 2147483647 : (-1) * 2147483648;  
        num *= 10;

        if(num >= 2147483640 && *s - '0' > 7)  
            return sign == 1 ? 2147483647 : (-1) * 2147483648;   
        num += *s - '0';
    }

    return sign * num;
}