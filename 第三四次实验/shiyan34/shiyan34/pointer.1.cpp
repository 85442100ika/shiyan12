#include <iostream>

using namespace std;

int indexOf(char* s1, char* s2)
{
    char* p1 = s2;
    char* p2 = s1;
    int len1 = strlen(p1);
    int len2 = strlen(p2);
    if (len2 > len1)
        return -1;
    for (int i = 0; i < len1; i++)
    {
        if (len1 - i < len2)
            return -1;
        if (p1[i] == p2[0])
        {
            bool eq = true;
            for (int j = 1; j < len2; j++)
            {
                if (p1[i + j] != p2[j])
                {
                    eq = false;
                    break;
                }
            }
            if (eq)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    return 0;
}
