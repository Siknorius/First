#include <stdio.h>

int main(void)
{
    float download_speed_MBits, filesize_MBytes, MBytes_to_Mbits, download_time;    

    printf("Enter your internet connection speed in Mbits (Mbs):\n", download_speed_MBits);
    scanf("%f", &download_speed_MBits);
    printf("Enter file size in Mbytes (MB):\n");
    scanf("%f", &filesize_MBytes);

    MBytes_to_Mbits = filesize_MBytes * 8;
    download_time = MBytes_to_Mbits / download_speed_MBits;
    
    printf("Your speed is %.2f Mbs, file size is:%.2f MB. \
    It would be downloaded in %.2f seconds",

    download_speed_MBits, filesize_MBytes, download_time);

    getchar();getchar();
    
    return 0;
}