int lengthOfLastWord(char * s){

    int len = strlen(s);
    int length = 0;

    /* Handling trailing whitespaces */
    while (len >  0 && s[len - 1] == ' ')
        len--;

    /* Find the last word */
    while (len > 0 && s[len - 1] != ' ')
    {
        len--;
        length++;
    }

    return length;
}
