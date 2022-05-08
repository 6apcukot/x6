// Online C compiler to run C program online
#include <stdio.h>
#include <sys/mman.h>
void bank(){
    printf(" __________  \n");
    printf("| 0xffffff |\n");
    printf("| 0x003c9f |\n");
    printf("| 0xda2726 |\n");
    printf(" ‾‾‾‾‾‾‾‾‾‾\n");
    return ;
}
void h4ck3d(){
    printf("h4ck3d\n");
    return ;
}
int hack(){
    mprotect(&bank - (unsigned long long)&bank%0x1000, 0x1000, PROT_READ | PROT_WRITE | PROT_EXEC);
    *((char*)&bank) = 0xeb;
    *((char*)(&bank + 1)) = &h4ck3d - &bank - 2;
    return 0;
}
int main() {
    bank(); //func1
    h4ck3d(); //func2
    hack(); // hacked func
    bank(); 
    return 0;
}
