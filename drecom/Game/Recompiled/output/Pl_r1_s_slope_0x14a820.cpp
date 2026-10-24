#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Pl_r1_s_slope
// Address: 0x14a820 - 0x14af50
void Pl_r1_s_slope_0x14a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_s_slope_0x14a820");
#endif

    switch (ctx->pc) {
        case 0x14a820u: goto label_14a820;
        case 0x14a824u: goto label_14a824;
        case 0x14a828u: goto label_14a828;
        case 0x14a82cu: goto label_14a82c;
        case 0x14a830u: goto label_14a830;
        case 0x14a834u: goto label_14a834;
        case 0x14a838u: goto label_14a838;
        case 0x14a83cu: goto label_14a83c;
        case 0x14a840u: goto label_14a840;
        case 0x14a844u: goto label_14a844;
        case 0x14a848u: goto label_14a848;
        case 0x14a84cu: goto label_14a84c;
        case 0x14a850u: goto label_14a850;
        case 0x14a854u: goto label_14a854;
        case 0x14a858u: goto label_14a858;
        case 0x14a85cu: goto label_14a85c;
        case 0x14a860u: goto label_14a860;
        case 0x14a864u: goto label_14a864;
        case 0x14a868u: goto label_14a868;
        case 0x14a86cu: goto label_14a86c;
        case 0x14a870u: goto label_14a870;
        case 0x14a874u: goto label_14a874;
        case 0x14a878u: goto label_14a878;
        case 0x14a87cu: goto label_14a87c;
        case 0x14a880u: goto label_14a880;
        case 0x14a884u: goto label_14a884;
        case 0x14a888u: goto label_14a888;
        case 0x14a88cu: goto label_14a88c;
        case 0x14a890u: goto label_14a890;
        case 0x14a894u: goto label_14a894;
        case 0x14a898u: goto label_14a898;
        case 0x14a89cu: goto label_14a89c;
        case 0x14a8a0u: goto label_14a8a0;
        case 0x14a8a4u: goto label_14a8a4;
        case 0x14a8a8u: goto label_14a8a8;
        case 0x14a8acu: goto label_14a8ac;
        case 0x14a8b0u: goto label_14a8b0;
        case 0x14a8b4u: goto label_14a8b4;
        case 0x14a8b8u: goto label_14a8b8;
        case 0x14a8bcu: goto label_14a8bc;
        case 0x14a8c0u: goto label_14a8c0;
        case 0x14a8c4u: goto label_14a8c4;
        case 0x14a8c8u: goto label_14a8c8;
        case 0x14a8ccu: goto label_14a8cc;
        case 0x14a8d0u: goto label_14a8d0;
        case 0x14a8d4u: goto label_14a8d4;
        case 0x14a8d8u: goto label_14a8d8;
        case 0x14a8dcu: goto label_14a8dc;
        case 0x14a8e0u: goto label_14a8e0;
        case 0x14a8e4u: goto label_14a8e4;
        case 0x14a8e8u: goto label_14a8e8;
        case 0x14a8ecu: goto label_14a8ec;
        case 0x14a8f0u: goto label_14a8f0;
        case 0x14a8f4u: goto label_14a8f4;
        case 0x14a8f8u: goto label_14a8f8;
        case 0x14a8fcu: goto label_14a8fc;
        case 0x14a900u: goto label_14a900;
        case 0x14a904u: goto label_14a904;
        case 0x14a908u: goto label_14a908;
        case 0x14a90cu: goto label_14a90c;
        case 0x14a910u: goto label_14a910;
        case 0x14a914u: goto label_14a914;
        case 0x14a918u: goto label_14a918;
        case 0x14a91cu: goto label_14a91c;
        case 0x14a920u: goto label_14a920;
        case 0x14a924u: goto label_14a924;
        case 0x14a928u: goto label_14a928;
        case 0x14a92cu: goto label_14a92c;
        case 0x14a930u: goto label_14a930;
        case 0x14a934u: goto label_14a934;
        case 0x14a938u: goto label_14a938;
        case 0x14a93cu: goto label_14a93c;
        case 0x14a940u: goto label_14a940;
        case 0x14a944u: goto label_14a944;
        case 0x14a948u: goto label_14a948;
        case 0x14a94cu: goto label_14a94c;
        case 0x14a950u: goto label_14a950;
        case 0x14a954u: goto label_14a954;
        case 0x14a958u: goto label_14a958;
        case 0x14a95cu: goto label_14a95c;
        case 0x14a960u: goto label_14a960;
        case 0x14a964u: goto label_14a964;
        case 0x14a968u: goto label_14a968;
        case 0x14a96cu: goto label_14a96c;
        case 0x14a970u: goto label_14a970;
        case 0x14a974u: goto label_14a974;
        case 0x14a978u: goto label_14a978;
        case 0x14a97cu: goto label_14a97c;
        case 0x14a980u: goto label_14a980;
        case 0x14a984u: goto label_14a984;
        case 0x14a988u: goto label_14a988;
        case 0x14a98cu: goto label_14a98c;
        case 0x14a990u: goto label_14a990;
        case 0x14a994u: goto label_14a994;
        case 0x14a998u: goto label_14a998;
        case 0x14a99cu: goto label_14a99c;
        case 0x14a9a0u: goto label_14a9a0;
        case 0x14a9a4u: goto label_14a9a4;
        case 0x14a9a8u: goto label_14a9a8;
        case 0x14a9acu: goto label_14a9ac;
        case 0x14a9b0u: goto label_14a9b0;
        case 0x14a9b4u: goto label_14a9b4;
        case 0x14a9b8u: goto label_14a9b8;
        case 0x14a9bcu: goto label_14a9bc;
        case 0x14a9c0u: goto label_14a9c0;
        case 0x14a9c4u: goto label_14a9c4;
        case 0x14a9c8u: goto label_14a9c8;
        case 0x14a9ccu: goto label_14a9cc;
        case 0x14a9d0u: goto label_14a9d0;
        case 0x14a9d4u: goto label_14a9d4;
        case 0x14a9d8u: goto label_14a9d8;
        case 0x14a9dcu: goto label_14a9dc;
        case 0x14a9e0u: goto label_14a9e0;
        case 0x14a9e4u: goto label_14a9e4;
        case 0x14a9e8u: goto label_14a9e8;
        case 0x14a9ecu: goto label_14a9ec;
        case 0x14a9f0u: goto label_14a9f0;
        case 0x14a9f4u: goto label_14a9f4;
        case 0x14a9f8u: goto label_14a9f8;
        case 0x14a9fcu: goto label_14a9fc;
        case 0x14aa00u: goto label_14aa00;
        case 0x14aa04u: goto label_14aa04;
        case 0x14aa08u: goto label_14aa08;
        case 0x14aa0cu: goto label_14aa0c;
        case 0x14aa10u: goto label_14aa10;
        case 0x14aa14u: goto label_14aa14;
        case 0x14aa18u: goto label_14aa18;
        case 0x14aa1cu: goto label_14aa1c;
        case 0x14aa20u: goto label_14aa20;
        case 0x14aa24u: goto label_14aa24;
        case 0x14aa28u: goto label_14aa28;
        case 0x14aa2cu: goto label_14aa2c;
        case 0x14aa30u: goto label_14aa30;
        case 0x14aa34u: goto label_14aa34;
        case 0x14aa38u: goto label_14aa38;
        case 0x14aa3cu: goto label_14aa3c;
        case 0x14aa40u: goto label_14aa40;
        case 0x14aa44u: goto label_14aa44;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa4cu: goto label_14aa4c;
        case 0x14aa50u: goto label_14aa50;
        case 0x14aa54u: goto label_14aa54;
        case 0x14aa58u: goto label_14aa58;
        case 0x14aa5cu: goto label_14aa5c;
        case 0x14aa60u: goto label_14aa60;
        case 0x14aa64u: goto label_14aa64;
        case 0x14aa68u: goto label_14aa68;
        case 0x14aa6cu: goto label_14aa6c;
        case 0x14aa70u: goto label_14aa70;
        case 0x14aa74u: goto label_14aa74;
        case 0x14aa78u: goto label_14aa78;
        case 0x14aa7cu: goto label_14aa7c;
        case 0x14aa80u: goto label_14aa80;
        case 0x14aa84u: goto label_14aa84;
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa8cu: goto label_14aa8c;
        case 0x14aa90u: goto label_14aa90;
        case 0x14aa94u: goto label_14aa94;
        case 0x14aa98u: goto label_14aa98;
        case 0x14aa9cu: goto label_14aa9c;
        case 0x14aaa0u: goto label_14aaa0;
        case 0x14aaa4u: goto label_14aaa4;
        case 0x14aaa8u: goto label_14aaa8;
        case 0x14aaacu: goto label_14aaac;
        case 0x14aab0u: goto label_14aab0;
        case 0x14aab4u: goto label_14aab4;
        case 0x14aab8u: goto label_14aab8;
        case 0x14aabcu: goto label_14aabc;
        case 0x14aac0u: goto label_14aac0;
        case 0x14aac4u: goto label_14aac4;
        case 0x14aac8u: goto label_14aac8;
        case 0x14aaccu: goto label_14aacc;
        case 0x14aad0u: goto label_14aad0;
        case 0x14aad4u: goto label_14aad4;
        case 0x14aad8u: goto label_14aad8;
        case 0x14aadcu: goto label_14aadc;
        case 0x14aae0u: goto label_14aae0;
        case 0x14aae4u: goto label_14aae4;
        case 0x14aae8u: goto label_14aae8;
        case 0x14aaecu: goto label_14aaec;
        case 0x14aaf0u: goto label_14aaf0;
        case 0x14aaf4u: goto label_14aaf4;
        case 0x14aaf8u: goto label_14aaf8;
        case 0x14aafcu: goto label_14aafc;
        case 0x14ab00u: goto label_14ab00;
        case 0x14ab04u: goto label_14ab04;
        case 0x14ab08u: goto label_14ab08;
        case 0x14ab0cu: goto label_14ab0c;
        case 0x14ab10u: goto label_14ab10;
        case 0x14ab14u: goto label_14ab14;
        case 0x14ab18u: goto label_14ab18;
        case 0x14ab1cu: goto label_14ab1c;
        case 0x14ab20u: goto label_14ab20;
        case 0x14ab24u: goto label_14ab24;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab2cu: goto label_14ab2c;
        case 0x14ab30u: goto label_14ab30;
        case 0x14ab34u: goto label_14ab34;
        case 0x14ab38u: goto label_14ab38;
        case 0x14ab3cu: goto label_14ab3c;
        case 0x14ab40u: goto label_14ab40;
        case 0x14ab44u: goto label_14ab44;
        case 0x14ab48u: goto label_14ab48;
        case 0x14ab4cu: goto label_14ab4c;
        case 0x14ab50u: goto label_14ab50;
        case 0x14ab54u: goto label_14ab54;
        case 0x14ab58u: goto label_14ab58;
        case 0x14ab5cu: goto label_14ab5c;
        case 0x14ab60u: goto label_14ab60;
        case 0x14ab64u: goto label_14ab64;
        case 0x14ab68u: goto label_14ab68;
        case 0x14ab6cu: goto label_14ab6c;
        case 0x14ab70u: goto label_14ab70;
        case 0x14ab74u: goto label_14ab74;
        case 0x14ab78u: goto label_14ab78;
        case 0x14ab7cu: goto label_14ab7c;
        case 0x14ab80u: goto label_14ab80;
        case 0x14ab84u: goto label_14ab84;
        case 0x14ab88u: goto label_14ab88;
        case 0x14ab8cu: goto label_14ab8c;
        case 0x14ab90u: goto label_14ab90;
        case 0x14ab94u: goto label_14ab94;
        case 0x14ab98u: goto label_14ab98;
        case 0x14ab9cu: goto label_14ab9c;
        case 0x14aba0u: goto label_14aba0;
        case 0x14aba4u: goto label_14aba4;
        case 0x14aba8u: goto label_14aba8;
        case 0x14abacu: goto label_14abac;
        case 0x14abb0u: goto label_14abb0;
        case 0x14abb4u: goto label_14abb4;
        case 0x14abb8u: goto label_14abb8;
        case 0x14abbcu: goto label_14abbc;
        case 0x14abc0u: goto label_14abc0;
        case 0x14abc4u: goto label_14abc4;
        case 0x14abc8u: goto label_14abc8;
        case 0x14abccu: goto label_14abcc;
        case 0x14abd0u: goto label_14abd0;
        case 0x14abd4u: goto label_14abd4;
        case 0x14abd8u: goto label_14abd8;
        case 0x14abdcu: goto label_14abdc;
        case 0x14abe0u: goto label_14abe0;
        case 0x14abe4u: goto label_14abe4;
        case 0x14abe8u: goto label_14abe8;
        case 0x14abecu: goto label_14abec;
        case 0x14abf0u: goto label_14abf0;
        case 0x14abf4u: goto label_14abf4;
        case 0x14abf8u: goto label_14abf8;
        case 0x14abfcu: goto label_14abfc;
        case 0x14ac00u: goto label_14ac00;
        case 0x14ac04u: goto label_14ac04;
        case 0x14ac08u: goto label_14ac08;
        case 0x14ac0cu: goto label_14ac0c;
        case 0x14ac10u: goto label_14ac10;
        case 0x14ac14u: goto label_14ac14;
        case 0x14ac18u: goto label_14ac18;
        case 0x14ac1cu: goto label_14ac1c;
        case 0x14ac20u: goto label_14ac20;
        case 0x14ac24u: goto label_14ac24;
        case 0x14ac28u: goto label_14ac28;
        case 0x14ac2cu: goto label_14ac2c;
        case 0x14ac30u: goto label_14ac30;
        case 0x14ac34u: goto label_14ac34;
        case 0x14ac38u: goto label_14ac38;
        case 0x14ac3cu: goto label_14ac3c;
        case 0x14ac40u: goto label_14ac40;
        case 0x14ac44u: goto label_14ac44;
        case 0x14ac48u: goto label_14ac48;
        case 0x14ac4cu: goto label_14ac4c;
        case 0x14ac50u: goto label_14ac50;
        case 0x14ac54u: goto label_14ac54;
        case 0x14ac58u: goto label_14ac58;
        case 0x14ac5cu: goto label_14ac5c;
        case 0x14ac60u: goto label_14ac60;
        case 0x14ac64u: goto label_14ac64;
        case 0x14ac68u: goto label_14ac68;
        case 0x14ac6cu: goto label_14ac6c;
        case 0x14ac70u: goto label_14ac70;
        case 0x14ac74u: goto label_14ac74;
        case 0x14ac78u: goto label_14ac78;
        case 0x14ac7cu: goto label_14ac7c;
        case 0x14ac80u: goto label_14ac80;
        case 0x14ac84u: goto label_14ac84;
        case 0x14ac88u: goto label_14ac88;
        case 0x14ac8cu: goto label_14ac8c;
        case 0x14ac90u: goto label_14ac90;
        case 0x14ac94u: goto label_14ac94;
        case 0x14ac98u: goto label_14ac98;
        case 0x14ac9cu: goto label_14ac9c;
        case 0x14aca0u: goto label_14aca0;
        case 0x14aca4u: goto label_14aca4;
        case 0x14aca8u: goto label_14aca8;
        case 0x14acacu: goto label_14acac;
        case 0x14acb0u: goto label_14acb0;
        case 0x14acb4u: goto label_14acb4;
        case 0x14acb8u: goto label_14acb8;
        case 0x14acbcu: goto label_14acbc;
        case 0x14acc0u: goto label_14acc0;
        case 0x14acc4u: goto label_14acc4;
        case 0x14acc8u: goto label_14acc8;
        case 0x14acccu: goto label_14accc;
        case 0x14acd0u: goto label_14acd0;
        case 0x14acd4u: goto label_14acd4;
        case 0x14acd8u: goto label_14acd8;
        case 0x14acdcu: goto label_14acdc;
        case 0x14ace0u: goto label_14ace0;
        case 0x14ace4u: goto label_14ace4;
        case 0x14ace8u: goto label_14ace8;
        case 0x14acecu: goto label_14acec;
        case 0x14acf0u: goto label_14acf0;
        case 0x14acf4u: goto label_14acf4;
        case 0x14acf8u: goto label_14acf8;
        case 0x14acfcu: goto label_14acfc;
        case 0x14ad00u: goto label_14ad00;
        case 0x14ad04u: goto label_14ad04;
        case 0x14ad08u: goto label_14ad08;
        case 0x14ad0cu: goto label_14ad0c;
        case 0x14ad10u: goto label_14ad10;
        case 0x14ad14u: goto label_14ad14;
        case 0x14ad18u: goto label_14ad18;
        case 0x14ad1cu: goto label_14ad1c;
        case 0x14ad20u: goto label_14ad20;
        case 0x14ad24u: goto label_14ad24;
        case 0x14ad28u: goto label_14ad28;
        case 0x14ad2cu: goto label_14ad2c;
        case 0x14ad30u: goto label_14ad30;
        case 0x14ad34u: goto label_14ad34;
        case 0x14ad38u: goto label_14ad38;
        case 0x14ad3cu: goto label_14ad3c;
        case 0x14ad40u: goto label_14ad40;
        case 0x14ad44u: goto label_14ad44;
        case 0x14ad48u: goto label_14ad48;
        case 0x14ad4cu: goto label_14ad4c;
        case 0x14ad50u: goto label_14ad50;
        case 0x14ad54u: goto label_14ad54;
        case 0x14ad58u: goto label_14ad58;
        case 0x14ad5cu: goto label_14ad5c;
        case 0x14ad60u: goto label_14ad60;
        case 0x14ad64u: goto label_14ad64;
        case 0x14ad68u: goto label_14ad68;
        case 0x14ad6cu: goto label_14ad6c;
        case 0x14ad70u: goto label_14ad70;
        case 0x14ad74u: goto label_14ad74;
        case 0x14ad78u: goto label_14ad78;
        case 0x14ad7cu: goto label_14ad7c;
        case 0x14ad80u: goto label_14ad80;
        case 0x14ad84u: goto label_14ad84;
        case 0x14ad88u: goto label_14ad88;
        case 0x14ad8cu: goto label_14ad8c;
        case 0x14ad90u: goto label_14ad90;
        case 0x14ad94u: goto label_14ad94;
        case 0x14ad98u: goto label_14ad98;
        case 0x14ad9cu: goto label_14ad9c;
        case 0x14ada0u: goto label_14ada0;
        case 0x14ada4u: goto label_14ada4;
        case 0x14ada8u: goto label_14ada8;
        case 0x14adacu: goto label_14adac;
        case 0x14adb0u: goto label_14adb0;
        case 0x14adb4u: goto label_14adb4;
        case 0x14adb8u: goto label_14adb8;
        case 0x14adbcu: goto label_14adbc;
        case 0x14adc0u: goto label_14adc0;
        case 0x14adc4u: goto label_14adc4;
        case 0x14adc8u: goto label_14adc8;
        case 0x14adccu: goto label_14adcc;
        case 0x14add0u: goto label_14add0;
        case 0x14add4u: goto label_14add4;
        case 0x14add8u: goto label_14add8;
        case 0x14addcu: goto label_14addc;
        case 0x14ade0u: goto label_14ade0;
        case 0x14ade4u: goto label_14ade4;
        case 0x14ade8u: goto label_14ade8;
        case 0x14adecu: goto label_14adec;
        case 0x14adf0u: goto label_14adf0;
        case 0x14adf4u: goto label_14adf4;
        case 0x14adf8u: goto label_14adf8;
        case 0x14adfcu: goto label_14adfc;
        case 0x14ae00u: goto label_14ae00;
        case 0x14ae04u: goto label_14ae04;
        case 0x14ae08u: goto label_14ae08;
        case 0x14ae0cu: goto label_14ae0c;
        case 0x14ae10u: goto label_14ae10;
        case 0x14ae14u: goto label_14ae14;
        case 0x14ae18u: goto label_14ae18;
        case 0x14ae1cu: goto label_14ae1c;
        case 0x14ae20u: goto label_14ae20;
        case 0x14ae24u: goto label_14ae24;
        case 0x14ae28u: goto label_14ae28;
        case 0x14ae2cu: goto label_14ae2c;
        case 0x14ae30u: goto label_14ae30;
        case 0x14ae34u: goto label_14ae34;
        case 0x14ae38u: goto label_14ae38;
        case 0x14ae3cu: goto label_14ae3c;
        case 0x14ae40u: goto label_14ae40;
        case 0x14ae44u: goto label_14ae44;
        case 0x14ae48u: goto label_14ae48;
        case 0x14ae4cu: goto label_14ae4c;
        case 0x14ae50u: goto label_14ae50;
        case 0x14ae54u: goto label_14ae54;
        case 0x14ae58u: goto label_14ae58;
        case 0x14ae5cu: goto label_14ae5c;
        case 0x14ae60u: goto label_14ae60;
        case 0x14ae64u: goto label_14ae64;
        case 0x14ae68u: goto label_14ae68;
        case 0x14ae6cu: goto label_14ae6c;
        case 0x14ae70u: goto label_14ae70;
        case 0x14ae74u: goto label_14ae74;
        case 0x14ae78u: goto label_14ae78;
        case 0x14ae7cu: goto label_14ae7c;
        case 0x14ae80u: goto label_14ae80;
        case 0x14ae84u: goto label_14ae84;
        case 0x14ae88u: goto label_14ae88;
        case 0x14ae8cu: goto label_14ae8c;
        case 0x14ae90u: goto label_14ae90;
        case 0x14ae94u: goto label_14ae94;
        case 0x14ae98u: goto label_14ae98;
        case 0x14ae9cu: goto label_14ae9c;
        case 0x14aea0u: goto label_14aea0;
        case 0x14aea4u: goto label_14aea4;
        case 0x14aea8u: goto label_14aea8;
        case 0x14aeacu: goto label_14aeac;
        case 0x14aeb0u: goto label_14aeb0;
        case 0x14aeb4u: goto label_14aeb4;
        case 0x14aeb8u: goto label_14aeb8;
        case 0x14aebcu: goto label_14aebc;
        case 0x14aec0u: goto label_14aec0;
        case 0x14aec4u: goto label_14aec4;
        case 0x14aec8u: goto label_14aec8;
        case 0x14aeccu: goto label_14aecc;
        case 0x14aed0u: goto label_14aed0;
        case 0x14aed4u: goto label_14aed4;
        case 0x14aed8u: goto label_14aed8;
        case 0x14aedcu: goto label_14aedc;
        case 0x14aee0u: goto label_14aee0;
        case 0x14aee4u: goto label_14aee4;
        case 0x14aee8u: goto label_14aee8;
        case 0x14aeecu: goto label_14aeec;
        case 0x14aef0u: goto label_14aef0;
        case 0x14aef4u: goto label_14aef4;
        case 0x14aef8u: goto label_14aef8;
        case 0x14aefcu: goto label_14aefc;
        case 0x14af00u: goto label_14af00;
        case 0x14af04u: goto label_14af04;
        case 0x14af08u: goto label_14af08;
        case 0x14af0cu: goto label_14af0c;
        case 0x14af10u: goto label_14af10;
        case 0x14af14u: goto label_14af14;
        case 0x14af18u: goto label_14af18;
        case 0x14af1cu: goto label_14af1c;
        case 0x14af20u: goto label_14af20;
        case 0x14af24u: goto label_14af24;
        case 0x14af28u: goto label_14af28;
        case 0x14af2cu: goto label_14af2c;
        case 0x14af30u: goto label_14af30;
        case 0x14af34u: goto label_14af34;
        case 0x14af38u: goto label_14af38;
        case 0x14af3cu: goto label_14af3c;
        case 0x14af40u: goto label_14af40;
        case 0x14af44u: goto label_14af44;
        case 0x14af48u: goto label_14af48;
        case 0x14af4cu: goto label_14af4c;
        default: break;
    }

    ctx->pc = 0x14a820u;

