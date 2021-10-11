#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{
    char c[1000];
    FILE *fptr;
 
    if ((fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program2.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }
 
    // reads text until newline 
    fscanf(fptr,"%[^.]", c);
 
    printf("Data from the file:\n%s\n", c);
    fclose(fptr);
    
    return 0;
}