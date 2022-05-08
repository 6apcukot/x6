#include <stdio.h>

int main(int n, char **argv)
{
    char * filename2 = "b.out";
    char cc[1];
    FILE *f1, *f2;
    char sap[12] = "Sapere aude!";
    int h = 1;
    if((f1= fopen(argv[1], "r"))==NULL){
        perror("Error occured while opening file");
        return 1;
    }
    if((f2= fopen(filename2, "w"))==NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    char ssd;
    int g = 0;
    ssd = getc(f1);
     while((ssd != EOF  h < 16000)){   
        h+=1;
        if(ssd == 'H'){
            ssd = getc(f1);
            if(ssd == 'e'){
                for(int e = 0; e<12; e++){
                    fprintf(f2,"%c",sap[e]);
                    printf("%c", sap[e]);
                }
                for(int j = 0; j<10; j++){
                    ssd = getc(f1);
                }
            }else{
                char u = 'H';
                fprintf(f2,"%c",u);
                fprintf(f2,"%c",ssd);
            }
        }else{
        fprintf(f2,"%c",ssd);    
        }
        ssd = getc(f1);
        printf("%c", ssd);
        
    }
    
    fclose(f1);
    fclose(f2);

    if((f1= fopen(argv[1], "w"))==NULL){
        perror("Error occured while opening file");
        return 1;
    }
    if((f2= fopen(filename2, "r"))==NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    
    h = 0;
    ssd = getc(f2);
    
    while((ssd != EOF  h < 16000)){
        h++;
        fprintf(f1,"%c",ssd); 
        ssd = getc(f2);
    }
    ssd = getc(f2);
    fprintf(f1,"%c",ssd);

    fclose(f1);
    fclose(f2);
    if(remove("b.out")) {
        printf("Error removing file");
        return 1;
    }
    return 0;
}
