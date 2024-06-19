void replaceFun(char *string, char *substring, char *replacement)
{

    int substringLen = strlen(substring);
    int replacementLen = strlen(replacement);
    char *foundPosition;
    foundPosition = strstr(string, substring); // Find the position of first occurrence of SubString in String
    printf("foundposition is %d. string is %d. \n", foundPosition - string + 1);

    while ((foundPosition = strstr(string, substring)) != NULL)
    {
        // Calculate the length of the string after the found position
        int remainingLen = strlen(foundPosition + substringLen);
        printf("foundPosition is %d. remainingLen is %d. substringLen is %d. \n", foundPosition, remainingLen, substringLen);

        // Shift the remaining part of the string to make room for replacement
        memmove(foundPosition + replacementLen, foundPosition + substringLen, remainingLen + 1);

        // printf("str is %s", string);

        //  Copy the replacement into the found position
        strncpy(foundPosition, replacement, replacementLen);
    }
}