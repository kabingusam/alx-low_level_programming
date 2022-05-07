#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
* Program that displays the information contained in the ELF header at the start of an ELF file.
* Usage: elf_header elf_filename
* information to be displayed Magic
* Class
* Data
* Version
* OS/ABI
* ABI Version
* Type
* Entry point address
*/
typedef struct {
  unsigned char e_ident[16]; /*  ELF  identification  */
  Elf64_Half e_class;        /*  class  */
  Elf64_Half e_data;         /*  data */
  Elf64_Word e_version;      /*  Object  file  version  */
  Elf64_Addr e_osabi;        /*  the os abi  */
  Elf64_Off e_abi;           /*  the ABI  */
  Elf64_Off e_type;          /*  the type  */
  Elf64_Word e_address;      /*  the address  */
} Elf64_Ehdr