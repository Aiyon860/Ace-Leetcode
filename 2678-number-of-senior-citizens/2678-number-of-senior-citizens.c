bool textToNumber(char* age);

int countSeniors(char** details, int detailsSize){
    int count = 0;
    
    for (int i = 0; i < detailsSize; i++)
    {
        char* age = (char*) malloc(sizeof(char) * 3);
        *age = '\0';
        strncat(age, &details[i][11], 1);
        strncat(age, &details[i][12], 1);
        
        if (textToNumber(age))
        {
            count++;
        }
        
        free(age);
    }
    
    return count;
}

bool textToNumber(char* age)
{
    int digit;
    int result = 0;
    
    while ((*age >= '0' && *age <= '9'))
    {
        digit = *age - '0';
        result = (result << 1) + (result << 3) + digit;
        age++;
    }
    
    return result > 60;
}