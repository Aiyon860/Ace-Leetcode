bool textToNumber(char* age);

int countSeniors(char** details, int detailsSize){
    int count = 0;
    
    for (int i = 0; i < detailsSize; i++)
    {
        int age_one = details[i][11] - '0';
        int age_two = details[i][12] - '0';
        int age_number = age_one * 10 + age_two;
        
        if (age_number > 60)
        {
            count++;
        }
    }
    
    return count;
}