label_14a820:
    // 0x14a820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14a824:
    // 0x14a824: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14a828:
    // 0x14a828: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14a82c:
    // 0x14a82c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a830:
    // 0x14a830: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14a830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a834:
    // 0x14a834: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14a834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14a838:
    // 0x14a838: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x14a838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14a83c:
    // 0x14a83c: 0x102001c0  beqz        $at, . + 4 + (0x1C0 << 2)
label_14a840:
    if (ctx->pc == 0x14A840u) {
        ctx->pc = 0x14A844u;
        goto label_14a844;
    }
    ctx->pc = 0x14A83Cu;
    {
        const bool branch_taken_0x14a83c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a83c) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14A844u;
label_14a844:
    // 0x14a844: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14a844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14a848:
    // 0x14a848: 0x2464e860  addiu       $a0, $v1, -0x17A0
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
label_14a84c:
    // 0x14a84c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14a850:
    // 0x14a850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14a854:
    // 0x14a854: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14a858:
    // 0x14a858: 0x600008  jr          $v1
label_14a85c:
    if (ctx->pc == 0x14A85Cu) {
        ctx->pc = 0x14A860u;
        goto label_14a860;
    }
    ctx->pc = 0x14A858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A858u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14A860u;
label_14a860:
    // 0x14a860: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14a864:
    // 0x14a864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a868:
    // 0x14a868: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14a868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_14a86c:
    // 0x14a86c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a870:
    // 0x14a870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a874:
    // 0x14a874: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a878:
    // 0x14a878: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x14a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
