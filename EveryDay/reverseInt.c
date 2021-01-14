int reverse(int x){
    int tmp = 0;
    int y = x;

    while(x != 0)
    {   
        if(tmp > 214748364 || tmp < -214748364)  //to garantee -2^31 <= tmp <= 2^31 - 1
            return 0;  

        tmp *= 10;
        tmp += x % 10;
        x /= 10;
    }

    return tmp;
}