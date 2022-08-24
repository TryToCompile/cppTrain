#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <windows.h>
#include <tchar.h>
#include <winbase.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;




void main(int argc, char* argv[], char* envp[]) {
    ifstream file("D:\\folder1\\first.txt");
    string str;
    while (getline(file, str)) {
        if (str == "second.") return;
        cout << str.substr(0,7);
        cout << endl;
    }

 /*   FILE* fp;
    char str[128];
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    while (!feof(fp)) {
        if (fgets(str, 126, fp))
            printf("%s", str);
    }*/
    // if upper === true
    TCHAR file1[] = _T("D:\\folder1\\first.txt"), file2[] = _T("D:\\folder2\\folder2.2\\first.txt");
    if (MoveFile(file2, file1)) {
        _tprintf(_T("ok\n"));
    }
    else {
        _tprintf(_T("error move\n"));
    }
    //remove("first.txt");
}