label_14a87c:
    // 0x14a87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a880:
    // 0x14a880: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a884:
    // 0x14a884: 0xc0965d0  jal         func_259740
label_14a888:
    if (ctx->pc == 0x14A888u) {
        ctx->pc = 0x14A88Cu;
        goto label_14a88c;
    }
    ctx->pc = 0x14A884u;
    SET_GPR_U32(ctx, 31, 0x14A88Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A884u, 0x14A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A88Cu;
label_14a88c:
    // 0x14a88c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_14a890:
    // 0x14a890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a894:
    // 0x14a894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a898:
    // 0x14a898: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14a898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14a89c:
    // 0x14a89c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a8a0:
    // 0x14a8a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8a4:
    // 0x14a8a4: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14a8a8:
    // 0x14a8a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14a8ac:
    // 0x14a8ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8b0:
    // 0x14a8b0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14a8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14a8b4:
    // 0x14a8b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8b8:
    // 0x14a8b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8bc:
    // 0x14a8bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a8c0:
    // 0x14a8c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14a8c4:
    // 0x14a8c4: 0xc058f20  jal         func_163C80
label_14a8c8:
    if (ctx->pc == 0x14A8C8u) {
        ctx->pc = 0x14A8CCu;
        goto label_14a8cc;
    }
    ctx->pc = 0x14A8C4u;
    SET_GPR_U32(ctx, 31, 0x14A8CCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14A8C4u, 0x14A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8CCu;
label_14a8cc:
    // 0x14a8cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8d0:
    // 0x14a8d0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14a8d4:
    // 0x14a8d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a8d8:
    // 0x14a8d8: 0x0  nop
    ctx->pc = 0x14a8d8u;
    // NOP
label_14a8dc:
    // 0x14a8dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14a8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14a8e0:
    // 0x14a8e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14a8e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14a8e4:
    // 0x14a8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8e8:
    // 0x14a8e8: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14a8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
label_14a8ec:
    // 0x14a8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a8f0:
    // 0x14a8f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14a8f4:
    // 0x14a8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a8f8:
    // 0x14a8f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14a8fc:
    // 0x14a8fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a900:
    // 0x14a900: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x14a900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
label_14a904:
    // 0x14a904: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14a908:
    // 0x14a908: 0x28420034  slti        $v0, $v0, 0x34
    ctx->pc = 0x14a908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
label_14a90c:
    // 0x14a90c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_14a910:
    if (ctx->pc == 0x14A910u) {
        ctx->pc = 0x14A914u;
        goto label_14a914;
    }
    ctx->pc = 0x14A90Cu;
    {
        const bool branch_taken_0x14a90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a90c) {
            ctx->pc = 0x14A938u;
            goto label_14a938;
        }
    }
    ctx->pc = 0x14A914u;
label_14a914:
    // 0x14a914: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a918:
    // 0x14a918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a91c:
    // 0x14a91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14a920:
    // 0x14a920: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_14a924:
    // 0x14a924: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14a924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
label_14a928:
    // 0x14a928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a92c:
    // 0x14a92c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14a930:
    // 0x14a930: 0xc0965d0  jal         func_259740
label_14a934:
    if (ctx->pc == 0x14A934u) {
        ctx->pc = 0x14A938u;
        goto label_14a938;
    }
    ctx->pc = 0x14A930u;
    SET_GPR_U32(ctx, 31, 0x14A938u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A930u, 0x14A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A938u;
label_14a938:
    // 0x14a938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a93c:
    // 0x14a93c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14a940:
    // 0x14a940: 0xc096b40  jal         func_25AD00
label_14a944:
    if (ctx->pc == 0x14A944u) {
        ctx->pc = 0x14A948u;
        goto label_14a948;
    }
    ctx->pc = 0x14A940u;
    SET_GPR_U32(ctx, 31, 0x14A948u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A940u, 0x14A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A948u;
label_14a948:
    // 0x14a948: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a94c:
    // 0x14a94c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a94cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14a950:
    // 0x14a950: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_14a954:
    if (ctx->pc == 0x14A954u) {
        ctx->pc = 0x14A958u;
        goto label_14a958;
    }
    ctx->pc = 0x14A950u;
    {
        const bool branch_taken_0x14a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a950) {
            ctx->pc = 0x14A994u;
            goto label_14a994;
        }
    }
    ctx->pc = 0x14A958u;
label_14a958:
    // 0x14a958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a95c:
    // 0x14a95c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14a960:
    // 0x14a960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14a964:
    // 0x14a964: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_14a968:
    // 0x14a968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a96c:
    // 0x14a96c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a970:
    // 0x14a970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a974:
    // 0x14a974: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a978:
    // 0x14a978: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14a978u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14a97c:
    // 0x14a97c: 0xc058fec  jal         func_163FB0
label_14a980:
    if (ctx->pc == 0x14A980u) {
        ctx->pc = 0x14A984u;
        goto label_14a984;
    }
    ctx->pc = 0x14A97Cu;
    SET_GPR_U32(ctx, 31, 0x14A984u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14A97Cu, 0x14A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A984u;
label_14a984:
    // 0x14a984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a988:
    // 0x14a988: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14a98c:
    // 0x14a98c: 0x10000005  b           . + 4 + (0x5 << 2)
label_14a990:
    if (ctx->pc == 0x14A990u) {
        ctx->pc = 0x14A994u;
        goto label_14a994;
    }
    ctx->pc = 0x14A98Cu;
    {
        const bool branch_taken_0x14a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a98c) {
            ctx->pc = 0x14A9A4u;
            goto label_14a9a4;
        }
    }
    ctx->pc = 0x14A994u;
label_14a994:
    // 0x14a994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a998:
    // 0x14a998: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x14a998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a99c:
    // 0x14a99c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9a0:
    // 0x14a9a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14a9a4:
    // 0x14a9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a9a8:
    // 0x14a9a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9ac:
    // 0x14a9ac: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_14a9b0:
    // 0x14a9b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9b4:
    // 0x14a9b4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a9b8:
    // 0x14a9b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9bc:
    // 0x14a9bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a9c0:
    // 0x14a9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14a9c4:
    // 0x14a9c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14a9c8:
    // 0x14a9c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9cc:
    // 0x14a9cc: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14a9d0:
    // 0x14a9d0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_14a9d4:
    // 0x14a9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a9d8:
    // 0x14a9d8: 0x0  nop
    ctx->pc = 0x14a9d8u;
    // NOP
label_14a9dc:
    // 0x14a9dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14a9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14a9e0:
    // 0x14a9e0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14a9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_14a9e4:
    // 0x14a9e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9e8:
    // 0x14a9e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14a9ec:
    // 0x14a9ec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14a9f0:
    // 0x14a9f0: 0xc05cd58  jal         func_173560
label_14a9f4:
    if (ctx->pc == 0x14A9F4u) {
        ctx->pc = 0x14A9F8u;
        goto label_14a9f8;
    }
    ctx->pc = 0x14A9F0u;
    SET_GPR_U32(ctx, 31, 0x14A9F8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A9F0u, 0x14A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9F8u;
label_14a9f8:
    // 0x14a9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14a9fc:
    // 0x14a9fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa00:
    // 0x14aa00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14aa04:
    // 0x14aa04: 0xc0573d8  jal         func_15CF60
label_14aa08:
    if (ctx->pc == 0x14AA08u) {
        ctx->pc = 0x14AA0Cu;
        goto label_14aa0c;
    }
    ctx->pc = 0x14AA04u;
    SET_GPR_U32(ctx, 31, 0x14AA0Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AA04u, 0x14AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA0Cu;
label_14aa0c:
    // 0x14aa0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa10:
    // 0x14aa10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa14:
    // 0x14aa14: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14aa18:
    // 0x14aa18: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14aa1c:
    // 0x14aa1c: 0xc05cf7c  jal         func_173DF0
label_14aa20:
    if (ctx->pc == 0x14AA20u) {
        ctx->pc = 0x14AA24u;
        goto label_14aa24;
    }
    ctx->pc = 0x14AA1Cu;
    SET_GPR_U32(ctx, 31, 0x14AA24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AA1Cu, 0x14AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA24u;
label_14aa24:
    // 0x14aa24: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14aa28:
    // 0x14aa28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa2c:
    // 0x14aa2c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14aa30:
    // 0x14aa30: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14aa34:
    // 0x14aa34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14aa34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14aa38:
    // 0x14aa38: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14aa3c:
    // 0x14aa3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa40:
    // 0x14aa40: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
label_14aa44:
    // 0x14aa44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14aa48:
    // 0x14aa48: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_14aa4c:
    if (ctx->pc == 0x14AA4Cu) {
        ctx->pc = 0x14AA50u;
        goto label_14aa50;
    }
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AB20u;
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14aa54:
    // 0x14aa54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_14aa58:
    // 0x14aa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14aa5c:
    // 0x14aa5c: 0x0  nop
    ctx->pc = 0x14aa5cu;
    // NOP
label_14aa60:
    // 0x14aa60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14aa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14aa64:
    // 0x14aa64: 0x0  nop
    ctx->pc = 0x14aa64u;
    // NOP
label_14aa68:
    // 0x14aa68: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_14aa6c:
    if (ctx->pc == 0x14AA6Cu) {
        ctx->pc = 0x14AA70u;
        goto label_14aa70;
    }
    ctx->pc = 0x14AA68u;
    {
        const bool branch_taken_0x14aa68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14aa68) {
            ctx->pc = 0x14AAD4u;
            goto label_14aad4;
        }
    }
    ctx->pc = 0x14AA70u;
label_14aa70:
    // 0x14aa70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14aa74:
    // 0x14aa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14aa78:
    // 0x14aa78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa7c:
    // 0x14aa7c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14aa80:
    // 0x14aa80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa84:
    // 0x14aa84: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14aa88:
    // 0x14aa88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa8c:
    // 0x14aa8c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14aa90:
    // 0x14aa90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14aa90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14aa94:
    // 0x14aa94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14aa98:
    // 0x14aa98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aa9c:
    // 0x14aa9c: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14aaa0:
    // 0x14aaa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aaa4:
    // 0x14aaa4: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14aaa8:
    // 0x14aaa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14aaa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14aaac:
    // 0x14aaac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aab0:
    // 0x14aab0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14aab4:
    // 0x14aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14aab8:
    // 0x14aab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aabc:
    // 0x14aabc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14aabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14aac0:
    // 0x14aac0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14aac4:
    // 0x14aac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aac8:
    // 0x14aac8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14aac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_14aacc:
    // 0x14aacc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14aad0:
    if (ctx->pc == 0x14AAD0u) {
        ctx->pc = 0x14AAD4u;
        goto label_14aad4;
    }
    ctx->pc = 0x14AACCu;
    {
        const bool branch_taken_0x14aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aacc) {
            ctx->pc = 0x14AB44u;
            goto label_14ab44;
        }
    }
    ctx->pc = 0x14AAD4u;
label_14aad4:
    // 0x14aad4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14aad8:
    // 0x14aad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aadc:
    // 0x14aadc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14aae0:
    // 0x14aae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aae4:
    // 0x14aae4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14aae8:
    // 0x14aae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14aaec:
    // 0x14aaec: 0xc4601b50  lwc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14aaf0:
    // 0x14aaf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14aaf0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14aaf4:
    // 0x14aaf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aaf8:
    // 0x14aaf8: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14aaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14aafc:
    // 0x14aafc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_14ab00:
    // 0x14ab00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab04:
    // 0x14ab04: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x14ab04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
label_14ab08:
    // 0x14ab08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab0c:
    // 0x14ab0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ab0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14ab10:
    // 0x14ab10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ab14:
    // 0x14ab14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14ab18:
    // 0x14ab18: 0x1000000a  b           . + 4 + (0xA << 2)
label_14ab1c:
    if (ctx->pc == 0x14AB1Cu) {
        ctx->pc = 0x14AB20u;
        goto label_14ab20;
    }
    ctx->pc = 0x14AB18u;
    {
        const bool branch_taken_0x14ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab18) {
            ctx->pc = 0x14AB44u;
            goto label_14ab44;
        }
    }
    ctx->pc = 0x14AB20u;
label_14ab20:
    // 0x14ab20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab24:
    // 0x14ab24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ab28:
    // 0x14ab28: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ab2c:
    // 0x14ab2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14ab2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14ab30:
    // 0x14ab30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab34:
    // 0x14ab34: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14ab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14ab38:
    // 0x14ab38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ab3c:
    // 0x14ab3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab40:
    // 0x14ab40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14ab44:
    // 0x14ab44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ab44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ab48:
    // 0x14ab48: 0xc097530  jal         func_25D4C0
label_14ab4c:
    if (ctx->pc == 0x14AB4Cu) {
        ctx->pc = 0x14AB50u;
        goto label_14ab50;
    }
    ctx->pc = 0x14AB48u;
    SET_GPR_U32(ctx, 31, 0x14AB50u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AB48u, 0x14AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB50u;
label_14ab50:
    // 0x14ab50: 0x100000fb  b           . + 4 + (0xFB << 2)
label_14ab54:
    if (ctx->pc == 0x14AB54u) {
        ctx->pc = 0x14AB58u;
        goto label_14ab58;
    }
    ctx->pc = 0x14AB50u;
    {
        const bool branch_taken_0x14ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab50) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AB58u;
label_14ab58:
    // 0x14ab58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab5c:
    // 0x14ab5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab60:
    // 0x14ab60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14ab64:
    // 0x14ab64: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_14ab68:
    // 0x14ab68: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14ab68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
label_14ab6c:
    // 0x14ab6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ab70:
    // 0x14ab70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ab70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14ab74:
    // 0x14ab74: 0xc0965d0  jal         func_259740
label_14ab78:
    if (ctx->pc == 0x14AB78u) {
        ctx->pc = 0x14AB7Cu;
        goto label_14ab7c;
    }
    ctx->pc = 0x14AB74u;
    SET_GPR_U32(ctx, 31, 0x14AB7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14AB74u, 0x14AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB7Cu;
label_14ab7c:
    // 0x14ab7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab80:
    // 0x14ab80: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ab80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14ab84:
    // 0x14ab84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ab88:
    // 0x14ab88: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ab88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14ab8c:
    // 0x14ab8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ab90:
    // 0x14ab90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ab90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ab94:
    // 0x14ab94: 0xc096b40  jal         func_25AD00
label_14ab98:
    if (ctx->pc == 0x14AB98u) {
        ctx->pc = 0x14AB9Cu;
        goto label_14ab9c;
    }
    ctx->pc = 0x14AB94u;
    SET_GPR_U32(ctx, 31, 0x14AB9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AB94u, 0x14AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB9Cu;
label_14ab9c:
    // 0x14ab9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aba0:
    // 0x14aba0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14aba4:
    // 0x14aba4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aba8:
    // 0x14aba8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14abac:
    // 0x14abac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14abacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14abb0:
    // 0x14abb0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14abb4:
    // 0x14abb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14abb8:
    // 0x14abb8: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14abbc:
    // 0x14abbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14abc0:
    // 0x14abc0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14abc4:
    // 0x14abc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14abc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14abc8:
    // 0x14abc8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14abcc:
    // 0x14abcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14abd0:
    // 0x14abd0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14abd4:
    // 0x14abd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14abd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14abd8:
    // 0x14abd8: 0x0  nop
    ctx->pc = 0x14abd8u;
    // NOP
label_14abdc:
    // 0x14abdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14abdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14abe0:
    // 0x14abe0: 0x0  nop
    ctx->pc = 0x14abe0u;
    // NOP
label_14abe4:
    // 0x14abe4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14abe8:
    if (ctx->pc == 0x14ABE8u) {
        ctx->pc = 0x14ABECu;
        goto label_14abec;
    }
    ctx->pc = 0x14ABE4u;
    {
        const bool branch_taken_0x14abe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14abe4) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14ABECu;
label_14abec:
    // 0x14abec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14abecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14abf0:
    // 0x14abf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14abf4:
    // 0x14abf4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14abf8:
    // 0x14abf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14abfc:
    // 0x14abfc: 0xc05cd10  jal         func_173440
label_14ac00:
    if (ctx->pc == 0x14AC00u) {
        ctx->pc = 0x14AC04u;
        goto label_14ac04;
    }
    ctx->pc = 0x14ABFCu;
    SET_GPR_U32(ctx, 31, 0x14AC04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14ABFCu, 0x14AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC04u;
label_14ac04:
    // 0x14ac04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ac04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14ac08:
    // 0x14ac08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac0c:
    // 0x14ac0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14ac10:
    // 0x14ac10: 0xc0573d8  jal         func_15CF60
label_14ac14:
    if (ctx->pc == 0x14AC14u) {
        ctx->pc = 0x14AC18u;
        goto label_14ac18;
    }
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AC10u, 0x14AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC18u;
label_14ac18:
    // 0x14ac18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac1c:
    // 0x14ac1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac20:
    // 0x14ac20: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ac24:
    // 0x14ac24: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14ac28:
    // 0x14ac28: 0xc05cf7c  jal         func_173DF0
label_14ac2c:
    if (ctx->pc == 0x14AC2Cu) {
        ctx->pc = 0x14AC30u;
        goto label_14ac30;
    }
    ctx->pc = 0x14AC28u;
    SET_GPR_U32(ctx, 31, 0x14AC30u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AC28u, 0x14AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC30u;
label_14ac30:
    // 0x14ac30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac34:
    // 0x14ac34: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14ac38:
    // 0x14ac38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ac38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ac3c:
    // 0x14ac3c: 0xc097530  jal         func_25D4C0
label_14ac40:
    if (ctx->pc == 0x14AC40u) {
        ctx->pc = 0x14AC44u;
        goto label_14ac44;
    }
    ctx->pc = 0x14AC3Cu;
    SET_GPR_U32(ctx, 31, 0x14AC44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AC3Cu, 0x14AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC44u;
label_14ac44:
    // 0x14ac44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac48:
    // 0x14ac48: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14ac48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14ac4c:
    // 0x14ac4c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14ac50:
    // 0x14ac50: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x14ac50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_14ac54:
    // 0x14ac54: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14ac58:
    if (ctx->pc == 0x14AC58u) {
        ctx->pc = 0x14AC5Cu;
        goto label_14ac5c;
    }
    ctx->pc = 0x14AC54u;
    {
        const bool branch_taken_0x14ac54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ac54) {
            ctx->pc = 0x14AC8Cu;
            goto label_14ac8c;
        }
    }
    ctx->pc = 0x14AC5Cu;
label_14ac5c:
    // 0x14ac5c: 0xc057acc  jal         func_15EB30
label_14ac60:
    if (ctx->pc == 0x14AC60u) {
        ctx->pc = 0x14AC64u;
        goto label_14ac64;
    }
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14AC5Cu, 0x14AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC64u;
label_14ac64:
    // 0x14ac64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14ac68:
    if (ctx->pc == 0x14AC68u) {
        ctx->pc = 0x14AC6Cu;
        goto label_14ac6c;
    }
    ctx->pc = 0x14AC64u;
    {
        const bool branch_taken_0x14ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac64) {
            ctx->pc = 0x14AC8Cu;
            goto label_14ac8c;
        }
    }
    ctx->pc = 0x14AC6Cu;
label_14ac6c:
    // 0x14ac6c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14ac70:
    // 0x14ac70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac74:
    // 0x14ac74: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14ac78:
    // 0x14ac78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ac7c:
    // 0x14ac7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac80:
    // 0x14ac80: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14ac84:
    // 0x14ac84: 0x100000ae  b           . + 4 + (0xAE << 2)
label_14ac88:
    if (ctx->pc == 0x14AC88u) {
        ctx->pc = 0x14AC8Cu;
        goto label_14ac8c;
    }
    ctx->pc = 0x14AC84u;
    {
        const bool branch_taken_0x14ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac84) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AC8Cu;
label_14ac8c:
    // 0x14ac8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ac90:
    // 0x14ac90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ac90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14ac94:
    // 0x14ac94: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_14ac98:
    if (ctx->pc == 0x14AC98u) {
        ctx->pc = 0x14AC9Cu;
        goto label_14ac9c;
    }
    ctx->pc = 0x14AC94u;
    {
        const bool branch_taken_0x14ac94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac94) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AC9Cu;
label_14ac9c:
    // 0x14ac9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14aca0:
    // 0x14aca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aca4:
    // 0x14aca4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14aca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14aca8:
    // 0x14aca8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14acac:
    // 0x14acac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14acacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14acb0:
    // 0x14acb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14acb4:
    // 0x14acb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14acb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14acb8:
    // 0x14acb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14acbc:
    // 0x14acbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14acc0:
    // 0x14acc0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14acc4:
    // 0x14acc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14acc8:
    // 0x14acc8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14accc:
    // 0x14accc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14acd0:
    // 0x14acd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14acd4:
    // 0x14acd4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14acd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14acd8:
    // 0x14acd8: 0x10000099  b           . + 4 + (0x99 << 2)
label_14acdc:
    if (ctx->pc == 0x14ACDCu) {
        ctx->pc = 0x14ACE0u;
        goto label_14ace0;
    }
    ctx->pc = 0x14ACD8u;
    {
        const bool branch_taken_0x14acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14acd8) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14ACE0u;
label_14ace0:
    // 0x14ace0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ace4:
    // 0x14ace4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ace8:
    // 0x14ace8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14acec:
    // 0x14acec: 0x24060a1b  addiu       $a2, $zero, 0xA1B
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2587));
label_14acf0:
    // 0x14acf0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14acf4:
    // 0x14acf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14acf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14acf8:
    // 0x14acf8: 0xc0965d0  jal         func_259740
label_14acfc:
    if (ctx->pc == 0x14ACFCu) {
        ctx->pc = 0x14AD00u;
        goto label_14ad00;
    }
    ctx->pc = 0x14ACF8u;
    SET_GPR_U32(ctx, 31, 0x14AD00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14ACF8u, 0x14AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD00u;
label_14ad00:
    // 0x14ad00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad04:
    // 0x14ad04: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ad04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14ad08:
    // 0x14ad08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ad0c:
    // 0x14ad0c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14ad10:
    // 0x14ad10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad14:
    // 0x14ad14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ad14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ad18:
    // 0x14ad18: 0xc096b40  jal         func_25AD00
label_14ad1c:
    if (ctx->pc == 0x14AD1Cu) {
        ctx->pc = 0x14AD20u;
        goto label_14ad20;
    }
    ctx->pc = 0x14AD18u;
    SET_GPR_U32(ctx, 31, 0x14AD20u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AD18u, 0x14AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD20u;
label_14ad20:
    // 0x14ad20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad24:
    // 0x14ad24: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ad28:
    // 0x14ad28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad2c:
    // 0x14ad2c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ad30:
    // 0x14ad30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ad30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14ad34:
    // 0x14ad34: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14ad38:
    // 0x14ad38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad3c:
    // 0x14ad3c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ad40:
    // 0x14ad40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ad40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ad44:
    // 0x14ad44: 0x0  nop
    ctx->pc = 0x14ad44u;
    // NOP
label_14ad48:
    // 0x14ad48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ad48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ad4c:
    // 0x14ad4c: 0x0  nop
    ctx->pc = 0x14ad4cu;
    // NOP
label_14ad50:
    // 0x14ad50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14ad54:
    if (ctx->pc == 0x14AD54u) {
        ctx->pc = 0x14AD58u;
        goto label_14ad58;
    }
    ctx->pc = 0x14AD50u;
    {
        const bool branch_taken_0x14ad50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ad50) {
            ctx->pc = 0x14AD64u;
            goto label_14ad64;
        }
    }
    ctx->pc = 0x14AD58u;
label_14ad58:
    // 0x14ad58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ad58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ad5c:
    // 0x14ad5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad60:
    // 0x14ad60: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14ad64:
    // 0x14ad64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad68:
    // 0x14ad68: 0xc05cd10  jal         func_173440
label_14ad6c:
    if (ctx->pc == 0x14AD6Cu) {
        ctx->pc = 0x14AD70u;
        goto label_14ad70;
    }
    ctx->pc = 0x14AD68u;
    SET_GPR_U32(ctx, 31, 0x14AD70u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14AD68u, 0x14AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD70u;
label_14ad70:
    // 0x14ad70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ad70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14ad74:
    // 0x14ad74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad78:
    // 0x14ad78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14ad7c:
    // 0x14ad7c: 0xc0573d8  jal         func_15CF60
label_14ad80:
    if (ctx->pc == 0x14AD80u) {
        ctx->pc = 0x14AD84u;
        goto label_14ad84;
    }
    ctx->pc = 0x14AD7Cu;
    SET_GPR_U32(ctx, 31, 0x14AD84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AD7Cu, 0x14AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD84u;
label_14ad84:
    // 0x14ad84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad88:
    // 0x14ad88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ad8c:
    // 0x14ad8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ad90:
    // 0x14ad90: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14ad94:
    // 0x14ad94: 0xc05cf7c  jal         func_173DF0
label_14ad98:
    if (ctx->pc == 0x14AD98u) {
        ctx->pc = 0x14AD9Cu;
        goto label_14ad9c;
    }
    ctx->pc = 0x14AD94u;
    SET_GPR_U32(ctx, 31, 0x14AD9Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AD94u, 0x14AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD9Cu;
label_14ad9c:
    // 0x14ad9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14ad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14ada0:
    // 0x14ada0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ada4:
    // 0x14ada4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ada8:
    // 0x14ada8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14adac:
    // 0x14adac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14adb0:
    // 0x14adb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14adb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14adb4:
    // 0x14adb4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14adb8:
    // 0x14adb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14adbc:
    // 0x14adbc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14adc0:
    // 0x14adc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14adc4:
    // 0x14adc4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14adc8:
    // 0x14adc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14adc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14adcc:
    // 0x14adcc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14adccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14add0:
    // 0x14add0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14add4:
    // 0x14add4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14add8:
    // 0x14add8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14addc:
    // 0x14addc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14addcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ade0:
    // 0x14ade0: 0x0  nop
    ctx->pc = 0x14ade0u;
    // NOP
label_14ade4:
    // 0x14ade4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14ade8:
    if (ctx->pc == 0x14ADE8u) {
        ctx->pc = 0x14ADECu;
        goto label_14adec;
    }
    ctx->pc = 0x14ADE4u;
    {
        const bool branch_taken_0x14ade4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ade4) {
            ctx->pc = 0x14ADFCu;
            goto label_14adfc;
        }
    }
    ctx->pc = 0x14ADECu;
label_14adec:
    // 0x14adec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14adf0:
    // 0x14adf0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14adf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14adf4:
    // 0x14adf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14adf8:
    // 0x14adf8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14adf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14adfc:
    // 0x14adfc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14adfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ae00:
    // 0x14ae00: 0xc097530  jal         func_25D4C0
label_14ae04:
    if (ctx->pc == 0x14AE04u) {
        ctx->pc = 0x14AE08u;
        goto label_14ae08;
    }
    ctx->pc = 0x14AE00u;
    SET_GPR_U32(ctx, 31, 0x14AE08u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AE00u, 0x14AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE08u;
label_14ae08:
    // 0x14ae08: 0x1000004d  b           . + 4 + (0x4D << 2)
label_14ae0c:
    if (ctx->pc == 0x14AE0Cu) {
        ctx->pc = 0x14AE10u;
        goto label_14ae10;
    }
    ctx->pc = 0x14AE08u;
    {
        const bool branch_taken_0x14ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae08) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AE10u;
label_14ae10:
    // 0x14ae10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae14:
    // 0x14ae14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae18:
    // 0x14ae18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14ae1c:
    // 0x14ae1c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x14ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_14ae20:
    // 0x14ae20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ae20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ae24:
    // 0x14ae24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14ae28:
    // 0x14ae28: 0xc0965d0  jal         func_259740
label_14ae2c:
    if (ctx->pc == 0x14AE2Cu) {
        ctx->pc = 0x14AE30u;
        goto label_14ae30;
    }
    ctx->pc = 0x14AE28u;
    SET_GPR_U32(ctx, 31, 0x14AE30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14AE28u, 0x14AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE30u;
label_14ae30:
    // 0x14ae30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae34:
    // 0x14ae34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ae34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14ae38:
    // 0x14ae38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ae3c:
    // 0x14ae3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14ae40:
    // 0x14ae40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae44:
    // 0x14ae44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ae44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ae48:
    // 0x14ae48: 0xc096b40  jal         func_25AD00
label_14ae4c:
    if (ctx->pc == 0x14AE4Cu) {
        ctx->pc = 0x14AE50u;
        goto label_14ae50;
    }
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae54:
    // 0x14ae54: 0xc05cd10  jal         func_173440
label_14ae58:
    if (ctx->pc == 0x14AE58u) {
        ctx->pc = 0x14AE5Cu;
        goto label_14ae5c;
    }
    ctx->pc = 0x14AE54u;
    SET_GPR_U32(ctx, 31, 0x14AE5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14AE54u, 0x14AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE5Cu;
label_14ae5c:
    // 0x14ae5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ae5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14ae60:
    // 0x14ae60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae64:
    // 0x14ae64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ae64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ae68:
    // 0x14ae68: 0xc0573d8  jal         func_15CF60
label_14ae6c:
    if (ctx->pc == 0x14AE6Cu) {
        ctx->pc = 0x14AE70u;
        goto label_14ae70;
    }
    ctx->pc = 0x14AE68u;
    SET_GPR_U32(ctx, 31, 0x14AE70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AE68u, 0x14AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE70u;
label_14ae70:
    // 0x14ae70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ae70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ae74:
    // 0x14ae74: 0xc097530  jal         func_25D4C0
label_14ae78:
    if (ctx->pc == 0x14AE78u) {
        ctx->pc = 0x14AE7Cu;
        goto label_14ae7c;
    }
    ctx->pc = 0x14AE74u;
    SET_GPR_U32(ctx, 31, 0x14AE7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AE74u, 0x14AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE7Cu;
label_14ae7c:
    // 0x14ae7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae80:
    // 0x14ae80: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14ae84:
    // 0x14ae84: 0xc057b54  jal         func_15ED50
label_14ae88:
    if (ctx->pc == 0x14AE88u) {
        ctx->pc = 0x14AE8Cu;
        goto label_14ae8c;
    }
    ctx->pc = 0x14AE84u;
    SET_GPR_U32(ctx, 31, 0x14AE8Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14AE84u, 0x14AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE8Cu;
label_14ae8c:
    // 0x14ae8c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_14ae90:
    if (ctx->pc == 0x14AE90u) {
        ctx->pc = 0x14AE94u;
        goto label_14ae94;
    }
    ctx->pc = 0x14AE8Cu;
    {
        const bool branch_taken_0x14ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae8c) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AE94u;
label_14ae94:
    // 0x14ae94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ae98:
    // 0x14ae98: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14ae9c:
    // 0x14ae9c: 0xc057b04  jal         func_15EC10
label_14aea0:
    if (ctx->pc == 0x14AEA0u) {
        ctx->pc = 0x14AEA4u;
        goto label_14aea4;
    }
    ctx->pc = 0x14AE9Cu;
    SET_GPR_U32(ctx, 31, 0x14AEA4u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14AE9Cu, 0x14AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEA4u;
label_14aea4:
    // 0x14aea4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_14aea8:
    if (ctx->pc == 0x14AEA8u) {
        ctx->pc = 0x14AEACu;
        goto label_14aeac;
    }
    ctx->pc = 0x14AEA4u;
    {
        const bool branch_taken_0x14aea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aea4) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AEACu;
label_14aeac:
    // 0x14aeac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aeb0:
    // 0x14aeb0: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14aeb4:
    // 0x14aeb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14aeb8:
    // 0x14aeb8: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14aeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
label_14aebc:
    // 0x14aebc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14aec0:
    if (ctx->pc == 0x14AEC0u) {
        ctx->pc = 0x14AEC4u;
        goto label_14aec4;
    }
    ctx->pc = 0x14AEBCu;
    {
        const bool branch_taken_0x14aebc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aebc) {
            ctx->pc = 0x14AEF4u;
            goto label_14aef4;
        }
    }
    ctx->pc = 0x14AEC4u;
label_14aec4:
    // 0x14aec4: 0xc057acc  jal         func_15EB30
label_14aec8:
    if (ctx->pc == 0x14AEC8u) {
        ctx->pc = 0x14AECCu;
        goto label_14aecc;
    }
    ctx->pc = 0x14AEC4u;
    SET_GPR_U32(ctx, 31, 0x14AECCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14AEC4u, 0x14AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AECCu;
label_14aecc:
    // 0x14aecc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14aed0:
    if (ctx->pc == 0x14AED0u) {
        ctx->pc = 0x14AED4u;
        goto label_14aed4;
    }
    ctx->pc = 0x14AECCu;
    {
        const bool branch_taken_0x14aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aecc) {
            ctx->pc = 0x14AEF4u;
            goto label_14aef4;
        }
    }
    ctx->pc = 0x14AED4u;
label_14aed4:
    // 0x14aed4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14aed8:
    // 0x14aed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aedc:
    // 0x14aedc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14aee0:
    // 0x14aee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14aee4:
    // 0x14aee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aee8:
    // 0x14aee8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14aeec:
    // 0x14aeec: 0x10000014  b           . + 4 + (0x14 << 2)
label_14aef0:
    if (ctx->pc == 0x14AEF0u) {
        ctx->pc = 0x14AEF4u;
        goto label_14aef4;
    }
    ctx->pc = 0x14AEECu;
    {
        const bool branch_taken_0x14aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aeec) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AEF4u;
label_14aef4:
    // 0x14aef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14aef8:
    // 0x14aef8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14aef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14aefc:
    // 0x14aefc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14af00:
    if (ctx->pc == 0x14AF00u) {
        ctx->pc = 0x14AF04u;
        goto label_14af04;
    }
    ctx->pc = 0x14AEFCu;
    {
        const bool branch_taken_0x14aefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aefc) {
            ctx->pc = 0x14AF40u;
            goto label_14af40;
        }
    }
    ctx->pc = 0x14AF04u;
label_14af04:
    // 0x14af04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14af08:
    // 0x14af08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af0c:
    // 0x14af0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14af0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14af10:
    // 0x14af10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af14:
    // 0x14af14: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14af14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14af18:
    // 0x14af18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af1c:
    // 0x14af1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14af1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14af20:
    // 0x14af20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af24:
    // 0x14af24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14af24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14af28:
    // 0x14af28: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14af2c:
    // 0x14af2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af30:
    // 0x14af30: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14af30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14af34:
    // 0x14af34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14af38:
    // 0x14af38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af3c:
    // 0x14af3c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14af3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14af40:
    // 0x14af40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14af40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14af44:
    // 0x14af44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14af44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14af48:
    // 0x14af48: 0x3e00008  jr          $ra
label_14af4c:
    if (ctx->pc == 0x14AF4Cu) {
        ctx->pc = 0x14AF50u;
        goto label_fallthrough_0x14af48;
    }
    ctx->pc = 0x14AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14af48:
    ctx->pc = 0x14AF50u;
}
