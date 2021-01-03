//
//  main.c
//  Test
//
//  Created by Gaulthier Gain on 25/11/2019.
//  Copyright © 2019 Gaulthier Gain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define RUN_TEST(a) { \
    extern int test_ ##a (void); \
    int e = test_ ##a (); \
    if (e) printf("%s test failed, %d error(s)\n", #a, e); \
    else   printf("%s test passed\n", #a); \
    err += e; \
}

int main(int argc, char** argv) {
    int err=0;
    int runAll=0;

    if (argc == 1){
        runAll = 1;
    }

    if (runAll || strcmp(argv[1], "string") == 0){
        RUN_TEST(string);
    }
    if (runAll || strcmp(argv[1], "fdopen") == 0){
        RUN_TEST(fdopen);
    }
    if (runAll || strcmp(argv[1], "search_hsearch") == 0){
        RUN_TEST(search_hsearch);
    }
    if (runAll || strcmp(argv[1], "fnmatch") == 0){
        RUN_TEST(fnmatch);
    }
    if (runAll || strcmp(argv[1], "fscanf") == 0){
        RUN_TEST(fscanf);
    }
    if (runAll || strcmp(argv[1], "popen") == 0){
        RUN_TEST(popen);
    }
    if (runAll || strcmp(argv[1], "socket") == 0){
        RUN_TEST(socket);
    }
    if (runAll || strcmp(argv[1], "spawn") == 0){
        RUN_TEST(spawn);
    }
    if (runAll || strcmp(argv[1], "qsort") == 0){
        RUN_TEST(qsort);
    }
    if (runAll || strcmp(argv[1], "time") == 0){
        RUN_TEST(time);
    }
    if (runAll || strcmp(argv[1], "sscanf") == 0){
        RUN_TEST(sscanf);
    }
    if (runAll || strcmp(argv[1], "snprintf") == 0){
        RUN_TEST(snprintf);
    }
    if (runAll || strcmp(argv[1], "swprintf") == 0){
        RUN_TEST(swprintf);
    }
    if (runAll || strcmp(argv[1], "stat") == 0){
        RUN_TEST(stat);
    }
    if (runAll || strcmp(argv[1], "string") == 0){
        RUN_TEST(string);
    }
    if (runAll || strcmp(argv[1], "strtod") == 0){
        RUN_TEST(strtod);
    }
    if (runAll || strcmp(argv[1], "strtol") == 0){
        RUN_TEST(strtol);
    }
    if (runAll || strcmp(argv[1], "ungetc") == 0){
        RUN_TEST(ungetc);
    }
    if (runAll || strcmp(argv[1], "wcstol") == 0){
        RUN_TEST(wcstol);
    }
    if (runAll || strcmp(argv[1], "fwscanf") == 0){
        RUN_TEST(fwscanf);
    }
    if (runAll || strcmp(argv[1], "basename") == 0){
        RUN_TEST(basename);
    }
    if (runAll || strcmp(argv[1], "dirname") == 0){
        RUN_TEST(dirname);
    }
    if (runAll || strcmp(argv[1], "memstream") == 0){
        RUN_TEST(memstream);
    }
    if (runAll || strcmp(argv[1], "mbc") == 0){
        RUN_TEST(mbc);
    }
    if (runAll || strcmp(argv[1], "setjmp") == 0){
        RUN_TEST(setjmp);
    }
    if (runAll || strcmp(argv[1], "sem") == 0){
        RUN_TEST(sem);
    }
    if (runAll || strcmp(argv[1], "pthread") == 0){
        RUN_TEST(pthread);
    }
    if (runAll || strcmp(argv[1], "random") == 0){
        RUN_TEST(random);
    }
    if (runAll || strcmp(argv[1], "crypt") == 0){
        RUN_TEST(crypt);
    }
    /*if (runAll || strcmp(argv[1], "tgmath") == 0){
        RUN_TEST(tgmath);
    }*/
    if (runAll || strcmp(argv[1], "utime") == 0){
        RUN_TEST(utime);
    }
    if (runAll || strcmp(argv[1], "wcsstr") == 0){
        RUN_TEST(wcsstr);
    }


    // env is last because it will break subsequent tests
    if (runAll || strcmp(argv[1], "env") == 0){
        RUN_TEST(env);
    }
    printf("\ntotal errors: %d\n", err);
    return !!err;
}
