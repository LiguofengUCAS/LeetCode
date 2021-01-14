bool isPalindrome(int x){
    long reverse = 0;
    int y = x;

    if(x < 0)
        return false;
    else
    {
        while(x != 0)
        {
            reverse *= 10;
            reverse += x % 10;
            x = x / 10;
        }
        
        if(y == reverse)
            return true;
        else  
            return false;
    }
}