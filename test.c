#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    FILE *fp;
    fp = fopen("input.txt", "w");

    for(int i = 0; i<1025;i++) {
        fprintf(fp, "a");
    }

    fprintf(fp, "/bin/SH");

    fclose(fp);
}