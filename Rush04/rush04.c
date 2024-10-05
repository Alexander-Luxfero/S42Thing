#include <unistd.h>

void rush(int width, int height) {
    if (height == 1 && width == 1) {
        write(1, "A\n", 3);
        return;
    }
    //width
    int j;
    //height
    int i = 0;
    while ( i < height ) {
        j = 0;
        while ( j < width ) {
            if (i == 0 && j == 0 ){
                write(1, "A", 1);
            } else if (j == 0 && i == height-1 || (i == 0 && j == width-1)) {
                write(1, "C", 1);
            } else if ((width != 1 && height != 1) &&  ( i == height-1 && j == width-1)) {
                write(1, "A", 1);
            }  else if (i > 0 && i < height-1 && (j == 0 || j == width-1) || j > 0 && j < width-1 && (i == 0 || i == height-1) ) {
                write(1, "B", 1);
            } else {
                write(1, " ", 1);
            }
            j++;
        }
        write(1, "\n", 1);
        i++;   
    }
}

int main(void)
{
    write(1, "01\n", 3);
    rush(5,3);

    write(1, "02\n", 3);
    rush(1,5);

    write(1, "03\n", 3);
    rush(5,1);

    write(1, "04\n", 3);
    rush(4,4);

    write(1, "05\n", 3);
    rush(7,7);

    write(1, "06\n", 3);
    rush(1,8);

    write(1, "07\n", 3);
    rush(7,2);

    return (0);
}