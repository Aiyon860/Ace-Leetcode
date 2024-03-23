bool textToNumber(char* age);

int countSeniors(char** details, int detailsSize){
    int count = 0;
    char age[3];
    
    for (int i = 0; i < detailsSize; i++)
    {
        age[0] = details[i][11];
        age[1] = details[i][12];
        
        if (textToNumber(age))
        {
            count++;
        }
    }
    
    return count;
}

bool textToNumber(char* age)
{
    int result = 0;

    result = (result << 1) + (result << 3) + age[0] - '0';
    result = (result << 1) + (result << 3) + age[1] - '0';
    
    return result > 60;
}