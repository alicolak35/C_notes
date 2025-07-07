/*char *strrchr(const char *str, int ch); => string.h
finds the last occurrence of 'ch' in given string


#define FILE_NAME(str, idx)   (idx = strrchr(str,'/'))   
#define FILE_NAME2  (strrchr(__FILE__,'/') ? strrchr(__FILE__,'/') + 1 : __FILE__)//ikinci block neden NULL degil?
int main(void){
    char file_path[] = __FILE__;
    char *idx ;//= strrchr(file_name,'/');
    FILE_NAME(file_path, idx);
    
    printf("%s", FILE_NAME2);
    
    // printf("Line %d - File: %s", __LINE__, __FILE);
}
*/