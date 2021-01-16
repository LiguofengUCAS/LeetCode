/* use stack */

bool isValid(char * s){
    int i = 0, j = 0;
    char stack[10000];
    char ch = s[j];

    while(ch != '\0')
    {
        if(ch == '{' || ch == '[' || ch == '(')
        {
            stack[i++] = ch;
        }
        else
        {
            if(j == 0 || i == 0)
                return false;
        
            if(ch == ')' && stack[i - 1] == '(' ||
               ch == ']' && stack[i - 1] == '[' ||
               ch == '}' && stack[i - 1] == '{' )
            {
                i--;
            }
            else
                return false;
        }
        ch = s[++j];
    }

    return i == 0 ? true : false;
}