#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int ASI_keyword_searcher(char*,char*);
int main()
{

    char szString[MAX_SIZE];
    char szBuffer[MAX_SIZE];
    char szWord[MAX_SIZE];
    char *buff;
    int iIndex;
    int iIndex2;
    int  ifound;
    int iStrLen;
    int iWordLen;
    int flag = 0;
    int iCount = 0;
    int iCount1 = 0;
    int fun_return = 0;
    strcpy(szString,"<= 65 THEN DOOR-1 == ON ELSE  RAMELSE  $ELSE *ELSE& ELSE8 DOOR-1 ELSERAM == OFF ENDIF END");
    strcpy(szWord,"ELSE");
    iStrLen  = strlen(szString);
    iWordLen = strlen(szWord);

    printf("The library string is %s\n\r",szString);
    printf("The string to search is %s\n\r",szWord);

    fun_return = ASI_keyword_searcher(szString,szWord);
/*    for(iIndex=0; iIndex < iStrLen;)
    {
        iIndex2 = 0;
        iCount = 0;
        while(szString[iIndex] == szWord[iIndex2])
        {
                iCount++;
                iIndex2++;
                iIndex++;
        }
        if(iCount == iWordLen)
        {
            iCount1++;
            iCount = 0;
        }
        else
        {
            iIndex++;
        }
    }*/

    printf("The word occures %d times in the string",fun_return);
    return 0;
}

int ASI_keyword_searcher(char *buffer_string, char *keyword_string)
{
    char sz_String[MAX_SIZE];
    char sz_Word[MAX_SIZE];
    int iStr_Len = 0;
    int iWord_Len = 0;
    int iIndex = 0;
    int iIndex2 = 0;
    int iCount = 0;
    int iCount1 = 0;
    strcpy(sz_String,buffer_string);
    strcpy(sz_Word," ");
    strcat(sz_Word,keyword_string);
    strcat(sz_Word," \0");
    iStr_Len  = strlen(sz_String);
    iWord_Len = strlen(sz_Word);
    for(iIndex=0; iIndex < iStr_Len;)
    {
        iIndex2 = 0;
        iCount = 0;
        while(sz_String[iIndex] == sz_Word[iIndex2])
        {
                iCount++;
                iIndex2++;
                iIndex++;
        }
        if(iCount == iWord_Len)
        {
            iCount1++;
            iCount = 0;
        }
        else
        {
            iIndex++;
        }
    }

    return iCount1;

}
