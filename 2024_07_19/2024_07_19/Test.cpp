#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	/*int ch;
	ch=getchar();
	putchar(ch);*/


 /*   FILE* pFile;
    int c;
    int n = 0;
    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL) perror("Error opening file");
    else
    {
        do {
            c = getc(pFile);
            if (c == '$') n++;
        } while (c != EOF);
        fclose(pFile);
        printf("File contains %d$.\n", n);
    }*/

    //// 以 w 只写方式 打开 二进制文件
    //FILE* file = fopen("myfile.txt", "w");
    //if (file == NULL) {
    //    printf("file open file!\n");

    //}
    //else {
    //    printf("I am begin write !\n");

    //    char c = 'A';
    //    int i = 0;

    //    for (i = 0; i < 26; i++) {
    //        putc(c, file);
    //        c++;
    //    }

    //    // 如果打开成功 , 则需要关闭文件
    //    fclose(file);
    //}
    //printf("write sucess!");

    //以 r 只读方式 打开 二进制文件
    //FILE *file = fopen("myfile.txt", "r");
    //if(file == NULL)
    //{
    //    perror("file  open fail !\n");
    //}else
    //{
    //    printf("I am begin read !\n");

    //    
    //    char c = '0';
    //    // 读取到文件末尾 EOF 退出循环
    //    while (c != EOF)
    //    {
    //        printf("%c", c);
    //        c = getc(file);
    //       
    //    }

    //    // 如果打开成功 , 则需要关闭文件
    //    fclose(file);
    //}
    //printf("\n");
    //printf("read success!");








    //char c;
    ////cin  >> c;
    //cin >> noskipws >> c;
    //cout << c;


   /* char c;
    cin.get(c);
    cout << c;*/

    //char str[20];
    ////cin.get(str, sizeof(str));
    //cin.get(str, 5);
    //cout << str<<endl;
    //cout << sizeof(str) << endl;
   

 /*   char str[20];
    cin.getline(str, sizeof(str));
    cin.getline(str, 5);
    cin.getline(str, 5,'\n');
    cout << str;*/





     fputs("hello world", stdout);    // 不会立即输出
     fputs("hello world\n", stdout);  // 立即输出
     fputs("hello world", stderr);  // 立即输出


	return 0;
}


