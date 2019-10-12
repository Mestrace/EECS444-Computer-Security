# EECS 444 Homework 2 Q1: Mimic You, Malware!

## File Descriptions

### Reports

- `q1report.pdf`: The report for Homework 2 Q1
- `q1report.tex`: The Latex source of the report
- `sc_import_table_pe*.png`: Screenshots of the Import Table of 3 PE Programs from Exeinfo PE

### Programs

- `PE-Import.c`: The source code of the PE Import application
- `PE-Import.obfs.c`: Obfuscated source code of `PE-Import.c` by Stunnix `cxx-obfus`
- `PE-Import.exe`: Executable file from gcc compilation of `PE-Import.c`
- `PE-Import-upx.exe`: UPX packed `PE-Import.exe`
- `PE-Import-upx-unpacked.exe`: UPX unpacked `PE-Import-upx.exe`
- `PE-Import.obfs.exe`: Executable file from gcc compilation of `PE-Import.obfs.c`

### Tools

- `tools\Exeinfope.zip`: Exeinfo PE to display the information of PE programs
- `tools\Stunnix-CXX-Obfus-4.7-Linux-trial.zip`: Stunnix `cxx-obfus` used to obfuscate c programs
- `tools\tigress-Linux-x86_64-2.2.zip`: `tigress` used to obfuscate c programs into self-interpreting programs
- `tools\upx-3.95-win64.zip`: UPX application to pack an executable
