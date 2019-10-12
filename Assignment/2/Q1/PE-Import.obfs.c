
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
int ReplacementFor_isFileExists(const char*ReplacementFor_path){if(access(
ReplacementFor_path,F_OK)==-(0x2ad+454-0x472))return(0x44f+6418-0x1d61);return
(0xdf1+5985-0x2551);}void main(){const char*ReplacementFor_filepath=
"\x2e\x2f\x50\x45\x2d\x31\x2e\x74\x78\x74";const char*ReplacementFor_words=
"\x49\x20\x77\x61\x6e\x74\x20\x74\x6f\x20\x6c\x65\x61\x72\x6e\x20\x50\x45\x20\x66\x69\x6c\x65\x20\x66\x6f\x72\x6d\x61\x74\x21"
;FILE*ReplacementFor_file;char*ReplacementFor_buffer;if(
ReplacementFor_isFileExists(ReplacementFor_filepath)){ReplacementFor_file=fopen(
ReplacementFor_filepath,"\x72\x2b");fseek(ReplacementFor_file,
(0x1496+1805-0x1ba3),SEEK_END);long ReplacementFor_filesize=ftell(
ReplacementFor_file);ReplacementFor_buffer=(char*)malloc(sizeof(char)*
ReplacementFor_filesize);if(ReplacementFor_buffer==NULL){fputs(
"\x4d\x65\x6d\x6f\x72\x79\x20\x65\x72\x72\x6f\x72",stderr);exit(
(0x2274+1015-0x2669));}fseek(ReplacementFor_file,(0x141+1480-0x709),SEEK_SET);
size_t ReplacementFor_fread_result=fread(ReplacementFor_buffer,
(0xaf7+2833-0x1607),ReplacementFor_filesize,ReplacementFor_file);if(
ReplacementFor_fread_result!=ReplacementFor_filesize){printf(
"\x25\x64\x20\x2d\x20\x25\x64" "\n",ReplacementFor_fread_result,
ReplacementFor_filesize);fputs(
"\x52\x65\x61\x64\x69\x6e\x67\x20\x65\x72\x72\x6f\x72",stderr);exit(
(0xb1b+4100-0x1b1c));}if(strstr(ReplacementFor_buffer,ReplacementFor_words)==
NULL){fputs(ReplacementFor_words,ReplacementFor_file);}}else{ReplacementFor_file
=fopen(ReplacementFor_filepath,"\x61");fputs(ReplacementFor_words,
ReplacementFor_file);}fclose(ReplacementFor_file);free(ReplacementFor_buffer);
return;}
