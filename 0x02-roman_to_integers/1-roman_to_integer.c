int getValue(char c);

int romanToInt(char *s)
{
    int total_value = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && getValue(s[i]) < getValue(s[i + 1]))
        {
            total_value -= getValue(s[i]);
        }
        else
        {
            total_value += getValue(s[i]);
        }
    }

    return total_value;
}

int getValue(char c)
{
    switch (c)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
