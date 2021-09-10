#include <cstring>
using namespace std;

int strConteins(char *a, char *str)
{   
    for(unsigned i = 0; i < strlen(str); i++)
    {
        if(str[i] == a[0])
        {
            int position = i;
            for(unsigned b = 0; b <= strlen(a); b++)
            {    
                if(b == strlen(a))
                {
                    return position;
                }
                if(a[b] == str[i + b])
                {
                    continue;
                }

                else
                {
                    break;
                }

            }
        }
    }
    return -1;
};
