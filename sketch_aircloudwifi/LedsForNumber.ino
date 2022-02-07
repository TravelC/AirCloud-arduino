
// right to left
int *ledsForDigit(int digit, int index)
{
    if (digit == 0)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 130, 148, 147, 146, 128, 110, 92};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 126, 144, 143, 142, 124, 106, 88};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 122, 140, 139, 138, 120, 102, 84};
        return result;
    }
    else if (digit == 1)
    {
        if (index == 0)
        {
            static int result[] = {76, 94, 112, 130, 148};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {72, 90, 108, 126, 144};
            return result;
        }

        static int result[] = {68, 86, 104, 122, 140};
        return result;
    }
    else if (digit == 2)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 111, 110, 128, 146, 147, 148};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 107, 106, 124, 142, 143, 144};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 103, 102, 120, 138, 139, 140};
        return result;
    }
    else if (digit == 3)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 111, 110, 130, 148, 147, 146};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 107, 106, 126, 144, 143, 142};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 103, 102, 122, 140, 139, 138};
        return result;
    }
    else if (digit == 4)
    {
        if (index == 0)
        {
            static int result[] = {74, 92, 110, 111, 76, 94, 112, 130, 148};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 88, 106, 107, 72, 90, 108, 126, 144};
            return result;
        }
        static int result[] = {66, 84, 102, 103, 68, 86, 104, 122, 140};
        return result;
    }
    else if (digit == 5)
    {
        if (index == 0)
        {
            static int result[] = {76, 75, 74, 92, 110, 111, 112, 130, 148, 147, 146};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {72, 71, 70, 88, 106, 107, 108, 126, 144, 143, 142};
            return result;
        }
        static int result[] = {68, 67, 66, 84, 102, 103, 104, 122, 140, 139, 138};
        return result;
    }
    else if (digit == 6)
    {
        if (index == 0)
        {
            static int result[] = {76, 75, 74, 92, 110, 128, 146, 147, 148, 130, 112, 111};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {72, 71, 70, 88, 106, 124, 142, 143, 144, 126, 108, 107};
            return result;
        }
        static int result[] = {68, 67, 66, 84, 102, 120, 138, 139, 140, 122, 104, 103};
        return result;
    }
    else if (digit == 7)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 130, 148};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 126, 144};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 122, 140};
        return result;
    }
    else if (digit == 8)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 130, 148, 147, 146, 128, 110, 92, 111};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 126, 144, 143, 142, 124, 106, 88, 107};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 122, 140, 139, 138, 120, 102, 84, 103};
        return result;
    }
    else if (digit == 9)
    {
        if (index == 0)
        {
            static int result[] = {74, 75, 76, 94, 112, 130, 148, 147, 146, 110, 92, 111};
            return result;
        }
        else if (index == 1)
        {
            static int result[] = {70, 71, 72, 90, 108, 126, 144, 143, 142, 106, 88, 107};
            return result;
        }
        static int result[] = {66, 67, 68, 86, 104, 122, 140, 139, 138, 102, 84, 103};
        return result;
    }
    static int result[] = {};
    return result;
}

int *ledsForNumber(int number)
{
    int temp = number;
    int firstDigit = temp % 10;
    temp /= 10;
    int secondDigit = temp % 10;
    temp /= 10;
    int thirdDigit = temp % 10;

    int *firsts = ledsForDigit(firstDigit, 0);
    int *seconds = ledsForDigit(secondDigit, 1);
    int *thirds = ledsForDigit(thirdDigit, 2);
    static int result[60] = {};
    int i = 0;
    for (int j = 0; j < 20; j++)
    {
        if (firsts[j] > 0)
        {
            result[i] = firsts[j];
            i++;
        }
    }
    for (int j = 0; j < 20; j++)
    {
        if (seconds[j] > 0)
        {
            result[i] = seconds[j];
            i++;
        }
    }
    for (int j = 0; j < 20; j++)
    {
        if (thirds[j] > 0)
        {
            result[i] = thirds[j];
            i++;
        }
    }

    return result;
}