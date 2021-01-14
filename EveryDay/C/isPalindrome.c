bool isPalindrome(int x){
    long reverse = 0;
    int y = x;

    while(x != 0)
    {
        reverse *= 10;
        reverse += x % 10;
        x = x / 10;
    }
    
    return reverse == y && y >= 0;
}

//This is the most elegent solution I have ever seen!