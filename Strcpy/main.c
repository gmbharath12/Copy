//
//  main.c
//  Strcpy
//
//  Created by Bharath G M on 6/19/14.
//  Copyright (c) 2014 Bharath G M. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char* stringCopy(char destination[10], const char *source)
{
    int i = 0;
    while (*source)
    {
        destination[i++] = *source++;
    }
    
    return destination;
}

int main(int argc, const char * argv[])
{
    const char *src = "TestStringCopy";
    unsigned int length = (unsigned int)strlen(src);
    printf("Length of source = %d\n",length);
    char dst[length];
    char *result = stringCopy(dst,src);
    printf("result = %s\n",result);
    return 0;
    
}

