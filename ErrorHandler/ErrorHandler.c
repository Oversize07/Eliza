#include <stdio.h>





int error_debugger(int error){
   switch (error) {
      case 0x1:
         printf("Error 0x1: Failed opening answer file.\n");
         break;
      case 0x2:
         printf("Error 0x2: Failed opening quest file.\n");
         break;
   }
   return 1;

}
