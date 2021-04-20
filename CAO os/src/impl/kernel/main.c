#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_CYAN, PRINT_COLOR_BLACK);                                                                     
 
    print_str("\n,sSS~~\\ EEE~~~ EEE~~~  cCCc-_  ,sSS~~\\ \n");
    print_str("SSSs    EEE    EEE    cCCC  \\  SSSs    \n");
    print_str("`SSSs   EEEe__ EEEe__ CCC|     `SSSs   \n");
    print_str(" `SSSS, EEE    EEE    CCC|      `SSSS, \n");
    print_str("   sSSS EEE    EEE    cCCC  /     sSSS \n");
    print_str("\\__sSS' EEEe__ EEEe__  \"CC_c~  \\__SSs' \n");
                                     
}
