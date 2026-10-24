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

// Function: Em05_R1_appear
// Address: 0x20ea60 - 0x211b88
void Em05_R1_appear_0x20ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_appear_0x20ea60");
#endif

    switch (ctx->pc) {
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        case 0x20f380u: goto label_20f380;
        case 0x20f384u: goto label_20f384;
        case 0x20f388u: goto label_20f388;
        case 0x20f38cu: goto label_20f38c;
        case 0x20f390u: goto label_20f390;
        case 0x20f394u: goto label_20f394;
        case 0x20f398u: goto label_20f398;
        case 0x20f39cu: goto label_20f39c;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a4u: goto label_20f3a4;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3acu: goto label_20f3ac;
        case 0x20f3b0u: goto label_20f3b0;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3bcu: goto label_20f3bc;
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        case 0x20f40cu: goto label_20f40c;
        case 0x20f410u: goto label_20f410;
        case 0x20f414u: goto label_20f414;
        case 0x20f418u: goto label_20f418;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f420u: goto label_20f420;
        case 0x20f424u: goto label_20f424;
        case 0x20f428u: goto label_20f428;
        case 0x20f42cu: goto label_20f42c;
        case 0x20f430u: goto label_20f430;
        case 0x20f434u: goto label_20f434;
        case 0x20f438u: goto label_20f438;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f440u: goto label_20f440;
        case 0x20f444u: goto label_20f444;
        case 0x20f448u: goto label_20f448;
        case 0x20f44cu: goto label_20f44c;
        case 0x20f450u: goto label_20f450;
        case 0x20f454u: goto label_20f454;
        case 0x20f458u: goto label_20f458;
        case 0x20f45cu: goto label_20f45c;
        case 0x20f460u: goto label_20f460;
        case 0x20f464u: goto label_20f464;
        case 0x20f468u: goto label_20f468;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4acu: goto label_20f4ac;
        case 0x20f4b0u: goto label_20f4b0;
        case 0x20f4b4u: goto label_20f4b4;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbc4u: goto label_20fbc4;
        case 0x20fbc8u: goto label_20fbc8;
        case 0x20fbccu: goto label_20fbcc;
        case 0x20fbd0u: goto label_20fbd0;
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fbd8u: goto label_20fbd8;
        case 0x20fbdcu: goto label_20fbdc;
        case 0x20fbe0u: goto label_20fbe0;
        case 0x20fbe4u: goto label_20fbe4;
        case 0x20fbe8u: goto label_20fbe8;
        case 0x20fbecu: goto label_20fbec;
        case 0x20fbf0u: goto label_20fbf0;
        case 0x20fbf4u: goto label_20fbf4;
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fbfcu: goto label_20fbfc;
        case 0x20fc00u: goto label_20fc00;
        case 0x20fc04u: goto label_20fc04;
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc10u: goto label_20fc10;
        case 0x20fc14u: goto label_20fc14;
        case 0x20fc18u: goto label_20fc18;
        case 0x20fc1cu: goto label_20fc1c;
        case 0x20fc20u: goto label_20fc20;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc28u: goto label_20fc28;
        case 0x20fc2cu: goto label_20fc2c;
        case 0x20fc30u: goto label_20fc30;
        case 0x20fc34u: goto label_20fc34;
        case 0x20fc38u: goto label_20fc38;
        case 0x20fc3cu: goto label_20fc3c;
        case 0x20fc40u: goto label_20fc40;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc48u: goto label_20fc48;
        case 0x20fc4cu: goto label_20fc4c;
        case 0x20fc50u: goto label_20fc50;
        case 0x20fc54u: goto label_20fc54;
        case 0x20fc58u: goto label_20fc58;
        case 0x20fc5cu: goto label_20fc5c;
        case 0x20fc60u: goto label_20fc60;
        case 0x20fc64u: goto label_20fc64;
        case 0x20fc68u: goto label_20fc68;
        case 0x20fc6cu: goto label_20fc6c;
        case 0x20fc70u: goto label_20fc70;
        case 0x20fc74u: goto label_20fc74;
        case 0x20fc78u: goto label_20fc78;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fc80u: goto label_20fc80;
        case 0x20fc84u: goto label_20fc84;
        case 0x20fc88u: goto label_20fc88;
        case 0x20fc8cu: goto label_20fc8c;
        case 0x20fc90u: goto label_20fc90;
        case 0x20fc94u: goto label_20fc94;
        case 0x20fc98u: goto label_20fc98;
        case 0x20fc9cu: goto label_20fc9c;
        case 0x20fca0u: goto label_20fca0;
        case 0x20fca4u: goto label_20fca4;
        case 0x20fca8u: goto label_20fca8;
        case 0x20fcacu: goto label_20fcac;
        case 0x20fcb0u: goto label_20fcb0;
        case 0x20fcb4u: goto label_20fcb4;
        case 0x20fcb8u: goto label_20fcb8;
        case 0x20fcbcu: goto label_20fcbc;
        case 0x20fcc0u: goto label_20fcc0;
        case 0x20fcc4u: goto label_20fcc4;
        case 0x20fcc8u: goto label_20fcc8;
        case 0x20fcccu: goto label_20fccc;
        case 0x20fcd0u: goto label_20fcd0;
        case 0x20fcd4u: goto label_20fcd4;
        case 0x20fcd8u: goto label_20fcd8;
        case 0x20fcdcu: goto label_20fcdc;
        case 0x20fce0u: goto label_20fce0;
        case 0x20fce4u: goto label_20fce4;
        case 0x20fce8u: goto label_20fce8;
        case 0x20fcecu: goto label_20fcec;
        case 0x20fcf0u: goto label_20fcf0;
        case 0x20fcf4u: goto label_20fcf4;
        case 0x20fcf8u: goto label_20fcf8;
        case 0x20fcfcu: goto label_20fcfc;
        case 0x20fd00u: goto label_20fd00;
        case 0x20fd04u: goto label_20fd04;
        case 0x20fd08u: goto label_20fd08;
        case 0x20fd0cu: goto label_20fd0c;
        case 0x20fd10u: goto label_20fd10;
        case 0x20fd14u: goto label_20fd14;
        case 0x20fd18u: goto label_20fd18;
        case 0x20fd1cu: goto label_20fd1c;
        case 0x20fd20u: goto label_20fd20;
        case 0x20fd24u: goto label_20fd24;
        case 0x20fd28u: goto label_20fd28;
        case 0x20fd2cu: goto label_20fd2c;
        case 0x20fd30u: goto label_20fd30;
        case 0x20fd34u: goto label_20fd34;
        case 0x20fd38u: goto label_20fd38;
        case 0x20fd3cu: goto label_20fd3c;
        case 0x20fd40u: goto label_20fd40;
        case 0x20fd44u: goto label_20fd44;
        case 0x20fd48u: goto label_20fd48;
        case 0x20fd4cu: goto label_20fd4c;
        case 0x20fd50u: goto label_20fd50;
        case 0x20fd54u: goto label_20fd54;
        case 0x20fd58u: goto label_20fd58;
        case 0x20fd5cu: goto label_20fd5c;
        case 0x20fd60u: goto label_20fd60;
        case 0x20fd64u: goto label_20fd64;
        case 0x20fd68u: goto label_20fd68;
        case 0x20fd6cu: goto label_20fd6c;
        case 0x20fd70u: goto label_20fd70;
        case 0x20fd74u: goto label_20fd74;
        case 0x20fd78u: goto label_20fd78;
        case 0x20fd7cu: goto label_20fd7c;
        case 0x20fd80u: goto label_20fd80;
        case 0x20fd84u: goto label_20fd84;
        case 0x20fd88u: goto label_20fd88;
        case 0x20fd8cu: goto label_20fd8c;
        case 0x20fd90u: goto label_20fd90;
        case 0x20fd94u: goto label_20fd94;
        case 0x20fd98u: goto label_20fd98;
        case 0x20fd9cu: goto label_20fd9c;
        case 0x20fda0u: goto label_20fda0;
        case 0x20fda4u: goto label_20fda4;
        case 0x20fda8u: goto label_20fda8;
        case 0x20fdacu: goto label_20fdac;
        case 0x20fdb0u: goto label_20fdb0;
        case 0x20fdb4u: goto label_20fdb4;
        case 0x20fdb8u: goto label_20fdb8;
        case 0x20fdbcu: goto label_20fdbc;
        case 0x20fdc0u: goto label_20fdc0;
        case 0x20fdc4u: goto label_20fdc4;
        case 0x20fdc8u: goto label_20fdc8;
        case 0x20fdccu: goto label_20fdcc;
        case 0x20fdd0u: goto label_20fdd0;
        case 0x20fdd4u: goto label_20fdd4;
        case 0x20fdd8u: goto label_20fdd8;
        case 0x20fddcu: goto label_20fddc;
        case 0x20fde0u: goto label_20fde0;
        case 0x20fde4u: goto label_20fde4;
        case 0x20fde8u: goto label_20fde8;
        case 0x20fdecu: goto label_20fdec;
        case 0x20fdf0u: goto label_20fdf0;
        case 0x20fdf4u: goto label_20fdf4;
        case 0x20fdf8u: goto label_20fdf8;
        case 0x20fdfcu: goto label_20fdfc;
        case 0x20fe00u: goto label_20fe00;
        case 0x20fe04u: goto label_20fe04;
        case 0x20fe08u: goto label_20fe08;
        case 0x20fe0cu: goto label_20fe0c;
        case 0x20fe10u: goto label_20fe10;
        case 0x20fe14u: goto label_20fe14;
        case 0x20fe18u: goto label_20fe18;
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe20u: goto label_20fe20;
        case 0x20fe24u: goto label_20fe24;
        case 0x20fe28u: goto label_20fe28;
        case 0x20fe2cu: goto label_20fe2c;
        case 0x20fe30u: goto label_20fe30;
        case 0x20fe34u: goto label_20fe34;
        case 0x20fe38u: goto label_20fe38;
        case 0x20fe3cu: goto label_20fe3c;
        case 0x20fe40u: goto label_20fe40;
        case 0x20fe44u: goto label_20fe44;
        case 0x20fe48u: goto label_20fe48;
        case 0x20fe4cu: goto label_20fe4c;
        case 0x20fe50u: goto label_20fe50;
        case 0x20fe54u: goto label_20fe54;
        case 0x20fe58u: goto label_20fe58;
        case 0x20fe5cu: goto label_20fe5c;
        case 0x20fe60u: goto label_20fe60;
        case 0x20fe64u: goto label_20fe64;
        case 0x20fe68u: goto label_20fe68;
        case 0x20fe6cu: goto label_20fe6c;
        case 0x20fe70u: goto label_20fe70;
        case 0x20fe74u: goto label_20fe74;
        case 0x20fe78u: goto label_20fe78;
        case 0x20fe7cu: goto label_20fe7c;
        case 0x20fe80u: goto label_20fe80;
        case 0x20fe84u: goto label_20fe84;
        case 0x20fe88u: goto label_20fe88;
        case 0x20fe8cu: goto label_20fe8c;
        case 0x20fe90u: goto label_20fe90;
        case 0x20fe94u: goto label_20fe94;
        case 0x20fe98u: goto label_20fe98;
        case 0x20fe9cu: goto label_20fe9c;
        case 0x20fea0u: goto label_20fea0;
        case 0x20fea4u: goto label_20fea4;
        case 0x20fea8u: goto label_20fea8;
        case 0x20feacu: goto label_20feac;
        case 0x20feb0u: goto label_20feb0;
        case 0x20feb4u: goto label_20feb4;
        case 0x20feb8u: goto label_20feb8;
        case 0x20febcu: goto label_20febc;
        case 0x20fec0u: goto label_20fec0;
        case 0x20fec4u: goto label_20fec4;
        case 0x20fec8u: goto label_20fec8;
        case 0x20feccu: goto label_20fecc;
        case 0x20fed0u: goto label_20fed0;
        case 0x20fed4u: goto label_20fed4;
        case 0x20fed8u: goto label_20fed8;
        case 0x20fedcu: goto label_20fedc;
        case 0x20fee0u: goto label_20fee0;
        case 0x20fee4u: goto label_20fee4;
        case 0x20fee8u: goto label_20fee8;
        case 0x20feecu: goto label_20feec;
        case 0x20fef0u: goto label_20fef0;
        case 0x20fef4u: goto label_20fef4;
        case 0x20fef8u: goto label_20fef8;
        case 0x20fefcu: goto label_20fefc;
        case 0x20ff00u: goto label_20ff00;
        case 0x20ff04u: goto label_20ff04;
        case 0x20ff08u: goto label_20ff08;
        case 0x20ff0cu: goto label_20ff0c;
        case 0x20ff10u: goto label_20ff10;
        case 0x20ff14u: goto label_20ff14;
        case 0x20ff18u: goto label_20ff18;
        case 0x20ff1cu: goto label_20ff1c;
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff24u: goto label_20ff24;
        case 0x20ff28u: goto label_20ff28;
        case 0x20ff2cu: goto label_20ff2c;
        case 0x20ff30u: goto label_20ff30;
        case 0x20ff34u: goto label_20ff34;
        case 0x20ff38u: goto label_20ff38;
        case 0x20ff3cu: goto label_20ff3c;
        case 0x20ff40u: goto label_20ff40;
        case 0x20ff44u: goto label_20ff44;
        case 0x20ff48u: goto label_20ff48;
        case 0x20ff4cu: goto label_20ff4c;
        case 0x20ff50u: goto label_20ff50;
        case 0x20ff54u: goto label_20ff54;
        case 0x20ff58u: goto label_20ff58;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff60u: goto label_20ff60;
        case 0x20ff64u: goto label_20ff64;
        case 0x20ff68u: goto label_20ff68;
        case 0x20ff6cu: goto label_20ff6c;
        case 0x20ff70u: goto label_20ff70;
        case 0x20ff74u: goto label_20ff74;
        case 0x20ff78u: goto label_20ff78;
        case 0x20ff7cu: goto label_20ff7c;
        case 0x20ff80u: goto label_20ff80;
        case 0x20ff84u: goto label_20ff84;
        case 0x20ff88u: goto label_20ff88;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff90u: goto label_20ff90;
        case 0x20ff94u: goto label_20ff94;
        case 0x20ff98u: goto label_20ff98;
        case 0x20ff9cu: goto label_20ff9c;
        case 0x20ffa0u: goto label_20ffa0;
        case 0x20ffa4u: goto label_20ffa4;
        case 0x20ffa8u: goto label_20ffa8;
        case 0x20ffacu: goto label_20ffac;
        case 0x20ffb0u: goto label_20ffb0;
        case 0x20ffb4u: goto label_20ffb4;
        case 0x20ffb8u: goto label_20ffb8;
        case 0x20ffbcu: goto label_20ffbc;
        case 0x20ffc0u: goto label_20ffc0;
        case 0x20ffc4u: goto label_20ffc4;
        case 0x20ffc8u: goto label_20ffc8;
        case 0x20ffccu: goto label_20ffcc;
        case 0x20ffd0u: goto label_20ffd0;
        case 0x20ffd4u: goto label_20ffd4;
        case 0x20ffd8u: goto label_20ffd8;
        case 0x20ffdcu: goto label_20ffdc;
        case 0x20ffe0u: goto label_20ffe0;
        case 0x20ffe4u: goto label_20ffe4;
        case 0x20ffe8u: goto label_20ffe8;
        case 0x20ffecu: goto label_20ffec;
        case 0x20fff0u: goto label_20fff0;
        case 0x20fff4u: goto label_20fff4;
        case 0x20fff8u: goto label_20fff8;
        case 0x20fffcu: goto label_20fffc;
        case 0x210000u: goto label_210000;
        case 0x210004u: goto label_210004;
        case 0x210008u: goto label_210008;
        case 0x21000cu: goto label_21000c;
        case 0x210010u: goto label_210010;
        case 0x210014u: goto label_210014;
        case 0x210018u: goto label_210018;
        case 0x21001cu: goto label_21001c;
        case 0x210020u: goto label_210020;
        case 0x210024u: goto label_210024;
        case 0x210028u: goto label_210028;
        case 0x21002cu: goto label_21002c;
        case 0x210030u: goto label_210030;
        case 0x210034u: goto label_210034;
        case 0x210038u: goto label_210038;
        case 0x21003cu: goto label_21003c;
        case 0x210040u: goto label_210040;
        case 0x210044u: goto label_210044;
        case 0x210048u: goto label_210048;
        case 0x21004cu: goto label_21004c;
        case 0x210050u: goto label_210050;
        case 0x210054u: goto label_210054;
        case 0x210058u: goto label_210058;
        case 0x21005cu: goto label_21005c;
        case 0x210060u: goto label_210060;
        case 0x210064u: goto label_210064;
        case 0x210068u: goto label_210068;
        case 0x21006cu: goto label_21006c;
        case 0x210070u: goto label_210070;
        case 0x210074u: goto label_210074;
        case 0x210078u: goto label_210078;
        case 0x21007cu: goto label_21007c;
        case 0x210080u: goto label_210080;
        case 0x210084u: goto label_210084;
        case 0x210088u: goto label_210088;
        case 0x21008cu: goto label_21008c;
        case 0x210090u: goto label_210090;
        case 0x210094u: goto label_210094;
        case 0x210098u: goto label_210098;
        case 0x21009cu: goto label_21009c;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100acu: goto label_2100ac;
        case 0x2100b0u: goto label_2100b0;
        case 0x2100b4u: goto label_2100b4;
        case 0x2100b8u: goto label_2100b8;
        case 0x2100bcu: goto label_2100bc;
        case 0x2100c0u: goto label_2100c0;
        case 0x2100c4u: goto label_2100c4;
        case 0x2100c8u: goto label_2100c8;
        case 0x2100ccu: goto label_2100cc;
        case 0x2100d0u: goto label_2100d0;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100d8u: goto label_2100d8;
        case 0x2100dcu: goto label_2100dc;
        case 0x2100e0u: goto label_2100e0;
        case 0x2100e4u: goto label_2100e4;
        case 0x2100e8u: goto label_2100e8;
        case 0x2100ecu: goto label_2100ec;
        case 0x2100f0u: goto label_2100f0;
        case 0x2100f4u: goto label_2100f4;
        case 0x2100f8u: goto label_2100f8;
        case 0x2100fcu: goto label_2100fc;
        case 0x210100u: goto label_210100;
        case 0x210104u: goto label_210104;
        case 0x210108u: goto label_210108;
        case 0x21010cu: goto label_21010c;
        case 0x210110u: goto label_210110;
        case 0x210114u: goto label_210114;
        case 0x210118u: goto label_210118;
        case 0x21011cu: goto label_21011c;
        case 0x210120u: goto label_210120;
        case 0x210124u: goto label_210124;
        case 0x210128u: goto label_210128;
        case 0x21012cu: goto label_21012c;
        case 0x210130u: goto label_210130;
        case 0x210134u: goto label_210134;
        case 0x210138u: goto label_210138;
        case 0x21013cu: goto label_21013c;
        case 0x210140u: goto label_210140;
        case 0x210144u: goto label_210144;
        case 0x210148u: goto label_210148;
        case 0x21014cu: goto label_21014c;
        case 0x210150u: goto label_210150;
        case 0x210154u: goto label_210154;
        case 0x210158u: goto label_210158;
        case 0x21015cu: goto label_21015c;
        case 0x210160u: goto label_210160;
        case 0x210164u: goto label_210164;
        case 0x210168u: goto label_210168;
        case 0x21016cu: goto label_21016c;
        case 0x210170u: goto label_210170;
        case 0x210174u: goto label_210174;
        case 0x210178u: goto label_210178;
        case 0x21017cu: goto label_21017c;
        case 0x210180u: goto label_210180;
        case 0x210184u: goto label_210184;
        case 0x210188u: goto label_210188;
        case 0x21018cu: goto label_21018c;
        case 0x210190u: goto label_210190;
        case 0x210194u: goto label_210194;
        case 0x210198u: goto label_210198;
        case 0x21019cu: goto label_21019c;
        case 0x2101a0u: goto label_2101a0;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101acu: goto label_2101ac;
        case 0x2101b0u: goto label_2101b0;
        case 0x2101b4u: goto label_2101b4;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101c0u: goto label_2101c0;
        case 0x2101c4u: goto label_2101c4;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d0u: goto label_2101d0;
        case 0x2101d4u: goto label_2101d4;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101dcu: goto label_2101dc;
        case 0x2101e0u: goto label_2101e0;
        case 0x2101e4u: goto label_2101e4;
        case 0x2101e8u: goto label_2101e8;
        case 0x2101ecu: goto label_2101ec;
        case 0x2101f0u: goto label_2101f0;
        case 0x2101f4u: goto label_2101f4;
        case 0x2101f8u: goto label_2101f8;
        case 0x2101fcu: goto label_2101fc;
        case 0x210200u: goto label_210200;
        case 0x210204u: goto label_210204;
        case 0x210208u: goto label_210208;
        case 0x21020cu: goto label_21020c;
        case 0x210210u: goto label_210210;
        case 0x210214u: goto label_210214;
        case 0x210218u: goto label_210218;
        case 0x21021cu: goto label_21021c;
        case 0x210220u: goto label_210220;
        case 0x210224u: goto label_210224;
        case 0x210228u: goto label_210228;
        case 0x21022cu: goto label_21022c;
        case 0x210230u: goto label_210230;
        case 0x210234u: goto label_210234;
        case 0x210238u: goto label_210238;
        case 0x21023cu: goto label_21023c;
        case 0x210240u: goto label_210240;
        case 0x210244u: goto label_210244;
        case 0x210248u: goto label_210248;
        case 0x21024cu: goto label_21024c;
        case 0x210250u: goto label_210250;
        case 0x210254u: goto label_210254;
        case 0x210258u: goto label_210258;
        case 0x21025cu: goto label_21025c;
        case 0x210260u: goto label_210260;
        case 0x210264u: goto label_210264;
        case 0x210268u: goto label_210268;
        case 0x21026cu: goto label_21026c;
        case 0x210270u: goto label_210270;
        case 0x210274u: goto label_210274;
        case 0x210278u: goto label_210278;
        case 0x21027cu: goto label_21027c;
        case 0x210280u: goto label_210280;
        case 0x210284u: goto label_210284;
        case 0x210288u: goto label_210288;
        case 0x21028cu: goto label_21028c;
        case 0x210290u: goto label_210290;
        case 0x210294u: goto label_210294;
        case 0x210298u: goto label_210298;
        case 0x21029cu: goto label_21029c;
        case 0x2102a0u: goto label_2102a0;
        case 0x2102a4u: goto label_2102a4;
        case 0x2102a8u: goto label_2102a8;
        case 0x2102acu: goto label_2102ac;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102b4u: goto label_2102b4;
        case 0x2102b8u: goto label_2102b8;
        case 0x2102bcu: goto label_2102bc;
        case 0x2102c0u: goto label_2102c0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102c8u: goto label_2102c8;
        case 0x2102ccu: goto label_2102cc;
        case 0x2102d0u: goto label_2102d0;
        case 0x2102d4u: goto label_2102d4;
        case 0x2102d8u: goto label_2102d8;
        case 0x2102dcu: goto label_2102dc;
        case 0x2102e0u: goto label_2102e0;
        case 0x2102e4u: goto label_2102e4;
        case 0x2102e8u: goto label_2102e8;
        case 0x2102ecu: goto label_2102ec;
        case 0x2102f0u: goto label_2102f0;
        case 0x2102f4u: goto label_2102f4;
        case 0x2102f8u: goto label_2102f8;
        case 0x2102fcu: goto label_2102fc;
        case 0x210300u: goto label_210300;
        case 0x210304u: goto label_210304;
        case 0x210308u: goto label_210308;
        case 0x21030cu: goto label_21030c;
        case 0x210310u: goto label_210310;
        case 0x210314u: goto label_210314;
        case 0x210318u: goto label_210318;
        case 0x21031cu: goto label_21031c;
        case 0x210320u: goto label_210320;
        case 0x210324u: goto label_210324;
        case 0x210328u: goto label_210328;
        case 0x21032cu: goto label_21032c;
        case 0x210330u: goto label_210330;
        case 0x210334u: goto label_210334;
        case 0x210338u: goto label_210338;
        case 0x21033cu: goto label_21033c;
        case 0x210340u: goto label_210340;
        case 0x210344u: goto label_210344;
        case 0x210348u: goto label_210348;
        case 0x21034cu: goto label_21034c;
        case 0x210350u: goto label_210350;
        case 0x210354u: goto label_210354;
        case 0x210358u: goto label_210358;
        case 0x21035cu: goto label_21035c;
        case 0x210360u: goto label_210360;
        case 0x210364u: goto label_210364;
        case 0x210368u: goto label_210368;
        case 0x21036cu: goto label_21036c;
        case 0x210370u: goto label_210370;
        case 0x210374u: goto label_210374;
        case 0x210378u: goto label_210378;
        case 0x21037cu: goto label_21037c;
        case 0x210380u: goto label_210380;
        case 0x210384u: goto label_210384;
        case 0x210388u: goto label_210388;
        case 0x21038cu: goto label_21038c;
        case 0x210390u: goto label_210390;
        case 0x210394u: goto label_210394;
        case 0x210398u: goto label_210398;
        case 0x21039cu: goto label_21039c;
        case 0x2103a0u: goto label_2103a0;
        case 0x2103a4u: goto label_2103a4;
        case 0x2103a8u: goto label_2103a8;
        case 0x2103acu: goto label_2103ac;
        case 0x2103b0u: goto label_2103b0;
        case 0x2103b4u: goto label_2103b4;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103bcu: goto label_2103bc;
        case 0x2103c0u: goto label_2103c0;
        case 0x2103c4u: goto label_2103c4;
        case 0x2103c8u: goto label_2103c8;
        case 0x2103ccu: goto label_2103cc;
        case 0x2103d0u: goto label_2103d0;
        case 0x2103d4u: goto label_2103d4;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103dcu: goto label_2103dc;
        case 0x2103e0u: goto label_2103e0;
        case 0x2103e4u: goto label_2103e4;
        case 0x2103e8u: goto label_2103e8;
        case 0x2103ecu: goto label_2103ec;
        case 0x2103f0u: goto label_2103f0;
        case 0x2103f4u: goto label_2103f4;
        case 0x2103f8u: goto label_2103f8;
        case 0x2103fcu: goto label_2103fc;
        case 0x210400u: goto label_210400;
        case 0x210404u: goto label_210404;
        case 0x210408u: goto label_210408;
        case 0x21040cu: goto label_21040c;
        case 0x210410u: goto label_210410;
        case 0x210414u: goto label_210414;
        case 0x210418u: goto label_210418;
        case 0x21041cu: goto label_21041c;
        case 0x210420u: goto label_210420;
        case 0x210424u: goto label_210424;
        case 0x210428u: goto label_210428;
        case 0x21042cu: goto label_21042c;
        case 0x210430u: goto label_210430;
        case 0x210434u: goto label_210434;
        case 0x210438u: goto label_210438;
        case 0x21043cu: goto label_21043c;
        case 0x210440u: goto label_210440;
        case 0x210444u: goto label_210444;
        case 0x210448u: goto label_210448;
        case 0x21044cu: goto label_21044c;
        case 0x210450u: goto label_210450;
        case 0x210454u: goto label_210454;
        case 0x210458u: goto label_210458;
        case 0x21045cu: goto label_21045c;
        case 0x210460u: goto label_210460;
        case 0x210464u: goto label_210464;
        case 0x210468u: goto label_210468;
        case 0x21046cu: goto label_21046c;
        case 0x210470u: goto label_210470;
        case 0x210474u: goto label_210474;
        case 0x210478u: goto label_210478;
        case 0x21047cu: goto label_21047c;
        case 0x210480u: goto label_210480;
        case 0x210484u: goto label_210484;
        case 0x210488u: goto label_210488;
        case 0x21048cu: goto label_21048c;
        case 0x210490u: goto label_210490;
        case 0x210494u: goto label_210494;
        case 0x210498u: goto label_210498;
        case 0x21049cu: goto label_21049c;
        case 0x2104a0u: goto label_2104a0;
        case 0x2104a4u: goto label_2104a4;
        case 0x2104a8u: goto label_2104a8;
        case 0x2104acu: goto label_2104ac;
        case 0x2104b0u: goto label_2104b0;
        case 0x2104b4u: goto label_2104b4;
        case 0x2104b8u: goto label_2104b8;
        case 0x2104bcu: goto label_2104bc;
        case 0x2104c0u: goto label_2104c0;
        case 0x2104c4u: goto label_2104c4;
        case 0x2104c8u: goto label_2104c8;
        case 0x2104ccu: goto label_2104cc;
        case 0x2104d0u: goto label_2104d0;
        case 0x2104d4u: goto label_2104d4;
        case 0x2104d8u: goto label_2104d8;
        case 0x2104dcu: goto label_2104dc;
        case 0x2104e0u: goto label_2104e0;
        case 0x2104e4u: goto label_2104e4;
        case 0x2104e8u: goto label_2104e8;
        case 0x2104ecu: goto label_2104ec;
        case 0x2104f0u: goto label_2104f0;
        case 0x2104f4u: goto label_2104f4;
        case 0x2104f8u: goto label_2104f8;
        case 0x2104fcu: goto label_2104fc;
        case 0x210500u: goto label_210500;
        case 0x210504u: goto label_210504;
        case 0x210508u: goto label_210508;
        case 0x21050cu: goto label_21050c;
        case 0x210510u: goto label_210510;
        case 0x210514u: goto label_210514;
        case 0x210518u: goto label_210518;
        case 0x21051cu: goto label_21051c;
        case 0x210520u: goto label_210520;
        case 0x210524u: goto label_210524;
        case 0x210528u: goto label_210528;
        case 0x21052cu: goto label_21052c;
        case 0x210530u: goto label_210530;
        case 0x210534u: goto label_210534;
        case 0x210538u: goto label_210538;
        case 0x21053cu: goto label_21053c;
        case 0x210540u: goto label_210540;
        case 0x210544u: goto label_210544;
        case 0x210548u: goto label_210548;
        case 0x21054cu: goto label_21054c;
        case 0x210550u: goto label_210550;
        case 0x210554u: goto label_210554;
        case 0x210558u: goto label_210558;
        case 0x21055cu: goto label_21055c;
        case 0x210560u: goto label_210560;
        case 0x210564u: goto label_210564;
        case 0x210568u: goto label_210568;
        case 0x21056cu: goto label_21056c;
        case 0x210570u: goto label_210570;
        case 0x210574u: goto label_210574;
        case 0x210578u: goto label_210578;
        case 0x21057cu: goto label_21057c;
        case 0x210580u: goto label_210580;
        case 0x210584u: goto label_210584;
        case 0x210588u: goto label_210588;
        case 0x21058cu: goto label_21058c;
        case 0x210590u: goto label_210590;
        case 0x210594u: goto label_210594;
        case 0x210598u: goto label_210598;
        case 0x21059cu: goto label_21059c;
        case 0x2105a0u: goto label_2105a0;
        case 0x2105a4u: goto label_2105a4;
        case 0x2105a8u: goto label_2105a8;
        case 0x2105acu: goto label_2105ac;
        case 0x2105b0u: goto label_2105b0;
        case 0x2105b4u: goto label_2105b4;
        case 0x2105b8u: goto label_2105b8;
        case 0x2105bcu: goto label_2105bc;
        case 0x2105c0u: goto label_2105c0;
        case 0x2105c4u: goto label_2105c4;
        case 0x2105c8u: goto label_2105c8;
        case 0x2105ccu: goto label_2105cc;
        case 0x2105d0u: goto label_2105d0;
        case 0x2105d4u: goto label_2105d4;
        case 0x2105d8u: goto label_2105d8;
        case 0x2105dcu: goto label_2105dc;
        case 0x2105e0u: goto label_2105e0;
        case 0x2105e4u: goto label_2105e4;
        case 0x2105e8u: goto label_2105e8;
        case 0x2105ecu: goto label_2105ec;
        case 0x2105f0u: goto label_2105f0;
        case 0x2105f4u: goto label_2105f4;
        case 0x2105f8u: goto label_2105f8;
        case 0x2105fcu: goto label_2105fc;
        case 0x210600u: goto label_210600;
        case 0x210604u: goto label_210604;
        case 0x210608u: goto label_210608;
        case 0x21060cu: goto label_21060c;
        case 0x210610u: goto label_210610;
        case 0x210614u: goto label_210614;
        case 0x210618u: goto label_210618;
        case 0x21061cu: goto label_21061c;
        case 0x210620u: goto label_210620;
        case 0x210624u: goto label_210624;
        case 0x210628u: goto label_210628;
        case 0x21062cu: goto label_21062c;
        case 0x210630u: goto label_210630;
        case 0x210634u: goto label_210634;
        case 0x210638u: goto label_210638;
        case 0x21063cu: goto label_21063c;
        case 0x210640u: goto label_210640;
        case 0x210644u: goto label_210644;
        case 0x210648u: goto label_210648;
        case 0x21064cu: goto label_21064c;
        case 0x210650u: goto label_210650;
        case 0x210654u: goto label_210654;
        case 0x210658u: goto label_210658;
        case 0x21065cu: goto label_21065c;
        case 0x210660u: goto label_210660;
        case 0x210664u: goto label_210664;
        case 0x210668u: goto label_210668;
        case 0x21066cu: goto label_21066c;
        case 0x210670u: goto label_210670;
        case 0x210674u: goto label_210674;
        case 0x210678u: goto label_210678;
        case 0x21067cu: goto label_21067c;
        case 0x210680u: goto label_210680;
        case 0x210684u: goto label_210684;
        case 0x210688u: goto label_210688;
        case 0x21068cu: goto label_21068c;
        case 0x210690u: goto label_210690;
        case 0x210694u: goto label_210694;
        case 0x210698u: goto label_210698;
        case 0x21069cu: goto label_21069c;
        case 0x2106a0u: goto label_2106a0;
        case 0x2106a4u: goto label_2106a4;
        case 0x2106a8u: goto label_2106a8;
        case 0x2106acu: goto label_2106ac;
        case 0x2106b0u: goto label_2106b0;
        case 0x2106b4u: goto label_2106b4;
        case 0x2106b8u: goto label_2106b8;
        case 0x2106bcu: goto label_2106bc;
        case 0x2106c0u: goto label_2106c0;
        case 0x2106c4u: goto label_2106c4;
        case 0x2106c8u: goto label_2106c8;
        case 0x2106ccu: goto label_2106cc;
        case 0x2106d0u: goto label_2106d0;
        case 0x2106d4u: goto label_2106d4;
        case 0x2106d8u: goto label_2106d8;
        case 0x2106dcu: goto label_2106dc;
        case 0x2106e0u: goto label_2106e0;
        case 0x2106e4u: goto label_2106e4;
        case 0x2106e8u: goto label_2106e8;
        case 0x2106ecu: goto label_2106ec;
        case 0x2106f0u: goto label_2106f0;
        case 0x2106f4u: goto label_2106f4;
        case 0x2106f8u: goto label_2106f8;
        case 0x2106fcu: goto label_2106fc;
        case 0x210700u: goto label_210700;
        case 0x210704u: goto label_210704;
        case 0x210708u: goto label_210708;
        case 0x21070cu: goto label_21070c;
        case 0x210710u: goto label_210710;
        case 0x210714u: goto label_210714;
        case 0x210718u: goto label_210718;
        case 0x21071cu: goto label_21071c;
        case 0x210720u: goto label_210720;
        case 0x210724u: goto label_210724;
        case 0x210728u: goto label_210728;
        case 0x21072cu: goto label_21072c;
        case 0x210730u: goto label_210730;
        case 0x210734u: goto label_210734;
        case 0x210738u: goto label_210738;
        case 0x21073cu: goto label_21073c;
        case 0x210740u: goto label_210740;
        case 0x210744u: goto label_210744;
        case 0x210748u: goto label_210748;
        case 0x21074cu: goto label_21074c;
        case 0x210750u: goto label_210750;
        case 0x210754u: goto label_210754;
        case 0x210758u: goto label_210758;
        case 0x21075cu: goto label_21075c;
        case 0x210760u: goto label_210760;
        case 0x210764u: goto label_210764;
        case 0x210768u: goto label_210768;
        case 0x21076cu: goto label_21076c;
        case 0x210770u: goto label_210770;
        case 0x210774u: goto label_210774;
        case 0x210778u: goto label_210778;
        case 0x21077cu: goto label_21077c;
        case 0x210780u: goto label_210780;
        case 0x210784u: goto label_210784;
        case 0x210788u: goto label_210788;
        case 0x21078cu: goto label_21078c;
        case 0x210790u: goto label_210790;
        case 0x210794u: goto label_210794;
        case 0x210798u: goto label_210798;
        case 0x21079cu: goto label_21079c;
        case 0x2107a0u: goto label_2107a0;
        case 0x2107a4u: goto label_2107a4;
        case 0x2107a8u: goto label_2107a8;
        case 0x2107acu: goto label_2107ac;
        case 0x2107b0u: goto label_2107b0;
        case 0x2107b4u: goto label_2107b4;
        case 0x2107b8u: goto label_2107b8;
        case 0x2107bcu: goto label_2107bc;
        case 0x2107c0u: goto label_2107c0;
        case 0x2107c4u: goto label_2107c4;
        case 0x2107c8u: goto label_2107c8;
        case 0x2107ccu: goto label_2107cc;
        case 0x2107d0u: goto label_2107d0;
        case 0x2107d4u: goto label_2107d4;
        case 0x2107d8u: goto label_2107d8;
        case 0x2107dcu: goto label_2107dc;
        case 0x2107e0u: goto label_2107e0;
        case 0x2107e4u: goto label_2107e4;
        case 0x2107e8u: goto label_2107e8;
        case 0x2107ecu: goto label_2107ec;
        case 0x2107f0u: goto label_2107f0;
        case 0x2107f4u: goto label_2107f4;
        case 0x2107f8u: goto label_2107f8;
        case 0x2107fcu: goto label_2107fc;
        case 0x210800u: goto label_210800;
        case 0x210804u: goto label_210804;
        case 0x210808u: goto label_210808;
        case 0x21080cu: goto label_21080c;
        case 0x210810u: goto label_210810;
        case 0x210814u: goto label_210814;
        case 0x210818u: goto label_210818;
        case 0x21081cu: goto label_21081c;
        case 0x210820u: goto label_210820;
        case 0x210824u: goto label_210824;
        case 0x210828u: goto label_210828;
        case 0x21082cu: goto label_21082c;
        case 0x210830u: goto label_210830;
        case 0x210834u: goto label_210834;
        case 0x210838u: goto label_210838;
        case 0x21083cu: goto label_21083c;
        case 0x210840u: goto label_210840;
        case 0x210844u: goto label_210844;
        case 0x210848u: goto label_210848;
        case 0x21084cu: goto label_21084c;
        case 0x210850u: goto label_210850;
        case 0x210854u: goto label_210854;
        case 0x210858u: goto label_210858;
        case 0x21085cu: goto label_21085c;
        case 0x210860u: goto label_210860;
        case 0x210864u: goto label_210864;
        case 0x210868u: goto label_210868;
        case 0x21086cu: goto label_21086c;
        case 0x210870u: goto label_210870;
        case 0x210874u: goto label_210874;
        case 0x210878u: goto label_210878;
        case 0x21087cu: goto label_21087c;
        case 0x210880u: goto label_210880;
        case 0x210884u: goto label_210884;
        case 0x210888u: goto label_210888;
        case 0x21088cu: goto label_21088c;
        case 0x210890u: goto label_210890;
        case 0x210894u: goto label_210894;
        case 0x210898u: goto label_210898;
        case 0x21089cu: goto label_21089c;
        case 0x2108a0u: goto label_2108a0;
        case 0x2108a4u: goto label_2108a4;
        case 0x2108a8u: goto label_2108a8;
        case 0x2108acu: goto label_2108ac;
        case 0x2108b0u: goto label_2108b0;
        case 0x2108b4u: goto label_2108b4;
        case 0x2108b8u: goto label_2108b8;
        case 0x2108bcu: goto label_2108bc;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108c4u: goto label_2108c4;
        case 0x2108c8u: goto label_2108c8;
        case 0x2108ccu: goto label_2108cc;
        case 0x2108d0u: goto label_2108d0;
        case 0x2108d4u: goto label_2108d4;
        case 0x2108d8u: goto label_2108d8;
        case 0x2108dcu: goto label_2108dc;
        case 0x2108e0u: goto label_2108e0;
        case 0x2108e4u: goto label_2108e4;
        case 0x2108e8u: goto label_2108e8;
        case 0x2108ecu: goto label_2108ec;
        case 0x2108f0u: goto label_2108f0;
        case 0x2108f4u: goto label_2108f4;
        case 0x2108f8u: goto label_2108f8;
        case 0x2108fcu: goto label_2108fc;
        case 0x210900u: goto label_210900;
        case 0x210904u: goto label_210904;
        case 0x210908u: goto label_210908;
        case 0x21090cu: goto label_21090c;
        case 0x210910u: goto label_210910;
        case 0x210914u: goto label_210914;
        case 0x210918u: goto label_210918;
        case 0x21091cu: goto label_21091c;
        case 0x210920u: goto label_210920;
        case 0x210924u: goto label_210924;
        case 0x210928u: goto label_210928;
        case 0x21092cu: goto label_21092c;
        case 0x210930u: goto label_210930;
        case 0x210934u: goto label_210934;
        case 0x210938u: goto label_210938;
        case 0x21093cu: goto label_21093c;
        case 0x210940u: goto label_210940;
        case 0x210944u: goto label_210944;
        case 0x210948u: goto label_210948;
        case 0x21094cu: goto label_21094c;
        case 0x210950u: goto label_210950;
        case 0x210954u: goto label_210954;
        case 0x210958u: goto label_210958;
        case 0x21095cu: goto label_21095c;
        case 0x210960u: goto label_210960;
        case 0x210964u: goto label_210964;
        case 0x210968u: goto label_210968;
        case 0x21096cu: goto label_21096c;
        case 0x210970u: goto label_210970;
        case 0x210974u: goto label_210974;
        case 0x210978u: goto label_210978;
        case 0x21097cu: goto label_21097c;
        case 0x210980u: goto label_210980;
        case 0x210984u: goto label_210984;
        case 0x210988u: goto label_210988;
        case 0x21098cu: goto label_21098c;
        case 0x210990u: goto label_210990;
        case 0x210994u: goto label_210994;
        case 0x210998u: goto label_210998;
        case 0x21099cu: goto label_21099c;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109a4u: goto label_2109a4;
        case 0x2109a8u: goto label_2109a8;
        case 0x2109acu: goto label_2109ac;
        case 0x2109b0u: goto label_2109b0;
        case 0x2109b4u: goto label_2109b4;
        case 0x2109b8u: goto label_2109b8;
        case 0x2109bcu: goto label_2109bc;
        case 0x2109c0u: goto label_2109c0;
        case 0x2109c4u: goto label_2109c4;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109ccu: goto label_2109cc;
        case 0x2109d0u: goto label_2109d0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109dcu: goto label_2109dc;
        case 0x2109e0u: goto label_2109e0;
        case 0x2109e4u: goto label_2109e4;
        case 0x2109e8u: goto label_2109e8;
        case 0x2109ecu: goto label_2109ec;
        case 0x2109f0u: goto label_2109f0;
        case 0x2109f4u: goto label_2109f4;
        case 0x2109f8u: goto label_2109f8;
        case 0x2109fcu: goto label_2109fc;
        case 0x210a00u: goto label_210a00;
        case 0x210a04u: goto label_210a04;
        case 0x210a08u: goto label_210a08;
        case 0x210a0cu: goto label_210a0c;
        case 0x210a10u: goto label_210a10;
        case 0x210a14u: goto label_210a14;
        case 0x210a18u: goto label_210a18;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b70u: goto label_210b70;
        case 0x210b74u: goto label_210b74;
        case 0x210b78u: goto label_210b78;
        case 0x210b7cu: goto label_210b7c;
        case 0x210b80u: goto label_210b80;
        case 0x210b84u: goto label_210b84;
        case 0x210b88u: goto label_210b88;
        case 0x210b8cu: goto label_210b8c;
        case 0x210b90u: goto label_210b90;
        case 0x210b94u: goto label_210b94;
        case 0x210b98u: goto label_210b98;
        case 0x210b9cu: goto label_210b9c;
        case 0x210ba0u: goto label_210ba0;
        case 0x210ba4u: goto label_210ba4;
        case 0x210ba8u: goto label_210ba8;
        case 0x210bacu: goto label_210bac;
        case 0x210bb0u: goto label_210bb0;
        case 0x210bb4u: goto label_210bb4;
        case 0x210bb8u: goto label_210bb8;
        case 0x210bbcu: goto label_210bbc;
        case 0x210bc0u: goto label_210bc0;
        case 0x210bc4u: goto label_210bc4;
        case 0x210bc8u: goto label_210bc8;
        case 0x210bccu: goto label_210bcc;
        case 0x210bd0u: goto label_210bd0;
        case 0x210bd4u: goto label_210bd4;
        case 0x210bd8u: goto label_210bd8;
        case 0x210bdcu: goto label_210bdc;
        case 0x210be0u: goto label_210be0;
        case 0x210be4u: goto label_210be4;
        case 0x210be8u: goto label_210be8;
        case 0x210becu: goto label_210bec;
        case 0x210bf0u: goto label_210bf0;
        case 0x210bf4u: goto label_210bf4;
        case 0x210bf8u: goto label_210bf8;
        case 0x210bfcu: goto label_210bfc;
        case 0x210c00u: goto label_210c00;
        case 0x210c04u: goto label_210c04;
        case 0x210c08u: goto label_210c08;
        case 0x210c0cu: goto label_210c0c;
        case 0x210c10u: goto label_210c10;
        case 0x210c14u: goto label_210c14;
        case 0x210c18u: goto label_210c18;
        case 0x210c1cu: goto label_210c1c;
        case 0x210c20u: goto label_210c20;
        case 0x210c24u: goto label_210c24;
        case 0x210c28u: goto label_210c28;
        case 0x210c2cu: goto label_210c2c;
        case 0x210c30u: goto label_210c30;
        case 0x210c34u: goto label_210c34;
        case 0x210c38u: goto label_210c38;
        case 0x210c3cu: goto label_210c3c;
        case 0x210c40u: goto label_210c40;
        case 0x210c44u: goto label_210c44;
        case 0x210c48u: goto label_210c48;
        case 0x210c4cu: goto label_210c4c;
        case 0x210c50u: goto label_210c50;
        case 0x210c54u: goto label_210c54;
        case 0x210c58u: goto label_210c58;
        case 0x210c5cu: goto label_210c5c;
        case 0x210c60u: goto label_210c60;
        case 0x210c64u: goto label_210c64;
        case 0x210c68u: goto label_210c68;
        case 0x210c6cu: goto label_210c6c;
        case 0x210c70u: goto label_210c70;
        case 0x210c74u: goto label_210c74;
        case 0x210c78u: goto label_210c78;
        case 0x210c7cu: goto label_210c7c;
        case 0x210c80u: goto label_210c80;
        case 0x210c84u: goto label_210c84;
        case 0x210c88u: goto label_210c88;
        case 0x210c8cu: goto label_210c8c;
        case 0x210c90u: goto label_210c90;
        case 0x210c94u: goto label_210c94;
        case 0x210c98u: goto label_210c98;
        case 0x210c9cu: goto label_210c9c;
        case 0x210ca0u: goto label_210ca0;
        case 0x210ca4u: goto label_210ca4;
        case 0x210ca8u: goto label_210ca8;
        case 0x210cacu: goto label_210cac;
        case 0x210cb0u: goto label_210cb0;
        case 0x210cb4u: goto label_210cb4;
        case 0x210cb8u: goto label_210cb8;
        case 0x210cbcu: goto label_210cbc;
        case 0x210cc0u: goto label_210cc0;
        case 0x210cc4u: goto label_210cc4;
        case 0x210cc8u: goto label_210cc8;
        case 0x210cccu: goto label_210ccc;
        case 0x210cd0u: goto label_210cd0;
        case 0x210cd4u: goto label_210cd4;
        case 0x210cd8u: goto label_210cd8;
        case 0x210cdcu: goto label_210cdc;
        case 0x210ce0u: goto label_210ce0;
        case 0x210ce4u: goto label_210ce4;
        case 0x210ce8u: goto label_210ce8;
        case 0x210cecu: goto label_210cec;
        case 0x210cf0u: goto label_210cf0;
        case 0x210cf4u: goto label_210cf4;
        case 0x210cf8u: goto label_210cf8;
        case 0x210cfcu: goto label_210cfc;
        case 0x210d00u: goto label_210d00;
        case 0x210d04u: goto label_210d04;
        case 0x210d08u: goto label_210d08;
        case 0x210d0cu: goto label_210d0c;
        case 0x210d10u: goto label_210d10;
        case 0x210d14u: goto label_210d14;
        case 0x210d18u: goto label_210d18;
        case 0x210d1cu: goto label_210d1c;
        case 0x210d20u: goto label_210d20;
        case 0x210d24u: goto label_210d24;
        case 0x210d28u: goto label_210d28;
        case 0x210d2cu: goto label_210d2c;
        case 0x210d30u: goto label_210d30;
        case 0x210d34u: goto label_210d34;
        case 0x210d38u: goto label_210d38;
        case 0x210d3cu: goto label_210d3c;
        case 0x210d40u: goto label_210d40;
        case 0x210d44u: goto label_210d44;
        case 0x210d48u: goto label_210d48;
        case 0x210d4cu: goto label_210d4c;
        case 0x210d50u: goto label_210d50;
        case 0x210d54u: goto label_210d54;
        case 0x210d58u: goto label_210d58;
        case 0x210d5cu: goto label_210d5c;
        case 0x210d60u: goto label_210d60;
        case 0x210d64u: goto label_210d64;
        case 0x210d68u: goto label_210d68;
        case 0x210d6cu: goto label_210d6c;
        case 0x210d70u: goto label_210d70;
        case 0x210d74u: goto label_210d74;
        case 0x210d78u: goto label_210d78;
        case 0x210d7cu: goto label_210d7c;
        case 0x210d80u: goto label_210d80;
        case 0x210d84u: goto label_210d84;
        case 0x210d88u: goto label_210d88;
        case 0x210d8cu: goto label_210d8c;
        case 0x210d90u: goto label_210d90;
        case 0x210d94u: goto label_210d94;
        case 0x210d98u: goto label_210d98;
        case 0x210d9cu: goto label_210d9c;
        case 0x210da0u: goto label_210da0;
        case 0x210da4u: goto label_210da4;
        case 0x210da8u: goto label_210da8;
        case 0x210dacu: goto label_210dac;
        case 0x210db0u: goto label_210db0;
        case 0x210db4u: goto label_210db4;
        case 0x210db8u: goto label_210db8;
        case 0x210dbcu: goto label_210dbc;
        case 0x210dc0u: goto label_210dc0;
        case 0x210dc4u: goto label_210dc4;
        case 0x210dc8u: goto label_210dc8;
        case 0x210dccu: goto label_210dcc;
        case 0x210dd0u: goto label_210dd0;
        case 0x210dd4u: goto label_210dd4;
        case 0x210dd8u: goto label_210dd8;
        case 0x210ddcu: goto label_210ddc;
        case 0x210de0u: goto label_210de0;
        case 0x210de4u: goto label_210de4;
        case 0x210de8u: goto label_210de8;
        case 0x210decu: goto label_210dec;
        case 0x210df0u: goto label_210df0;
        case 0x210df4u: goto label_210df4;
        case 0x210df8u: goto label_210df8;
        case 0x210dfcu: goto label_210dfc;
        case 0x210e00u: goto label_210e00;
        case 0x210e04u: goto label_210e04;
        case 0x210e08u: goto label_210e08;
        case 0x210e0cu: goto label_210e0c;
        case 0x210e10u: goto label_210e10;
        case 0x210e14u: goto label_210e14;
        case 0x210e18u: goto label_210e18;
        case 0x210e1cu: goto label_210e1c;
        case 0x210e20u: goto label_210e20;
        case 0x210e24u: goto label_210e24;
        case 0x210e28u: goto label_210e28;
        case 0x210e2cu: goto label_210e2c;
        case 0x210e30u: goto label_210e30;
        case 0x210e34u: goto label_210e34;
        case 0x210e38u: goto label_210e38;
        case 0x210e3cu: goto label_210e3c;
        case 0x210e40u: goto label_210e40;
        case 0x210e44u: goto label_210e44;
        case 0x210e48u: goto label_210e48;
        case 0x210e4cu: goto label_210e4c;
        case 0x210e50u: goto label_210e50;
        case 0x210e54u: goto label_210e54;
        case 0x210e58u: goto label_210e58;
        case 0x210e5cu: goto label_210e5c;
        case 0x210e60u: goto label_210e60;
        case 0x210e64u: goto label_210e64;
        case 0x210e68u: goto label_210e68;
        case 0x210e6cu: goto label_210e6c;
        case 0x210e70u: goto label_210e70;
        case 0x210e74u: goto label_210e74;
        case 0x210e78u: goto label_210e78;
        case 0x210e7cu: goto label_210e7c;
        case 0x210e80u: goto label_210e80;
        case 0x210e84u: goto label_210e84;
        case 0x210e88u: goto label_210e88;
        case 0x210e8cu: goto label_210e8c;
        case 0x210e90u: goto label_210e90;
        case 0x210e94u: goto label_210e94;
        case 0x210e98u: goto label_210e98;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ea0u: goto label_210ea0;
        case 0x210ea4u: goto label_210ea4;
        case 0x210ea8u: goto label_210ea8;
        case 0x210eacu: goto label_210eac;
        case 0x210eb0u: goto label_210eb0;
        case 0x210eb4u: goto label_210eb4;
        case 0x210eb8u: goto label_210eb8;
        case 0x210ebcu: goto label_210ebc;
        case 0x210ec0u: goto label_210ec0;
        case 0x210ec4u: goto label_210ec4;
        case 0x210ec8u: goto label_210ec8;
        case 0x210eccu: goto label_210ecc;
        case 0x210ed0u: goto label_210ed0;
        case 0x210ed4u: goto label_210ed4;
        case 0x210ed8u: goto label_210ed8;
        case 0x210edcu: goto label_210edc;
        case 0x210ee0u: goto label_210ee0;
        case 0x210ee4u: goto label_210ee4;
        case 0x210ee8u: goto label_210ee8;
        case 0x210eecu: goto label_210eec;
        case 0x210ef0u: goto label_210ef0;
        case 0x210ef4u: goto label_210ef4;
        case 0x210ef8u: goto label_210ef8;
        case 0x210efcu: goto label_210efc;
        case 0x210f00u: goto label_210f00;
        case 0x210f04u: goto label_210f04;
        case 0x210f08u: goto label_210f08;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f10u: goto label_210f10;
        case 0x210f14u: goto label_210f14;
        case 0x210f18u: goto label_210f18;
        case 0x210f1cu: goto label_210f1c;
        case 0x210f20u: goto label_210f20;
        case 0x210f24u: goto label_210f24;
        case 0x210f28u: goto label_210f28;
        case 0x210f2cu: goto label_210f2c;
        case 0x210f30u: goto label_210f30;
        case 0x210f34u: goto label_210f34;
        case 0x210f38u: goto label_210f38;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f40u: goto label_210f40;
        case 0x210f44u: goto label_210f44;
        case 0x210f48u: goto label_210f48;
        case 0x210f4cu: goto label_210f4c;
        case 0x210f50u: goto label_210f50;
        case 0x210f54u: goto label_210f54;
        case 0x210f58u: goto label_210f58;
        case 0x210f5cu: goto label_210f5c;
        case 0x210f60u: goto label_210f60;
        case 0x210f64u: goto label_210f64;
        case 0x210f68u: goto label_210f68;
        case 0x210f6cu: goto label_210f6c;
        case 0x210f70u: goto label_210f70;
        case 0x210f74u: goto label_210f74;
        case 0x210f78u: goto label_210f78;
        case 0x210f7cu: goto label_210f7c;
        case 0x210f80u: goto label_210f80;
        case 0x210f84u: goto label_210f84;
        case 0x210f88u: goto label_210f88;
        case 0x210f8cu: goto label_210f8c;
        case 0x210f90u: goto label_210f90;
        case 0x210f94u: goto label_210f94;
        case 0x210f98u: goto label_210f98;
        case 0x210f9cu: goto label_210f9c;
        case 0x210fa0u: goto label_210fa0;
        case 0x210fa4u: goto label_210fa4;
        case 0x210fa8u: goto label_210fa8;
        case 0x210facu: goto label_210fac;
        case 0x210fb0u: goto label_210fb0;
        case 0x210fb4u: goto label_210fb4;
        case 0x210fb8u: goto label_210fb8;
        case 0x210fbcu: goto label_210fbc;
        case 0x210fc0u: goto label_210fc0;
        case 0x210fc4u: goto label_210fc4;
        case 0x210fc8u: goto label_210fc8;
        case 0x210fccu: goto label_210fcc;
        case 0x210fd0u: goto label_210fd0;
        case 0x210fd4u: goto label_210fd4;
        case 0x210fd8u: goto label_210fd8;
        case 0x210fdcu: goto label_210fdc;
        case 0x210fe0u: goto label_210fe0;
        case 0x210fe4u: goto label_210fe4;
        case 0x210fe8u: goto label_210fe8;
        case 0x210fecu: goto label_210fec;
        case 0x210ff0u: goto label_210ff0;
        case 0x210ff4u: goto label_210ff4;
        case 0x210ff8u: goto label_210ff8;
        case 0x210ffcu: goto label_210ffc;
        case 0x211000u: goto label_211000;
        case 0x211004u: goto label_211004;
        case 0x211008u: goto label_211008;
        case 0x21100cu: goto label_21100c;
        case 0x211010u: goto label_211010;
        case 0x211014u: goto label_211014;
        case 0x211018u: goto label_211018;
        case 0x21101cu: goto label_21101c;
        case 0x211020u: goto label_211020;
        case 0x211024u: goto label_211024;
        case 0x211028u: goto label_211028;
        case 0x21102cu: goto label_21102c;
        case 0x211030u: goto label_211030;
        case 0x211034u: goto label_211034;
        case 0x211038u: goto label_211038;
        case 0x21103cu: goto label_21103c;
        case 0x211040u: goto label_211040;
        case 0x211044u: goto label_211044;
        case 0x211048u: goto label_211048;
        case 0x21104cu: goto label_21104c;
        case 0x211050u: goto label_211050;
        case 0x211054u: goto label_211054;
        case 0x211058u: goto label_211058;
        case 0x21105cu: goto label_21105c;
        case 0x211060u: goto label_211060;
        case 0x211064u: goto label_211064;
        case 0x211068u: goto label_211068;
        case 0x21106cu: goto label_21106c;
        case 0x211070u: goto label_211070;
        case 0x211074u: goto label_211074;
        case 0x211078u: goto label_211078;
        case 0x21107cu: goto label_21107c;
        case 0x211080u: goto label_211080;
        case 0x211084u: goto label_211084;
        case 0x211088u: goto label_211088;
        case 0x21108cu: goto label_21108c;
        case 0x211090u: goto label_211090;
        case 0x211094u: goto label_211094;
        case 0x211098u: goto label_211098;
        case 0x21109cu: goto label_21109c;
        case 0x2110a0u: goto label_2110a0;
        case 0x2110a4u: goto label_2110a4;
        case 0x2110a8u: goto label_2110a8;
        case 0x2110acu: goto label_2110ac;
        case 0x2110b0u: goto label_2110b0;
        case 0x2110b4u: goto label_2110b4;
        case 0x2110b8u: goto label_2110b8;
        case 0x2110bcu: goto label_2110bc;
        case 0x2110c0u: goto label_2110c0;
        case 0x2110c4u: goto label_2110c4;
        case 0x2110c8u: goto label_2110c8;
        case 0x2110ccu: goto label_2110cc;
        case 0x2110d0u: goto label_2110d0;
        case 0x2110d4u: goto label_2110d4;
        case 0x2110d8u: goto label_2110d8;
        case 0x2110dcu: goto label_2110dc;
        case 0x2110e0u: goto label_2110e0;
        case 0x2110e4u: goto label_2110e4;
        case 0x2110e8u: goto label_2110e8;
        case 0x2110ecu: goto label_2110ec;
        case 0x2110f0u: goto label_2110f0;
        case 0x2110f4u: goto label_2110f4;
        case 0x2110f8u: goto label_2110f8;
        case 0x2110fcu: goto label_2110fc;
        case 0x211100u: goto label_211100;
        case 0x211104u: goto label_211104;
        case 0x211108u: goto label_211108;
        case 0x21110cu: goto label_21110c;
        case 0x211110u: goto label_211110;
        case 0x211114u: goto label_211114;
        case 0x211118u: goto label_211118;
        case 0x21111cu: goto label_21111c;
        case 0x211120u: goto label_211120;
        case 0x211124u: goto label_211124;
        case 0x211128u: goto label_211128;
        case 0x21112cu: goto label_21112c;
        case 0x211130u: goto label_211130;
        case 0x211134u: goto label_211134;
        case 0x211138u: goto label_211138;
        case 0x21113cu: goto label_21113c;
        case 0x211140u: goto label_211140;
        case 0x211144u: goto label_211144;
        case 0x211148u: goto label_211148;
        case 0x21114cu: goto label_21114c;
        case 0x211150u: goto label_211150;
        case 0x211154u: goto label_211154;
        case 0x211158u: goto label_211158;
        case 0x21115cu: goto label_21115c;
        case 0x211160u: goto label_211160;
        case 0x211164u: goto label_211164;
        case 0x211168u: goto label_211168;
        case 0x21116cu: goto label_21116c;
        case 0x211170u: goto label_211170;
        case 0x211174u: goto label_211174;
        case 0x211178u: goto label_211178;
        case 0x21117cu: goto label_21117c;
        case 0x211180u: goto label_211180;
        case 0x211184u: goto label_211184;
        case 0x211188u: goto label_211188;
        case 0x21118cu: goto label_21118c;
        case 0x211190u: goto label_211190;
        case 0x211194u: goto label_211194;
        case 0x211198u: goto label_211198;
        case 0x21119cu: goto label_21119c;
        case 0x2111a0u: goto label_2111a0;
        case 0x2111a4u: goto label_2111a4;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111acu: goto label_2111ac;
        case 0x2111b0u: goto label_2111b0;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111b8u: goto label_2111b8;
        case 0x2111bcu: goto label_2111bc;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111c4u: goto label_2111c4;
        case 0x2111c8u: goto label_2111c8;
        case 0x2111ccu: goto label_2111cc;
        case 0x2111d0u: goto label_2111d0;
        case 0x2111d4u: goto label_2111d4;
        case 0x2111d8u: goto label_2111d8;
        case 0x2111dcu: goto label_2111dc;
        case 0x2111e0u: goto label_2111e0;
        case 0x2111e4u: goto label_2111e4;
        case 0x2111e8u: goto label_2111e8;
        case 0x2111ecu: goto label_2111ec;
        case 0x2111f0u: goto label_2111f0;
        case 0x2111f4u: goto label_2111f4;
        case 0x2111f8u: goto label_2111f8;
        case 0x2111fcu: goto label_2111fc;
        case 0x211200u: goto label_211200;
        case 0x211204u: goto label_211204;
        case 0x211208u: goto label_211208;
        case 0x21120cu: goto label_21120c;
        case 0x211210u: goto label_211210;
        case 0x211214u: goto label_211214;
        case 0x211218u: goto label_211218;
        case 0x21121cu: goto label_21121c;
        case 0x211220u: goto label_211220;
        case 0x211224u: goto label_211224;
        case 0x211228u: goto label_211228;
        case 0x21122cu: goto label_21122c;
        case 0x211230u: goto label_211230;
        case 0x211234u: goto label_211234;
        case 0x211238u: goto label_211238;
        case 0x21123cu: goto label_21123c;
        case 0x211240u: goto label_211240;
        case 0x211244u: goto label_211244;
        case 0x211248u: goto label_211248;
        case 0x21124cu: goto label_21124c;
        case 0x211250u: goto label_211250;
        case 0x211254u: goto label_211254;
        case 0x211258u: goto label_211258;
        case 0x21125cu: goto label_21125c;
        case 0x211260u: goto label_211260;
        case 0x211264u: goto label_211264;
        case 0x211268u: goto label_211268;
        case 0x21126cu: goto label_21126c;
        case 0x211270u: goto label_211270;
        case 0x211274u: goto label_211274;
        case 0x211278u: goto label_211278;
        case 0x21127cu: goto label_21127c;
        case 0x211280u: goto label_211280;
        case 0x211284u: goto label_211284;
        case 0x211288u: goto label_211288;
        case 0x21128cu: goto label_21128c;
        case 0x211290u: goto label_211290;
        case 0x211294u: goto label_211294;
        case 0x211298u: goto label_211298;
        case 0x21129cu: goto label_21129c;
        case 0x2112a0u: goto label_2112a0;
        case 0x2112a4u: goto label_2112a4;
        case 0x2112a8u: goto label_2112a8;
        case 0x2112acu: goto label_2112ac;
        case 0x2112b0u: goto label_2112b0;
        case 0x2112b4u: goto label_2112b4;
        case 0x2112b8u: goto label_2112b8;
        case 0x2112bcu: goto label_2112bc;
        case 0x2112c0u: goto label_2112c0;
        case 0x2112c4u: goto label_2112c4;
        case 0x2112c8u: goto label_2112c8;
        case 0x2112ccu: goto label_2112cc;
        case 0x2112d0u: goto label_2112d0;
        case 0x2112d4u: goto label_2112d4;
        case 0x2112d8u: goto label_2112d8;
        case 0x2112dcu: goto label_2112dc;
        case 0x2112e0u: goto label_2112e0;
        case 0x2112e4u: goto label_2112e4;
        case 0x2112e8u: goto label_2112e8;
        case 0x2112ecu: goto label_2112ec;
        case 0x2112f0u: goto label_2112f0;
        case 0x2112f4u: goto label_2112f4;
        case 0x2112f8u: goto label_2112f8;
        case 0x2112fcu: goto label_2112fc;
        case 0x211300u: goto label_211300;
        case 0x211304u: goto label_211304;
        case 0x211308u: goto label_211308;
        case 0x21130cu: goto label_21130c;
        case 0x211310u: goto label_211310;
        case 0x211314u: goto label_211314;
        case 0x211318u: goto label_211318;
        case 0x21131cu: goto label_21131c;
        case 0x211320u: goto label_211320;
        case 0x211324u: goto label_211324;
        case 0x211328u: goto label_211328;
        case 0x21132cu: goto label_21132c;
        case 0x211330u: goto label_211330;
        case 0x211334u: goto label_211334;
        case 0x211338u: goto label_211338;
        case 0x21133cu: goto label_21133c;
        case 0x211340u: goto label_211340;
        case 0x211344u: goto label_211344;
        case 0x211348u: goto label_211348;
        case 0x21134cu: goto label_21134c;
        case 0x211350u: goto label_211350;
        case 0x211354u: goto label_211354;
        case 0x211358u: goto label_211358;
        case 0x21135cu: goto label_21135c;
        case 0x211360u: goto label_211360;
        case 0x211364u: goto label_211364;
        case 0x211368u: goto label_211368;
        case 0x21136cu: goto label_21136c;
        case 0x211370u: goto label_211370;
        case 0x211374u: goto label_211374;
        case 0x211378u: goto label_211378;
        case 0x21137cu: goto label_21137c;
        case 0x211380u: goto label_211380;
        case 0x211384u: goto label_211384;
        case 0x211388u: goto label_211388;
        case 0x21138cu: goto label_21138c;
        case 0x211390u: goto label_211390;
        case 0x211394u: goto label_211394;
        case 0x211398u: goto label_211398;
        case 0x21139cu: goto label_21139c;
        case 0x2113a0u: goto label_2113a0;
        case 0x2113a4u: goto label_2113a4;
        case 0x2113a8u: goto label_2113a8;
        case 0x2113acu: goto label_2113ac;
        case 0x2113b0u: goto label_2113b0;
        case 0x2113b4u: goto label_2113b4;
        case 0x2113b8u: goto label_2113b8;
        case 0x2113bcu: goto label_2113bc;
        case 0x2113c0u: goto label_2113c0;
        case 0x2113c4u: goto label_2113c4;
        case 0x2113c8u: goto label_2113c8;
        case 0x2113ccu: goto label_2113cc;
        case 0x2113d0u: goto label_2113d0;
        case 0x2113d4u: goto label_2113d4;
        case 0x2113d8u: goto label_2113d8;
        case 0x2113dcu: goto label_2113dc;
        case 0x2113e0u: goto label_2113e0;
        case 0x2113e4u: goto label_2113e4;
        case 0x2113e8u: goto label_2113e8;
        case 0x2113ecu: goto label_2113ec;
        case 0x2113f0u: goto label_2113f0;
        case 0x2113f4u: goto label_2113f4;
        case 0x2113f8u: goto label_2113f8;
        case 0x2113fcu: goto label_2113fc;
        case 0x211400u: goto label_211400;
        case 0x211404u: goto label_211404;
        case 0x211408u: goto label_211408;
        case 0x21140cu: goto label_21140c;
        case 0x211410u: goto label_211410;
        case 0x211414u: goto label_211414;
        case 0x211418u: goto label_211418;
        case 0x21141cu: goto label_21141c;
        case 0x211420u: goto label_211420;
        case 0x211424u: goto label_211424;
        case 0x211428u: goto label_211428;
        case 0x21142cu: goto label_21142c;
        case 0x211430u: goto label_211430;
        case 0x211434u: goto label_211434;
        case 0x211438u: goto label_211438;
        case 0x21143cu: goto label_21143c;
        case 0x211440u: goto label_211440;
        case 0x211444u: goto label_211444;
        case 0x211448u: goto label_211448;
        case 0x21144cu: goto label_21144c;
        case 0x211450u: goto label_211450;
        case 0x211454u: goto label_211454;
        case 0x211458u: goto label_211458;
        case 0x21145cu: goto label_21145c;
        case 0x211460u: goto label_211460;
        case 0x211464u: goto label_211464;
        case 0x211468u: goto label_211468;
        case 0x21146cu: goto label_21146c;
        case 0x211470u: goto label_211470;
        case 0x211474u: goto label_211474;
        case 0x211478u: goto label_211478;
        case 0x21147cu: goto label_21147c;
        case 0x211480u: goto label_211480;
        case 0x211484u: goto label_211484;
        case 0x211488u: goto label_211488;
        case 0x21148cu: goto label_21148c;
        case 0x211490u: goto label_211490;
        case 0x211494u: goto label_211494;
        case 0x211498u: goto label_211498;
        case 0x21149cu: goto label_21149c;
        case 0x2114a0u: goto label_2114a0;
        case 0x2114a4u: goto label_2114a4;
        case 0x2114a8u: goto label_2114a8;
        case 0x2114acu: goto label_2114ac;
        case 0x2114b0u: goto label_2114b0;
        case 0x2114b4u: goto label_2114b4;
        case 0x2114b8u: goto label_2114b8;
        case 0x2114bcu: goto label_2114bc;
        case 0x2114c0u: goto label_2114c0;
        case 0x2114c4u: goto label_2114c4;
        case 0x2114c8u: goto label_2114c8;
        case 0x2114ccu: goto label_2114cc;
        case 0x2114d0u: goto label_2114d0;
        case 0x2114d4u: goto label_2114d4;
        case 0x2114d8u: goto label_2114d8;
        case 0x2114dcu: goto label_2114dc;
        case 0x2114e0u: goto label_2114e0;
        case 0x2114e4u: goto label_2114e4;
        case 0x2114e8u: goto label_2114e8;
        case 0x2114ecu: goto label_2114ec;
        case 0x2114f0u: goto label_2114f0;
        case 0x2114f4u: goto label_2114f4;
        case 0x2114f8u: goto label_2114f8;
        case 0x2114fcu: goto label_2114fc;
        case 0x211500u: goto label_211500;
        case 0x211504u: goto label_211504;
        case 0x211508u: goto label_211508;
        case 0x21150cu: goto label_21150c;
        case 0x211510u: goto label_211510;
        case 0x211514u: goto label_211514;
        case 0x211518u: goto label_211518;
        case 0x21151cu: goto label_21151c;
        case 0x211520u: goto label_211520;
        case 0x211524u: goto label_211524;
        case 0x211528u: goto label_211528;
        case 0x21152cu: goto label_21152c;
        case 0x211530u: goto label_211530;
        case 0x211534u: goto label_211534;
        case 0x211538u: goto label_211538;
        case 0x21153cu: goto label_21153c;
        case 0x211540u: goto label_211540;
        case 0x211544u: goto label_211544;
        case 0x211548u: goto label_211548;
        case 0x21154cu: goto label_21154c;
        case 0x211550u: goto label_211550;
        case 0x211554u: goto label_211554;
        case 0x211558u: goto label_211558;
        case 0x21155cu: goto label_21155c;
        case 0x211560u: goto label_211560;
        case 0x211564u: goto label_211564;
        case 0x211568u: goto label_211568;
        case 0x21156cu: goto label_21156c;
        case 0x211570u: goto label_211570;
        case 0x211574u: goto label_211574;
        case 0x211578u: goto label_211578;
        case 0x21157cu: goto label_21157c;
        case 0x211580u: goto label_211580;
        case 0x211584u: goto label_211584;
        case 0x211588u: goto label_211588;
        case 0x21158cu: goto label_21158c;
        case 0x211590u: goto label_211590;
        case 0x211594u: goto label_211594;
        case 0x211598u: goto label_211598;
        case 0x21159cu: goto label_21159c;
        case 0x2115a0u: goto label_2115a0;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115a8u: goto label_2115a8;
        case 0x2115acu: goto label_2115ac;
        case 0x2115b0u: goto label_2115b0;
        case 0x2115b4u: goto label_2115b4;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115bcu: goto label_2115bc;
        case 0x2115c0u: goto label_2115c0;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115c8u: goto label_2115c8;
        case 0x2115ccu: goto label_2115cc;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d4u: goto label_2115d4;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115dcu: goto label_2115dc;
        case 0x2115e0u: goto label_2115e0;
        case 0x2115e4u: goto label_2115e4;
        case 0x2115e8u: goto label_2115e8;
        case 0x2115ecu: goto label_2115ec;
        case 0x2115f0u: goto label_2115f0;
        case 0x2115f4u: goto label_2115f4;
        case 0x2115f8u: goto label_2115f8;
        case 0x2115fcu: goto label_2115fc;
        case 0x211600u: goto label_211600;
        case 0x211604u: goto label_211604;
        case 0x211608u: goto label_211608;
        case 0x21160cu: goto label_21160c;
        case 0x211610u: goto label_211610;
        case 0x211614u: goto label_211614;
        case 0x211618u: goto label_211618;
        case 0x21161cu: goto label_21161c;
        case 0x211620u: goto label_211620;
        case 0x211624u: goto label_211624;
        case 0x211628u: goto label_211628;
        case 0x21162cu: goto label_21162c;
        case 0x211630u: goto label_211630;
        case 0x211634u: goto label_211634;
        case 0x211638u: goto label_211638;
        case 0x21163cu: goto label_21163c;
        case 0x211640u: goto label_211640;
        case 0x211644u: goto label_211644;
        case 0x211648u: goto label_211648;
        case 0x21164cu: goto label_21164c;
        case 0x211650u: goto label_211650;
        case 0x211654u: goto label_211654;
        case 0x211658u: goto label_211658;
        case 0x21165cu: goto label_21165c;
        case 0x211660u: goto label_211660;
        case 0x211664u: goto label_211664;
        case 0x211668u: goto label_211668;
        case 0x21166cu: goto label_21166c;
        case 0x211670u: goto label_211670;
        case 0x211674u: goto label_211674;
        case 0x211678u: goto label_211678;
        case 0x21167cu: goto label_21167c;
        case 0x211680u: goto label_211680;
        case 0x211684u: goto label_211684;
        case 0x211688u: goto label_211688;
        case 0x21168cu: goto label_21168c;
        case 0x211690u: goto label_211690;
        case 0x211694u: goto label_211694;
        case 0x211698u: goto label_211698;
        case 0x21169cu: goto label_21169c;
        case 0x2116a0u: goto label_2116a0;
        case 0x2116a4u: goto label_2116a4;
        case 0x2116a8u: goto label_2116a8;
        case 0x2116acu: goto label_2116ac;
        case 0x2116b0u: goto label_2116b0;
        case 0x2116b4u: goto label_2116b4;
        case 0x2116b8u: goto label_2116b8;
        case 0x2116bcu: goto label_2116bc;
        case 0x2116c0u: goto label_2116c0;
        case 0x2116c4u: goto label_2116c4;
        case 0x2116c8u: goto label_2116c8;
        case 0x2116ccu: goto label_2116cc;
        case 0x2116d0u: goto label_2116d0;
        case 0x2116d4u: goto label_2116d4;
        case 0x2116d8u: goto label_2116d8;
        case 0x2116dcu: goto label_2116dc;
        case 0x2116e0u: goto label_2116e0;
        case 0x2116e4u: goto label_2116e4;
        case 0x2116e8u: goto label_2116e8;
        case 0x2116ecu: goto label_2116ec;
        case 0x2116f0u: goto label_2116f0;
        case 0x2116f4u: goto label_2116f4;
        case 0x2116f8u: goto label_2116f8;
        case 0x2116fcu: goto label_2116fc;
        case 0x211700u: goto label_211700;
        case 0x211704u: goto label_211704;
        case 0x211708u: goto label_211708;
        case 0x21170cu: goto label_21170c;
        case 0x211710u: goto label_211710;
        case 0x211714u: goto label_211714;
        case 0x211718u: goto label_211718;
        case 0x21171cu: goto label_21171c;
        case 0x211720u: goto label_211720;
        case 0x211724u: goto label_211724;
        case 0x211728u: goto label_211728;
        case 0x21172cu: goto label_21172c;
        case 0x211730u: goto label_211730;
        case 0x211734u: goto label_211734;
        case 0x211738u: goto label_211738;
        case 0x21173cu: goto label_21173c;
        case 0x211740u: goto label_211740;
        case 0x211744u: goto label_211744;
        case 0x211748u: goto label_211748;
        case 0x21174cu: goto label_21174c;
        case 0x211750u: goto label_211750;
        case 0x211754u: goto label_211754;
        case 0x211758u: goto label_211758;
        case 0x21175cu: goto label_21175c;
        case 0x211760u: goto label_211760;
        case 0x211764u: goto label_211764;
        case 0x211768u: goto label_211768;
        case 0x21176cu: goto label_21176c;
        case 0x211770u: goto label_211770;
        case 0x211774u: goto label_211774;
        case 0x211778u: goto label_211778;
        case 0x21177cu: goto label_21177c;
        case 0x211780u: goto label_211780;
        case 0x211784u: goto label_211784;
        case 0x211788u: goto label_211788;
        case 0x21178cu: goto label_21178c;
        case 0x211790u: goto label_211790;
        case 0x211794u: goto label_211794;
        case 0x211798u: goto label_211798;
        case 0x21179cu: goto label_21179c;
        case 0x2117a0u: goto label_2117a0;
        case 0x2117a4u: goto label_2117a4;
        case 0x2117a8u: goto label_2117a8;
        case 0x2117acu: goto label_2117ac;
        case 0x2117b0u: goto label_2117b0;
        case 0x2117b4u: goto label_2117b4;
        case 0x2117b8u: goto label_2117b8;
        case 0x2117bcu: goto label_2117bc;
        case 0x2117c0u: goto label_2117c0;
        case 0x2117c4u: goto label_2117c4;
        case 0x2117c8u: goto label_2117c8;
        case 0x2117ccu: goto label_2117cc;
        case 0x2117d0u: goto label_2117d0;
        case 0x2117d4u: goto label_2117d4;
        case 0x2117d8u: goto label_2117d8;
        case 0x2117dcu: goto label_2117dc;
        case 0x2117e0u: goto label_2117e0;
        case 0x2117e4u: goto label_2117e4;
        case 0x2117e8u: goto label_2117e8;
        case 0x2117ecu: goto label_2117ec;
        case 0x2117f0u: goto label_2117f0;
        case 0x2117f4u: goto label_2117f4;
        case 0x2117f8u: goto label_2117f8;
        case 0x2117fcu: goto label_2117fc;
        case 0x211800u: goto label_211800;
        case 0x211804u: goto label_211804;
        case 0x211808u: goto label_211808;
        case 0x21180cu: goto label_21180c;
        case 0x211810u: goto label_211810;
        case 0x211814u: goto label_211814;
        case 0x211818u: goto label_211818;
        case 0x21181cu: goto label_21181c;
        case 0x211820u: goto label_211820;
        case 0x211824u: goto label_211824;
        case 0x211828u: goto label_211828;
        case 0x21182cu: goto label_21182c;
        case 0x211830u: goto label_211830;
        case 0x211834u: goto label_211834;
        case 0x211838u: goto label_211838;
        case 0x21183cu: goto label_21183c;
        case 0x211840u: goto label_211840;
        case 0x211844u: goto label_211844;
        case 0x211848u: goto label_211848;
        case 0x21184cu: goto label_21184c;
        case 0x211850u: goto label_211850;
        case 0x211854u: goto label_211854;
        case 0x211858u: goto label_211858;
        case 0x21185cu: goto label_21185c;
        case 0x211860u: goto label_211860;
        case 0x211864u: goto label_211864;
        case 0x211868u: goto label_211868;
        case 0x21186cu: goto label_21186c;
        case 0x211870u: goto label_211870;
        case 0x211874u: goto label_211874;
        case 0x211878u: goto label_211878;
        case 0x21187cu: goto label_21187c;
        case 0x211880u: goto label_211880;
        case 0x211884u: goto label_211884;
        case 0x211888u: goto label_211888;
        case 0x21188cu: goto label_21188c;
        case 0x211890u: goto label_211890;
        case 0x211894u: goto label_211894;
        case 0x211898u: goto label_211898;
        case 0x21189cu: goto label_21189c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118a8u: goto label_2118a8;
        case 0x2118acu: goto label_2118ac;
        case 0x2118b0u: goto label_2118b0;
        case 0x2118b4u: goto label_2118b4;
        case 0x2118b8u: goto label_2118b8;
        case 0x2118bcu: goto label_2118bc;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118c4u: goto label_2118c4;
        case 0x2118c8u: goto label_2118c8;
        case 0x2118ccu: goto label_2118cc;
        case 0x2118d0u: goto label_2118d0;
        case 0x2118d4u: goto label_2118d4;
        case 0x2118d8u: goto label_2118d8;
        case 0x2118dcu: goto label_2118dc;
        case 0x2118e0u: goto label_2118e0;
        case 0x2118e4u: goto label_2118e4;
        case 0x2118e8u: goto label_2118e8;
        case 0x2118ecu: goto label_2118ec;
        case 0x2118f0u: goto label_2118f0;
        case 0x2118f4u: goto label_2118f4;
        case 0x2118f8u: goto label_2118f8;
        case 0x2118fcu: goto label_2118fc;
        case 0x211900u: goto label_211900;
        case 0x211904u: goto label_211904;
        case 0x211908u: goto label_211908;
        case 0x21190cu: goto label_21190c;
        case 0x211910u: goto label_211910;
        case 0x211914u: goto label_211914;
        case 0x211918u: goto label_211918;
        case 0x21191cu: goto label_21191c;
        case 0x211920u: goto label_211920;
        case 0x211924u: goto label_211924;
        case 0x211928u: goto label_211928;
        case 0x21192cu: goto label_21192c;
        case 0x211930u: goto label_211930;
        case 0x211934u: goto label_211934;
        case 0x211938u: goto label_211938;
        case 0x21193cu: goto label_21193c;
        case 0x211940u: goto label_211940;
        case 0x211944u: goto label_211944;
        case 0x211948u: goto label_211948;
        case 0x21194cu: goto label_21194c;
        case 0x211950u: goto label_211950;
        case 0x211954u: goto label_211954;
        case 0x211958u: goto label_211958;
        case 0x21195cu: goto label_21195c;
        case 0x211960u: goto label_211960;
        case 0x211964u: goto label_211964;
        case 0x211968u: goto label_211968;
        case 0x21196cu: goto label_21196c;
        case 0x211970u: goto label_211970;
        case 0x211974u: goto label_211974;
        case 0x211978u: goto label_211978;
        case 0x21197cu: goto label_21197c;
        case 0x211980u: goto label_211980;
        case 0x211984u: goto label_211984;
        case 0x211988u: goto label_211988;
        case 0x21198cu: goto label_21198c;
        case 0x211990u: goto label_211990;
        case 0x211994u: goto label_211994;
        case 0x211998u: goto label_211998;
        case 0x21199cu: goto label_21199c;
        case 0x2119a0u: goto label_2119a0;
        case 0x2119a4u: goto label_2119a4;
        case 0x2119a8u: goto label_2119a8;
        case 0x2119acu: goto label_2119ac;
        case 0x2119b0u: goto label_2119b0;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119b8u: goto label_2119b8;
        case 0x2119bcu: goto label_2119bc;
        case 0x2119c0u: goto label_2119c0;
        case 0x2119c4u: goto label_2119c4;
        case 0x2119c8u: goto label_2119c8;
        case 0x2119ccu: goto label_2119cc;
        case 0x2119d0u: goto label_2119d0;
        case 0x2119d4u: goto label_2119d4;
        case 0x2119d8u: goto label_2119d8;
        case 0x2119dcu: goto label_2119dc;
        case 0x2119e0u: goto label_2119e0;
        case 0x2119e4u: goto label_2119e4;
        case 0x2119e8u: goto label_2119e8;
        case 0x2119ecu: goto label_2119ec;
        case 0x2119f0u: goto label_2119f0;
        case 0x2119f4u: goto label_2119f4;
        case 0x2119f8u: goto label_2119f8;
        case 0x2119fcu: goto label_2119fc;
        case 0x211a00u: goto label_211a00;
        case 0x211a04u: goto label_211a04;
        case 0x211a08u: goto label_211a08;
        case 0x211a0cu: goto label_211a0c;
        case 0x211a10u: goto label_211a10;
        case 0x211a14u: goto label_211a14;
        case 0x211a18u: goto label_211a18;
        case 0x211a1cu: goto label_211a1c;
        case 0x211a20u: goto label_211a20;
        case 0x211a24u: goto label_211a24;
        case 0x211a28u: goto label_211a28;
        case 0x211a2cu: goto label_211a2c;
        case 0x211a30u: goto label_211a30;
        case 0x211a34u: goto label_211a34;
        case 0x211a38u: goto label_211a38;
        case 0x211a3cu: goto label_211a3c;
        case 0x211a40u: goto label_211a40;
        case 0x211a44u: goto label_211a44;
        case 0x211a48u: goto label_211a48;
        case 0x211a4cu: goto label_211a4c;
        case 0x211a50u: goto label_211a50;
        case 0x211a54u: goto label_211a54;
        case 0x211a58u: goto label_211a58;
        case 0x211a5cu: goto label_211a5c;
        case 0x211a60u: goto label_211a60;
        case 0x211a64u: goto label_211a64;
        case 0x211a68u: goto label_211a68;
        case 0x211a6cu: goto label_211a6c;
        case 0x211a70u: goto label_211a70;
        case 0x211a74u: goto label_211a74;
        case 0x211a78u: goto label_211a78;
        case 0x211a7cu: goto label_211a7c;
        case 0x211a80u: goto label_211a80;
        case 0x211a84u: goto label_211a84;
        case 0x211a88u: goto label_211a88;
        case 0x211a8cu: goto label_211a8c;
        case 0x211a90u: goto label_211a90;
        case 0x211a94u: goto label_211a94;
        case 0x211a98u: goto label_211a98;
        case 0x211a9cu: goto label_211a9c;
        case 0x211aa0u: goto label_211aa0;
        case 0x211aa4u: goto label_211aa4;
        case 0x211aa8u: goto label_211aa8;
        case 0x211aacu: goto label_211aac;
        case 0x211ab0u: goto label_211ab0;
        case 0x211ab4u: goto label_211ab4;
        case 0x211ab8u: goto label_211ab8;
        case 0x211abcu: goto label_211abc;
        case 0x211ac0u: goto label_211ac0;
        case 0x211ac4u: goto label_211ac4;
        case 0x211ac8u: goto label_211ac8;
        case 0x211accu: goto label_211acc;
        case 0x211ad0u: goto label_211ad0;
        case 0x211ad4u: goto label_211ad4;
        case 0x211ad8u: goto label_211ad8;
        case 0x211adcu: goto label_211adc;
        case 0x211ae0u: goto label_211ae0;
        case 0x211ae4u: goto label_211ae4;
        case 0x211ae8u: goto label_211ae8;
        case 0x211aecu: goto label_211aec;
        case 0x211af0u: goto label_211af0;
        case 0x211af4u: goto label_211af4;
        case 0x211af8u: goto label_211af8;
        case 0x211afcu: goto label_211afc;
        case 0x211b00u: goto label_211b00;
        case 0x211b04u: goto label_211b04;
        case 0x211b08u: goto label_211b08;
        case 0x211b0cu: goto label_211b0c;
        case 0x211b10u: goto label_211b10;
        case 0x211b14u: goto label_211b14;
        case 0x211b18u: goto label_211b18;
        case 0x211b1cu: goto label_211b1c;
        case 0x211b20u: goto label_211b20;
        case 0x211b24u: goto label_211b24;
        case 0x211b28u: goto label_211b28;
        case 0x211b2cu: goto label_211b2c;
        case 0x211b30u: goto label_211b30;
        case 0x211b34u: goto label_211b34;
        case 0x211b38u: goto label_211b38;
        case 0x211b3cu: goto label_211b3c;
        case 0x211b40u: goto label_211b40;
        case 0x211b44u: goto label_211b44;
        case 0x211b48u: goto label_211b48;
        case 0x211b4cu: goto label_211b4c;
        case 0x211b50u: goto label_211b50;
        case 0x211b54u: goto label_211b54;
        case 0x211b58u: goto label_211b58;
        case 0x211b5cu: goto label_211b5c;
        case 0x211b60u: goto label_211b60;
        case 0x211b64u: goto label_211b64;
        case 0x211b68u: goto label_211b68;
        case 0x211b6cu: goto label_211b6c;
        case 0x211b70u: goto label_211b70;
        case 0x211b74u: goto label_211b74;
        case 0x211b78u: goto label_211b78;
        case 0x211b7cu: goto label_211b7c;
        case 0x211b80u: goto label_211b80;
        case 0x211b84u: goto label_211b84;
        default: break;
    }

    ctx->pc = 0x20ea60u;

label_20ea60:
    // 0x20ea60: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x20ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_20ea64:
    // 0x20ea64: 0x7fbf00b0  sq          $ra, 0xB0($sp)
    ctx->pc = 0x20ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 31));
label_20ea68:
    // 0x20ea68: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x20ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_20ea6c:
    // 0x20ea6c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x20ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_20ea70:
    // 0x20ea70: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x20ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_20ea74:
    // 0x20ea74: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_20ea78:
    // 0x20ea78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20ea7c:
    // 0x20ea7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_20ea80:
    // 0x20ea80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20ea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20ea84:
    // 0x20ea84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20ea88:
    // 0x20ea88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20ea8c:
    // 0x20ea8c: 0xafa40528  sw          $a0, 0x528($sp)
    ctx->pc = 0x20ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1320), GPR_U32(ctx, 4));
label_20ea90:
    // 0x20ea90: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20ea94:
    // 0x20ea94: 0x2464a320  addiu       $a0, $v1, -0x5CE0
    ctx->pc = 0x20ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943520));
label_20ea98:
    // 0x20ea98: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_20ea9c:
    // 0x20ea9c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20ea9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20eaa0:
    // 0x20eaa0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x20eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_20eaa4:
    // 0x20eaa4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eaa8:
    // 0x20eaa8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_20eaac:
    // 0x20eaac: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x20eaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_20eab0:
    // 0x20eab0: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x20eab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_20eab4:
    // 0x20eab4: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x20eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_20eab8:
    // 0x20eab8: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eabc:
    // 0x20eabc: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x20eabcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_20eac0:
    // 0x20eac0: 0x314400ff  andi        $a0, $t2, 0xFF
    ctx->pc = 0x20eac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_20eac4:
    // 0x20eac4: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x20eac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_20eac8:
    // 0x20eac8: 0x10200126  beqz        $at, . + 4 + (0x126 << 2)
label_20eacc:
    if (ctx->pc == 0x20EACCu) {
        ctx->pc = 0x20EAD0u;
        goto label_20ead0;
    }
    ctx->pc = 0x20EAC8u;
    {
        const bool branch_taken_0x20eac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eac8) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EAD0u;
label_20ead0:
    // 0x20ead0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x20ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_20ead4:
    // 0x20ead4: 0x24a60e80  addiu       $a2, $a1, 0xE80
    ctx->pc = 0x20ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_20ead8:
    // 0x20ead8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20eadc:
    // 0x20eadc: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x20eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20eae0:
    // 0x20eae0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x20eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20eae4:
    // 0x20eae4: 0xc00008  jr          $a2
label_20eae8:
    if (ctx->pc == 0x20EAE8u) {
        ctx->pc = 0x20EAECu;
        goto label_20eaec;
    }
    ctx->pc = 0x20EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EAE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20EAECu;
label_20eaec:
    // 0x20eaec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20eaf0:
    // 0x20eaf0: 0x8c291a48  lw          $t1, 0x1A48($at)
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_20eaf4:
    // 0x20eaf4: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x20eaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
label_20eaf8:
    // 0x20eaf8: 0x12a2825  or          $a1, $t1, $t2
    ctx->pc = 0x20eaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_20eafc:
    // 0x20eafc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20eb00:
    // 0x20eb00: 0xac251a48  sw          $a1, 0x1A48($at)
    ctx->pc = 0x20eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 5));
label_20eb04:
    // 0x20eb04: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb08:
    // 0x20eb08: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb0c:
    // 0x20eb0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20eb0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_20eb10:
    // 0x20eb10: 0x8cc30368  lw          $v1, 0x368($a2)
    ctx->pc = 0x20eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
label_20eb14:
    // 0x20eb14: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20eb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20eb18:
    // 0x20eb18: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x20eb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_20eb1c:
    // 0x20eb1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20eb20:
    // 0x20eb20: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20eb24:
    // 0x20eb24: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x20eb24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20eb28:
    // 0x20eb28: 0xc0965d0  jal         func_259740
label_20eb2c:
    if (ctx->pc == 0x20EB2Cu) {
        ctx->pc = 0x20EB30u;
        goto label_20eb30;
    }
    ctx->pc = 0x20EB28u;
    SET_GPR_U32(ctx, 31, 0x20EB30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20EB28u, 0x20EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB30u;
label_20eb30:
    // 0x20eb30: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x20eb30u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20eb34:
    // 0x20eb34: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eb34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb38:
    // 0x20eb38: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x20eb38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_20eb3c:
    // 0x20eb3c: 0x35470040  ori         $a3, $t2, 0x40
    ctx->pc = 0x20eb3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
label_20eb40:
    // 0x20eb40: 0xad270008  sw          $a3, 0x8($t1)
    ctx->pc = 0x20eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 7));
label_20eb44:
    // 0x20eb44: 0x3c063f19  lui         $a2, 0x3F19
    ctx->pc = 0x20eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16153 << 16));
label_20eb48:
    // 0x20eb48: 0x34c3999a  ori         $v1, $a2, 0x999A
    ctx->pc = 0x20eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
label_20eb4c:
    // 0x20eb4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20eb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb50:
    // 0x20eb50: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb54:
    // 0x20eb54: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x20eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_20eb58:
    // 0x20eb58: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb5c:
    // 0x20eb5c: 0xe52001a4  swc1        $f0, 0x1A4($t1)
    ctx->pc = 0x20eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 420), bits); }
label_20eb60:
    // 0x20eb60: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eb60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb64:
    // 0x20eb64: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x20eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
label_20eb68:
    // 0x20eb68: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x20eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_20eb6c:
    // 0x20eb6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20eb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20eb70:
    // 0x20eb70: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb74:
    // 0x20eb74: 0xe4810188  swc1        $f1, 0x188($a0)
    ctx->pc = 0x20eb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_20eb78:
    // 0x20eb78: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_20eb7c:
    // 0x20eb7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20eb7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb80:
    // 0x20eb80: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb84:
    // 0x20eb84: 0xe4c00184  swc1        $f0, 0x184($a2)
    ctx->pc = 0x20eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 388), bits); }
label_20eb88:
    // 0x20eb88: 0x3c0ac5ab  lui         $t2, 0xC5AB
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50603 << 16));
label_20eb8c:
    // 0x20eb8c: 0x3549e000  ori         $t1, $t2, 0xE000
    ctx->pc = 0x20eb8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57344);
label_20eb90:
    // 0x20eb90: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20eb90u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb94:
    // 0x20eb94: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eb98:
    // 0x20eb98: 0xe4c00120  swc1        $f0, 0x120($a2)
    ctx->pc = 0x20eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
label_20eb9c:
    // 0x20eb9c: 0x3c094683  lui         $t1, 0x4683
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18051 << 16));
label_20eba0:
    // 0x20eba0: 0x35234000  ori         $v1, $t1, 0x4000
    ctx->pc = 0x20eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
label_20eba4:
    // 0x20eba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20eba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20eba8:
    // 0x20eba8: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eba8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ebac:
    // 0x20ebac: 0xe5410124  swc1        $f1, 0x124($t2)
    ctx->pc = 0x20ebacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 292), bits); }
label_20ebb0:
    // 0x20ebb0: 0x3c05c616  lui         $a1, 0xC616
    ctx->pc = 0x20ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50710 << 16));
label_20ebb4:
    // 0x20ebb4: 0x34a2a000  ori         $v0, $a1, 0xA000
    ctx->pc = 0x20ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
label_20ebb8:
    // 0x20ebb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ebb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ebbc:
    // 0x20ebbc: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ebc0:
    // 0x20ebc0: 0xe4c00128  swc1        $f0, 0x128($a2)
    ctx->pc = 0x20ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 296), bits); }
label_20ebc4:
    // 0x20ebc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ebc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ebc8:
    // 0x20ebc8: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20ebc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ebcc:
    // 0x20ebcc: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x20ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
label_20ebd0:
    // 0x20ebd0: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ebd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ebd4:
    // 0x20ebd4: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ebd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ebd8:
    // 0x20ebd8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20ebd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20ebdc:
    // 0x20ebdc: 0x8d0a0368  lw          $t2, 0x368($t0)
    ctx->pc = 0x20ebdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
label_20ebe0:
    // 0x20ebe0: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x20ebe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20ebe4:
    // 0x20ebe4: 0x2402780f  addiu       $v0, $zero, 0x780F
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30735));
label_20ebe8:
    // 0x20ebe8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20ebe8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ebec:
    // 0x20ebec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ebf0:
    // 0x20ebf0: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20ebf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20ebf4:
    // 0x20ebf4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20ebf8:
    // 0x20ebf8: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20ebf8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20ebfc:
    // 0x20ebfc: 0xc0965d0  jal         func_259740
label_20ec00:
    if (ctx->pc == 0x20EC00u) {
        ctx->pc = 0x20EC04u;
        goto label_20ec04;
    }
    ctx->pc = 0x20EBFCu;
    SET_GPR_U32(ctx, 31, 0x20EC04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20EBFCu, 0x20EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC04u;
label_20ec04:
    // 0x20ec04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20ec04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ec08:
    // 0x20ec08: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ec0c:
    // 0x20ec0c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20ec0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_20ec10:
    // 0x20ec10: 0xc0974c8  jal         func_25D320
label_20ec14:
    if (ctx->pc == 0x20EC14u) {
        ctx->pc = 0x20EC18u;
        goto label_20ec18;
    }
    ctx->pc = 0x20EC10u;
    SET_GPR_U32(ctx, 31, 0x20EC18u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EC10u, 0x20EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC18u;
label_20ec18:
    // 0x20ec18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20ec18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ec1c:
    // 0x20ec1c: 0x3c09c52f  lui         $t1, 0xC52F
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50479 << 16));
label_20ec20:
    // 0x20ec20: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20ec20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ec24:
    // 0x20ec24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec28:
    // 0x20ec28: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ec2c:
    // 0x20ec2c: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x20ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
label_20ec30:
    // 0x20ec30: 0x3c0a43e1  lui         $t2, 0x43E1
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17377 << 16));
label_20ec34:
    // 0x20ec34: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x20ec34u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ec38:
    // 0x20ec38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec3c:
    // 0x20ec3c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ec40:
    // 0x20ec40: 0xe4610194  swc1        $f1, 0x194($v1)
    ctx->pc = 0x20ec40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
label_20ec44:
    // 0x20ec44: 0x3c06463a  lui         $a2, 0x463A
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17978 << 16));
label_20ec48:
    // 0x20ec48: 0x34c41800  ori         $a0, $a2, 0x1800
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6144);
label_20ec4c:
    // 0x20ec4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ec4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ec50:
    // 0x20ec50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec54:
    // 0x20ec54: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ec58:
    // 0x20ec58: 0xe4800198  swc1        $f0, 0x198($a0)
    ctx->pc = 0x20ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
label_20ec5c:
    // 0x20ec5c: 0x3c03c610  lui         $v1, 0xC610
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50704 << 16));
label_20ec60:
    // 0x20ec60: 0x34657400  ori         $a1, $v1, 0x7400
    ctx->pc = 0x20ec60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29696);
label_20ec64:
    // 0x20ec64: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ec64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ec68:
    // 0x20ec68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec6c:
    // 0x20ec6c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ec70:
    // 0x20ec70: 0xe46c01a0  swc1        $f12, 0x1A0($v1)
    ctx->pc = 0x20ec70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_20ec74:
    // 0x20ec74: 0x3c034687  lui         $v1, 0x4687
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18055 << 16));
label_20ec78:
    // 0x20ec78: 0x34649600  ori         $a0, $v1, 0x9600
    ctx->pc = 0x20ec78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38400);
label_20ec7c:
    // 0x20ec7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ec7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ec80:
    // 0x20ec80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec84:
    // 0x20ec84: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ec88:
    // 0x20ec88: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x20ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_20ec8c:
    // 0x20ec8c: 0x3c06c644  lui         $a2, 0xC644
    ctx->pc = 0x20ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50756 << 16));
label_20ec90:
    // 0x20ec90: 0x34c56800  ori         $a1, $a2, 0x6800
    ctx->pc = 0x20ec90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26624);
label_20ec94:
    // 0x20ec94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20ec94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ec98:
    // 0x20ec98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ec9c:
    // 0x20ec9c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20eca0:
    // 0x20eca0: 0xe46101a8  swc1        $f1, 0x1A8($v1)
    ctx->pc = 0x20eca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_20eca4:
    // 0x20eca4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20eca8:
    // 0x20eca8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20ecac:
    // 0x20ecac: 0xc056518  jal         func_159460
label_20ecb0:
    if (ctx->pc == 0x20ECB0u) {
        ctx->pc = 0x20ECB4u;
        goto label_20ecb4;
    }
    ctx->pc = 0x20ECACu;
    SET_GPR_U32(ctx, 31, 0x20ECB4u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x20ECACu, 0x20ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECB4u;
label_20ecb4:
    // 0x20ecb4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20ecb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ecb8:
    // 0x20ecb8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ecbc:
    // 0x20ecbc: 0x8cc31310  lw          $v1, 0x1310($a2)
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4880)));
label_20ecc0:
    // 0x20ecc0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x20ecc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_20ecc4:
    // 0x20ecc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ecc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20ecc8:
    // 0x20ecc8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_20eccc:
    // 0x20eccc: 0x24850190  addiu       $a1, $a0, 0x190
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_20ecd0:
    // 0x20ecd0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ecd4:
    // 0x20ecd4: 0x8cc41310  lw          $a0, 0x1310($a2)
    ctx->pc = 0x20ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4880)));
label_20ecd8:
    // 0x20ecd8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x20ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_20ecdc:
    // 0x20ecdc: 0x24031c98  addiu       $v1, $zero, 0x1C98
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7320));
label_20ece0:
    // 0x20ece0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20ece4:
    // 0x20ece4: 0xac23a2f0  sw          $v1, -0x5D10($at)
    ctx->pc = 0x20ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943472), GPR_U32(ctx, 3));
label_20ece8:
    // 0x20ece8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ecec:
    // 0x20ecec: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20ececu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20ecf0:
    // 0x20ecf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ecf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20ecf4:
    // 0x20ecf4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20ecf8:
    // 0x20ecf8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x20ecf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_20ecfc:
    // 0x20ecfc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x20ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20ed00:
    // 0x20ed00: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x20ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20ed04:
    // 0x20ed04: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x20ed04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_20ed08:
    // 0x20ed08: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x20ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_20ed0c:
    // 0x20ed0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20ed10:
    // 0x20ed10: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20ed14:
    // 0x20ed14: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x20ed14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_20ed18:
    // 0x20ed18: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20ed1c:
    // 0x20ed1c: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20ed20:
    // 0x20ed20: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x20ed20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
label_20ed24:
    // 0x20ed24: 0xa5a02  srl         $t3, $t2, 8
    ctx->pc = 0x20ed24u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
label_20ed28:
    // 0x20ed28: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20ed2c:
    // 0x20ed2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20ed30:
    // 0x20ed30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_20ed34:
    // 0x20ed34: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x20ed34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20ed38:
    // 0x20ed38: 0x3245001f  andi        $a1, $s2, 0x1F
    ctx->pc = 0x20ed38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_20ed3c:
    // 0x20ed3c: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_20ed40:
    // 0x20ed40: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x20ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_20ed44:
    // 0x20ed44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ed44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20ed48:
    // 0x20ed48: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ed4c:
    // 0x20ed4c: 0xa643127e  sh          $v1, 0x127E($s2)
    ctx->pc = 0x20ed4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4734), (uint16_t)GPR_U32(ctx, 3));
label_20ed50:
    // 0x20ed50: 0x8fb60528  lw          $s6, 0x528($sp)
    ctx->pc = 0x20ed50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ed54:
    // 0x20ed54: 0x92c60002  lbu         $a2, 0x2($s6)
    ctx->pc = 0x20ed54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_20ed58:
    // 0x20ed58: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20ed5c:
    // 0x20ed5c: 0xa2c70002  sb          $a3, 0x2($s6)
    ctx->pc = 0x20ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 7));
label_20ed60:
    // 0x20ed60: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ed60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ed64:
    // 0x20ed64: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_20ed68:
    // 0x20ed68: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_20ed6c:
    // 0x20ed6c: 0x12a1824  and         $v1, $t1, $t2
    ctx->pc = 0x20ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
label_20ed70:
    // 0x20ed70: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x20ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_20ed74:
    // 0x20ed74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20ed78:
    // 0x20ed78: 0xac209510  sw          $zero, -0x6AF0($at)
    ctx->pc = 0x20ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939920), GPR_U32(ctx, 0));
label_20ed7c:
    // 0x20ed7c: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x20ed7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20ed80:
    // 0x20ed80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20ed84:
    // 0x20ed84: 0xac349518  sw          $s4, -0x6AE8($at)
    ctx->pc = 0x20ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939928), GPR_U32(ctx, 20));
label_20ed88:
    // 0x20ed88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20ed8c:
    // 0x20ed8c: 0xac209520  sw          $zero, -0x6AE0($at)
    ctx->pc = 0x20ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939936), GPR_U32(ctx, 0));
label_20ed90:
    // 0x20ed90: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_20ed94:
    // 0x20ed94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20ed98:
    // 0x20ed98: 0xac249528  sw          $a0, -0x6AD8($at)
    ctx->pc = 0x20ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939944), GPR_U32(ctx, 4));
label_20ed9c:
    // 0x20ed9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20eda0:
    // 0x20eda0: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x20eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939952), GPR_U32(ctx, 0));
label_20eda4:
    // 0x20eda4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20eda8:
    // 0x20eda8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20edac:
    // 0x20edac: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x20edacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 3));
label_20edb0:
    // 0x20edb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20edb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20edb4:
    // 0x20edb4: 0xac209540  sw          $zero, -0x6AC0($at)
    ctx->pc = 0x20edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939968), GPR_U32(ctx, 0));
label_20edb8:
    // 0x20edb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20edb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20edbc:
    // 0x20edbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20edc0:
    // 0x20edc0: 0xe4209548  swc1        $f0, -0x6AB8($at)
    ctx->pc = 0x20edc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939976), bits); }
label_20edc4:
    // 0x20edc4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20edc8:
    // 0x20edc8: 0xc0974c8  jal         func_25D320
label_20edcc:
    if (ctx->pc == 0x20EDCCu) {
        ctx->pc = 0x20EDD0u;
        goto label_20edd0;
    }
    ctx->pc = 0x20EDC8u;
    SET_GPR_U32(ctx, 31, 0x20EDD0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EDC8u, 0x20EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20edd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20edd4:
    // 0x20edd4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20edd8:
    // 0x20edd8: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20eddc:
    // 0x20eddc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20ede0:
    // 0x20ede0: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x20ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
label_20ede4:
    // 0x20ede4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ede8:
    // 0x20ede8: 0x84771278  lh          $s7, 0x1278($v1)
    ctx->pc = 0x20ede8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20edec:
    // 0x20edec: 0x173c3c  dsll32      $a3, $s7, 16
    ctx->pc = 0x20edecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << (32 + 16));
label_20edf0:
    // 0x20edf0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20edf0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20edf4:
    // 0x20edf4: 0x28e10169  slti        $at, $a3, 0x169
    ctx->pc = 0x20edf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)361) ? 1 : 0);
label_20edf8:
    // 0x20edf8: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
label_20edfc:
    if (ctx->pc == 0x20EDFCu) {
        ctx->pc = 0x20EE00u;
        goto label_20ee00;
    }
    ctx->pc = 0x20EDF8u;
    {
        const bool branch_taken_0x20edf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20edf8) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EE00u;
label_20ee00:
    // 0x20ee00: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee04:
    // 0x20ee04: 0x910b0002  lbu         $t3, 0x2($t0)
    ctx->pc = 0x20ee04u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_20ee08:
    // 0x20ee08: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_20ee0c:
    // 0x20ee0c: 0xa1090002  sb          $t1, 0x2($t0)
    ctx->pc = 0x20ee0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 9));
label_20ee10:
    // 0x20ee10: 0x240a0208  addiu       $t2, $zero, 0x208
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_20ee14:
    // 0x20ee14: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee18:
    // 0x20ee18: 0xa48a1278  sh          $t2, 0x1278($a0)
    ctx->pc = 0x20ee18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 10));
label_20ee1c:
    // 0x20ee1c: 0x10000051  b           . + 4 + (0x51 << 2)
label_20ee20:
    if (ctx->pc == 0x20EE20u) {
        ctx->pc = 0x20EE24u;
        goto label_20ee24;
    }
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EE24u;
label_20ee24:
    // 0x20ee24: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee28:
    // 0x20ee28: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20ee2c:
    // 0x20ee2c: 0x24ca0001  addiu       $t2, $a2, 0x1
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20ee30:
    // 0x20ee30: 0xa46a1278  sh          $t2, 0x1278($v1)
    ctx->pc = 0x20ee30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 10));
label_20ee34:
    // 0x20ee34: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee38:
    // 0x20ee38: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20ee38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20ee3c:
    // 0x20ee3c: 0xc0974c8  jal         func_25D320
label_20ee40:
    if (ctx->pc == 0x20EE40u) {
        ctx->pc = 0x20EE44u;
        goto label_20ee44;
    }
    ctx->pc = 0x20EE3Cu;
    SET_GPR_U32(ctx, 31, 0x20EE44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EE3Cu, 0x20EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE44u;
label_20ee44:
    // 0x20ee44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20ee44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ee48:
    // 0x20ee48: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ee48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee4c:
    // 0x20ee4c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20ee4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20ee50:
    // 0x20ee50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20ee50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20ee54:
    // 0x20ee54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ee54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20ee58:
    // 0x20ee58: 0x28610272  slti        $at, $v1, 0x272
    ctx->pc = 0x20ee58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)626) ? 1 : 0);
label_20ee5c:
    // 0x20ee5c: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
label_20ee60:
    if (ctx->pc == 0x20EE60u) {
        ctx->pc = 0x20EE64u;
        goto label_20ee64;
    }
    ctx->pc = 0x20EE5Cu;
    {
        const bool branch_taken_0x20ee5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee5c) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EE64u;
label_20ee64:
    // 0x20ee64: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee68:
    // 0x20ee68: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x20ee68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_20ee6c:
    // 0x20ee6c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20ee70:
    // 0x20ee70: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x20ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_20ee74:
    // 0x20ee74: 0x1000003b  b           . + 4 + (0x3B << 2)
label_20ee78:
    if (ctx->pc == 0x20EE78u) {
        ctx->pc = 0x20EE7Cu;
        goto label_20ee7c;
    }
    ctx->pc = 0x20EE74u;
    {
        const bool branch_taken_0x20ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee74) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EE7Cu;
label_20ee7c:
    // 0x20ee7c: 0x8fbe0528  lw          $fp, 0x528($sp)
    ctx->pc = 0x20ee7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee80:
    // 0x20ee80: 0x93d00002  lbu         $s0, 0x2($fp)
    ctx->pc = 0x20ee80u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
label_20ee84:
    // 0x20ee84: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20ee88:
    // 0x20ee88: 0xa3c70002  sb          $a3, 0x2($fp)
    ctx->pc = 0x20ee88u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 7));
label_20ee8c:
    // 0x20ee8c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ee90:
    // 0x20ee90: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x20ee90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20ee94:
    // 0x20ee94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20ee98:
    // 0x20ee98: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x20ee98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
label_20ee9c:
    // 0x20ee9c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eea0:
    // 0x20eea0: 0xc0974c8  jal         func_25D320
label_20eea4:
    if (ctx->pc == 0x20EEA4u) {
        ctx->pc = 0x20EEA8u;
        goto label_20eea8;
    }
    ctx->pc = 0x20EEA0u;
    SET_GPR_U32(ctx, 31, 0x20EEA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EEA0u, 0x20EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEA8u;
label_20eea8:
    // 0x20eea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20eea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20eeac:
    // 0x20eeac: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eeb0:
    // 0x20eeb0: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x20eeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_20eeb4:
    // 0x20eeb4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_20eeb8:
    if (ctx->pc == 0x20EEB8u) {
        ctx->pc = 0x20EEBCu;
        goto label_20eebc;
    }
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EEBCu;
label_20eebc:
    // 0x20eebc: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eec0:
    // 0x20eec0: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x20eec0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_20eec4:
    // 0x20eec4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x20eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20eec8:
    // 0x20eec8: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x20eec8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
label_20eecc:
    // 0x20eecc: 0x10000025  b           . + 4 + (0x25 << 2)
label_20eed0:
    if (ctx->pc == 0x20EED0u) {
        ctx->pc = 0x20EED4u;
        goto label_20eed4;
    }
    ctx->pc = 0x20EECCu;
    {
        const bool branch_taken_0x20eecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eecc) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EED4u;
label_20eed4:
    // 0x20eed4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eed8:
    // 0x20eed8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x20eed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_20eedc:
    // 0x20eedc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20eee0:
    // 0x20eee0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x20eee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_20eee4:
    // 0x20eee4: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eee8:
    // 0x20eee8: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_20eeec:
    // 0x20eeec: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x20eeecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_20eef0:
    // 0x20eef0: 0xa4c91278  sh          $t1, 0x1278($a2)
    ctx->pc = 0x20eef0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 9));
label_20eef4:
    // 0x20eef4: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eef4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eef8:
    // 0x20eef8: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20eef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20eefc:
    // 0x20eefc: 0xc0974c8  jal         func_25D320
label_20ef00:
    if (ctx->pc == 0x20EF00u) {
        ctx->pc = 0x20EF04u;
        goto label_20ef04;
    }
    ctx->pc = 0x20EEFCu;
    SET_GPR_U32(ctx, 31, 0x20EF04u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EEFCu, 0x20EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF04u;
label_20ef04:
    // 0x20ef04: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20ef04u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ef08:
    // 0x20ef08: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef0c:
    // 0x20ef0c: 0x914309e7  lbu         $v1, 0x9E7($t2)
    ctx->pc = 0x20ef0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2535)));
label_20ef10:
    // 0x20ef10: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_20ef14:
    if (ctx->pc == 0x20EF14u) {
        ctx->pc = 0x20EF18u;
        goto label_20ef18;
    }
    ctx->pc = 0x20EF10u;
    {
        const bool branch_taken_0x20ef10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef10) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EF18u;
label_20ef18:
    // 0x20ef18: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ef18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef1c:
    // 0x20ef1c: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x20ef1cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_20ef20:
    // 0x20ef20: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x20ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20ef24:
    // 0x20ef24: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x20ef24u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
label_20ef28:
    // 0x20ef28: 0x1000000e  b           . + 4 + (0xE << 2)
label_20ef2c:
    if (ctx->pc == 0x20EF2Cu) {
        ctx->pc = 0x20EF30u;
        goto label_20ef30;
    }
    ctx->pc = 0x20EF28u;
    {
        const bool branch_taken_0x20ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef28) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EF30u;
label_20ef30:
    // 0x20ef30: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef34:
    // 0x20ef34: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x20ef34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_20ef38:
    // 0x20ef38: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x20ef38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20ef3c:
    // 0x20ef3c: 0xa0ab0002  sb          $t3, 0x2($a1)
    ctx->pc = 0x20ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 11));
label_20ef40:
    // 0x20ef40: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef44:
    // 0x20ef44: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20ef48:
    // 0x20ef48: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_20ef4c:
    // 0x20ef4c: 0xa46a1278  sh          $t2, 0x1278($v1)
    ctx->pc = 0x20ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 10));
label_20ef50:
    // 0x20ef50: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef54:
    // 0x20ef54: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20ef54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_20ef58:
    // 0x20ef58: 0xc0974c8  jal         func_25D320
label_20ef5c:
    if (ctx->pc == 0x20EF5Cu) {
        ctx->pc = 0x20EF60u;
        goto label_20ef60;
    }
    ctx->pc = 0x20EF58u;
    SET_GPR_U32(ctx, 31, 0x20EF60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EF58u, 0x20EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF60u;
label_20ef60:
    // 0x20ef60: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20ef60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ef64:
    // 0x20ef64: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef68:
    // 0x20ef68: 0x85451278  lh          $a1, 0x1278($t2)
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20ef6c:
    // 0x20ef6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_20ef70:
    // 0x20ef70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ef70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20ef74:
    // 0x20ef74: 0x286402bc  slti        $a0, $v1, 0x2BC
    ctx->pc = 0x20ef74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
label_20ef78:
    // 0x20ef78: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_20ef7c:
    if (ctx->pc == 0x20EF7Cu) {
        ctx->pc = 0x20EF80u;
        goto label_20ef80;
    }
    ctx->pc = 0x20EF78u;
    {
        const bool branch_taken_0x20ef78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ef78) {
            ctx->pc = 0x20F008u;
            goto label_20f008;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20ef80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ef84:
    // 0x20ef84: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef88:
    // 0x20ef88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_20ef8c:
    // 0x20ef8c: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x20ef8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20ef90:
    // 0x20ef90: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef94:
    // 0x20ef94: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x20ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_20ef98:
    // 0x20ef98: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20ef9c:
    // 0x20ef9c: 0x8ce802d0  lw          $t0, 0x2D0($a3)
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
label_20efa0:
    // 0x20efa0: 0x3c053d23  lui         $a1, 0x3D23
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15651 << 16));
label_20efa4:
    // 0x20efa4: 0x34a3d70a  ori         $v1, $a1, 0xD70A
    ctx->pc = 0x20efa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_20efa8:
    // 0x20efa8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20efa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20efac:
    // 0x20efac: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x20efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20efb0:
    // 0x20efb0: 0xc500011c  lwc1        $f0, 0x11C($t0)
    ctx->pc = 0x20efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20efb4:
    // 0x20efb4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x20efb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_20efb8:
    // 0x20efb8: 0xc058f50  jal         func_163D40
label_20efbc:
    if (ctx->pc == 0x20EFBCu) {
        ctx->pc = 0x20EFC0u;
        goto label_20efc0;
    }
    ctx->pc = 0x20EFB8u;
    SET_GPR_U32(ctx, 31, 0x20EFC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20EFB8u, 0x20EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFC0u;
label_20efc0:
    // 0x20efc0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20efc4:
    // 0x20efc4: 0x8c6602d0  lw          $a2, 0x2D0($v1)
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_20efc8:
    // 0x20efc8: 0xe4c0011c  swc1        $f0, 0x11C($a2)
    ctx->pc = 0x20efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 284), bits); }
label_20efcc:
    // 0x20efcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20efd0:
    // 0x20efd0: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20efd4:
    // 0x20efd4: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x20efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_20efd8:
    // 0x20efd8: 0xe4a00120  swc1        $f0, 0x120($a1)
    ctx->pc = 0x20efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
label_20efdc:
    // 0x20efdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20efe0:
    // 0x20efe0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20efe4:
    // 0x20efe4: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_20efe8:
    // 0x20efe8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x20efe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_20efec:
    // 0x20efec: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20eff0:
    // 0x20eff0: 0x8c8702d0  lw          $a3, 0x2D0($a0)
    ctx->pc = 0x20eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_20eff4:
    // 0x20eff4: 0x94e30140  lhu         $v1, 0x140($a3)
    ctx->pc = 0x20eff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 320)));
label_20eff8:
    // 0x20eff8: 0x34660002  ori         $a2, $v1, 0x2
    ctx->pc = 0x20eff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_20effc:
    // 0x20effc: 0xa4e60140  sh          $a2, 0x140($a3)
    ctx->pc = 0x20effcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 320), (uint16_t)GPR_U32(ctx, 6));
label_20f000:
    // 0x20f000: 0x10000029  b           . + 4 + (0x29 << 2)
label_20f004:
    if (ctx->pc == 0x20F004u) {
        ctx->pc = 0x20F008u;
        goto label_20f008;
    }
    ctx->pc = 0x20F000u;
    {
        const bool branch_taken_0x20f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f000) {
            ctx->pc = 0x20F0A8u;
            goto label_20f0a8;
        }
    }
    ctx->pc = 0x20F008u;
label_20f008:
    // 0x20f008: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x20f008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_20f00c:
    // 0x20f00c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f010:
    // 0x20f010: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f014:
    // 0x20f014: 0xc48d0184  lwc1        $f13, 0x184($a0)
    ctx->pc = 0x20f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20f018:
    // 0x20f018: 0xc0455e6  jal         func_115798
label_20f01c:
    if (ctx->pc == 0x20F01Cu) {
        ctx->pc = 0x20F020u;
        goto label_20f020;
    }
    ctx->pc = 0x20F018u;
    SET_GPR_U32(ctx, 31, 0x20F020u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x20F018u, 0x20F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F020u;
label_20f020:
    // 0x20f020: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_20f024:
    // 0x20f024: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f028:
    // 0x20f028: 0x0  nop
    ctx->pc = 0x20f028u;
    // NOP
label_20f02c:
    // 0x20f02c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20f02cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_20f030:
    // 0x20f030: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f034:
    // 0x20f034: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_20f038:
    // 0x20f038: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20f03c:
    // 0x20f03c: 0x3c063e4c  lui         $a2, 0x3E4C
    ctx->pc = 0x20f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15948 << 16));
label_20f040:
    // 0x20f040: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x20f040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_20f044:
    // 0x20f044: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20f044u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f048:
    // 0x20f048: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f04c:
    // 0x20f04c: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x20f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_20f050:
    // 0x20f050: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f054:
    // 0x20f054: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x20f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_20f058:
    // 0x20f058: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x20f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20f05c:
    // 0x20f05c: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x20f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20f060:
    // 0x20f060: 0xc058f50  jal         func_163D40
label_20f064:
    if (ctx->pc == 0x20F064u) {
        ctx->pc = 0x20F068u;
        goto label_20f068;
    }
    ctx->pc = 0x20F060u;
    SET_GPR_U32(ctx, 31, 0x20F068u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20F060u, 0x20F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F068u;
label_20f068:
    // 0x20f068: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f06c:
    // 0x20f06c: 0x8cc402d0  lw          $a0, 0x2D0($a2)
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_20f070:
    // 0x20f070: 0xe480011c  swc1        $f0, 0x11C($a0)
    ctx->pc = 0x20f070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
label_20f074:
    // 0x20f074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f078:
    // 0x20f078: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f07c:
    // 0x20f07c: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_20f080:
    // 0x20f080: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x20f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_20f084:
    // 0x20f084: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x20f084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f088:
    // 0x20f088: 0x8fb30528  lw          $s3, 0x528($sp)
    ctx->pc = 0x20f088u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f08c:
    // 0x20f08c: 0x8e6302d0  lw          $v1, 0x2D0($s3)
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
label_20f090:
    // 0x20f090: 0xe46e0124  swc1        $f14, 0x124($v1)
    ctx->pc = 0x20f090u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_20f094:
    // 0x20f094: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f098:
    // 0x20f098: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_20f09c:
    // 0x20f09c: 0x94a30140  lhu         $v1, 0x140($a1)
    ctx->pc = 0x20f09cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 320)));
label_20f0a0:
    // 0x20f0a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x20f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_20f0a4:
    // 0x20f0a4: 0xa4a30140  sh          $v1, 0x140($a1)
    ctx->pc = 0x20f0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 3));
label_20f0a8:
    // 0x20f0a8: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f0ac:
    // 0x20f0ac: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x20f0acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20f0b0:
    // 0x20f0b0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x20f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_20f0b4:
    // 0x20f0b4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x20f0b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_20f0b8:
    // 0x20f0b8: 0x14200094  bnez        $at, . + 4 + (0x94 << 2)
label_20f0bc:
    if (ctx->pc == 0x20F0BCu) {
        ctx->pc = 0x20F0C0u;
        goto label_20f0c0;
    }
    ctx->pc = 0x20F0B8u;
    {
        const bool branch_taken_0x20f0b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f0b8) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F0C0u;
label_20f0c0:
    // 0x20f0c0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f0c4:
    // 0x20f0c4: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20f0c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20f0c8:
    // 0x20f0c8: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20f0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_20f0cc:
    // 0x20f0cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f0ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20f0d0:
    // 0x20f0d0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f0d4:
    // 0x20f0d4: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_20f0d8:
    // 0x20f0d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20f0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_20f0dc:
    // 0x20f0dc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20f0dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_20f0e0:
    // 0x20f0e0: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x20f0e0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20f0e4:
    // 0x20f0e4: 0x0  nop
    ctx->pc = 0x20f0e4u;
    // NOP
label_20f0e8:
    // 0x20f0e8: 0x0  nop
    ctx->pc = 0x20f0e8u;
    // NOP
label_20f0ec:
    // 0x20f0ec: 0x3010  mfhi        $a2
    ctx->pc = 0x20f0ecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_20f0f0:
    // 0x20f0f0: 0x14c00086  bnez        $a2, . + 4 + (0x86 << 2)
label_20f0f4:
    if (ctx->pc == 0x20F0F4u) {
        ctx->pc = 0x20F0F8u;
        goto label_20f0f8;
    }
    ctx->pc = 0x20F0F0u;
    {
        const bool branch_taken_0x20f0f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f0f0) {
            ctx->pc = 0x20F30Cu;
            goto label_20f30c;
        }
    }
    ctx->pc = 0x20F0F8u;
label_20f0f8:
    // 0x20f0f8: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_20f0fc:
    // 0x20f0fc: 0x24c4a330  addiu       $a0, $a2, -0x5CD0
    ctx->pc = 0x20f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943536));
label_20f100:
    // 0x20f100: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20f104:
    // 0x20f104: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x20f104u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f108:
    // 0x20f108: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x20f108u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_20f10c:
    // 0x20f10c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f110:
    // 0x20f110: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f114:
    // 0x20f114: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20f114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20f118:
    // 0x20f118: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20f11c:
    // 0x20f11c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20f120:
    // 0x20f120: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x20f120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_20f124:
    // 0x20f124: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_20f128:
    // 0x20f128: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f12c:
    // 0x20f12c: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x20f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f130:
    // 0x20f130: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x20f130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_20f134:
    // 0x20f134: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20f138:
    // 0x20f138: 0x1265021  addu        $t2, $t1, $a2
    ctx->pc = 0x20f138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_20f13c:
    // 0x20f13c: 0x3144ff00  andi        $a0, $t2, 0xFF00
    ctx->pc = 0x20f13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65280);
label_20f140:
    // 0x20f140: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_20f144:
    // 0x20f144: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f148:
    // 0x20f148: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f14c:
    // 0x20f14c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x20f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 6));
label_20f150:
    // 0x20f150: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_20f154:
    // 0x20f154: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x20f154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_20f158:
    // 0x20f158: 0x24860028  addiu       $a2, $a0, 0x28
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_20f15c:
    // 0x20f15c: 0x64c3c  dsll32      $t1, $a2, 16
    ctx->pc = 0x20f15cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
label_20f160:
    // 0x20f160: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f160u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_20f164:
    // 0x20f164: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f164u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f168:
    // 0x20f168: 0xa549127e  sh          $t1, 0x127E($t2)
    ctx->pc = 0x20f168u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4734), (uint16_t)GPR_U32(ctx, 9));
label_20f16c:
    // 0x20f16c: 0xc06765c  jal         func_19D970
label_20f170:
    if (ctx->pc == 0x20F170u) {
        ctx->pc = 0x20F174u;
        goto label_20f174;
    }
    ctx->pc = 0x20F16Cu;
    SET_GPR_U32(ctx, 31, 0x20F174u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F16Cu, 0x20F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F174u;
label_20f174:
    // 0x20f174: 0x3c0645da  lui         $a2, 0x45DA
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17882 << 16));
label_20f178:
    // 0x20f178: 0x34c5c000  ori         $a1, $a2, 0xC000
    ctx->pc = 0x20f178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_20f17c:
    // 0x20f17c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x20f17cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f180:
    // 0x20f180: 0x0  nop
    ctx->pc = 0x20f180u;
    // NOP
label_20f184:
    // 0x20f184: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x20f184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_20f188:
    // 0x20f188: 0x3c05c5fa  lui         $a1, 0xC5FA
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50682 << 16));
label_20f18c:
    // 0x20f18c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f18cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f190:
    // 0x20f190: 0x0  nop
    ctx->pc = 0x20f190u;
    // NOP
label_20f194:
    // 0x20f194: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20f198:
    // 0x20f198: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20f19c:
    // 0x20f19c: 0xe420a310  swc1        $f0, -0x5CF0($at)
    ctx->pc = 0x20f19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943504), bits); }
label_20f1a0:
    // 0x20f1a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20f1a4:
    // 0x20f1a4: 0xe420a300  swc1        $f0, -0x5D00($at)
    ctx->pc = 0x20f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), bits); }
label_20f1a8:
    // 0x20f1a8: 0xc06766c  jal         func_19D9B0
label_20f1ac:
    if (ctx->pc == 0x20F1ACu) {
        ctx->pc = 0x20F1B0u;
        goto label_20f1b0;
    }
    ctx->pc = 0x20F1A8u;
    SET_GPR_U32(ctx, 31, 0x20F1B0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20F1A8u, 0x20F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x20f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
label_20f1b4:
    // 0x20f1b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f1b8:
    // 0x20f1b8: 0x0  nop
    ctx->pc = 0x20f1b8u;
    // NOP
label_20f1bc:
    // 0x20f1bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f1c0:
    // 0x20f1c0: 0x3c074684  lui         $a3, 0x4684
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18052 << 16));
label_20f1c4:
    // 0x20f1c4: 0x34e6d000  ori         $a2, $a3, 0xD000
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53248);
label_20f1c8:
    // 0x20f1c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20f1c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f1cc:
    // 0x20f1cc: 0x0  nop
    ctx->pc = 0x20f1ccu;
    // NOP
label_20f1d0:
    // 0x20f1d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x20f1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f1d4:
    // 0x20f1d4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20f1d8:
    // 0x20f1d8: 0xe421a304  swc1        $f1, -0x5CFC($at)
    ctx->pc = 0x20f1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943492), bits); }
label_20f1dc:
    // 0x20f1dc: 0xc06765c  jal         func_19D970
label_20f1e0:
    if (ctx->pc == 0x20F1E0u) {
        ctx->pc = 0x20F1E4u;
        goto label_20f1e4;
    }
    ctx->pc = 0x20F1DCu;
    SET_GPR_U32(ctx, 31, 0x20F1E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F1DCu, 0x20F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1E4u;
label_20f1e4:
    // 0x20f1e4: 0x3c0a45da  lui         $t2, 0x45DA
    ctx->pc = 0x20f1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17882 << 16));
label_20f1e8:
    // 0x20f1e8: 0x3549c000  ori         $t1, $t2, 0xC000
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)49152);
label_20f1ec:
    // 0x20f1ec: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x20f1ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f1f0:
    // 0x20f1f0: 0x0  nop
    ctx->pc = 0x20f1f0u;
    // NOP
label_20f1f4:
    // 0x20f1f4: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x20f1f4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_20f1f8:
    // 0x20f1f8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20f1fc:
    // 0x20f1fc: 0xe42da308  swc1        $f13, -0x5CF8($at)
    ctx->pc = 0x20f1fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943496), bits); }
label_20f200:
    // 0x20f200: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20f204:
    // 0x20f204: 0x3c09442f  lui         $t1, 0x442F
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17455 << 16));
label_20f208:
    // 0x20f208: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20f208u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f20c:
    // 0x20f20c: 0x3c0a43b4  lui         $t2, 0x43B4
    ctx->pc = 0x20f20cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17332 << 16));
label_20f210:
    // 0x20f210: 0x448a6800  mtc1        $t2, $f13
    ctx->pc = 0x20f210u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f214:
    // 0x20f214: 0x3c074348  lui         $a3, 0x4348
    ctx->pc = 0x20f214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17224 << 16));
label_20f218:
    // 0x20f218: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x20f218u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f21c:
    // 0x20f21c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f220:
    // 0x20f220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f224:
    // 0x20f224: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f228:
    // 0x20f228: 0x2466a300  addiu       $a2, $v1, -0x5D00
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
label_20f22c:
    // 0x20f22c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f22cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f230:
    // 0x20f230: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f230u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f234:
    // 0x20f234: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f238:
    // 0x20f238: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
label_20f23c:
    // 0x20f23c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20f23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_20f240:
    // 0x20f240: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20f244:
    // 0x20f244: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f244u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f248:
    // 0x20f248: 0xc0bb6c0  jal         func_2EDB00
label_20f24c:
    if (ctx->pc == 0x20F24Cu) {
        ctx->pc = 0x20F250u;
        goto label_20f250;
    }
    ctx->pc = 0x20F248u;
    SET_GPR_U32(ctx, 31, 0x20F250u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F248u, 0x20F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F250u;
label_20f250:
    // 0x20f250: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20f250u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f254:
    // 0x20f254: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_20f258:
    // 0x20f258: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20f258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f25c:
    // 0x20f25c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20f260:
    // 0x20f260: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x20f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_20f264:
    // 0x20f264: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x20f264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
label_20f268:
    // 0x20f268: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f268u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f26c:
    // 0x20f26c: 0x3c0943c8  lui         $t1, 0x43C8
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17352 << 16));
label_20f270:
    // 0x20f270: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x20f270u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f274:
    // 0x20f274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f278:
    // 0x20f278: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f278u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f27c:
    // 0x20f27c: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_20f280:
    // 0x20f280: 0x2546a300  addiu       $a2, $t2, -0x5D00
    ctx->pc = 0x20f280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943488));
label_20f284:
    // 0x20f284: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f284u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f288:
    // 0x20f288: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f288u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f28c:
    // 0x20f28c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f290:
    // 0x20f290: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
label_20f294:
    // 0x20f294: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20f298:
    // 0x20f298: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f298u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f29c:
    // 0x20f29c: 0xc0bb6c0  jal         func_2EDB00
label_20f2a0:
    if (ctx->pc == 0x20F2A0u) {
        ctx->pc = 0x20F2A4u;
        goto label_20f2a4;
    }
    ctx->pc = 0x20F29Cu;
    SET_GPR_U32(ctx, 31, 0x20F2A4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F29Cu, 0x20F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2A4u;
label_20f2a4:
    // 0x20f2a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20f2a8:
    // 0x20f2a8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x20f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_20f2ac:
    // 0x20f2ac: 0x3c064411  lui         $a2, 0x4411
    ctx->pc = 0x20f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17425 << 16));
label_20f2b0:
    // 0x20f2b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f2b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f2b4:
    // 0x20f2b4: 0x3c07435c  lui         $a3, 0x435C
    ctx->pc = 0x20f2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17244 << 16));
label_20f2b8:
    // 0x20f2b8: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x20f2b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f2bc:
    // 0x20f2bc: 0x3c08435c  lui         $t0, 0x435C
    ctx->pc = 0x20f2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17244 << 16));
label_20f2c0:
    // 0x20f2c0: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x20f2c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f2c4:
    // 0x20f2c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f2c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f2c8:
    // 0x20f2c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f2c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f2cc:
    // 0x20f2cc: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x20f2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
label_20f2d0:
    // 0x20f2d0: 0x252aa300  addiu       $t2, $t1, -0x5D00
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943488));
label_20f2d4:
    // 0x20f2d4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x20f2d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f2d8:
    // 0x20f2d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f2d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f2dc:
    // 0x20f2dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f2dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f2e0:
    // 0x20f2e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20f2e4:
    // 0x20f2e4: 0x244aa310  addiu       $t2, $v0, -0x5CF0
    ctx->pc = 0x20f2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
label_20f2e8:
    // 0x20f2e8: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x20f2e8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f2ec:
    // 0x20f2ec: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20f2f0:
    // 0x20f2f0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f2f0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f2f4:
    // 0x20f2f4: 0xc0bb6c0  jal         func_2EDB00
label_20f2f8:
    if (ctx->pc == 0x20F2F8u) {
        ctx->pc = 0x20F2FCu;
        goto label_20f2fc;
    }
    ctx->pc = 0x20F2F4u;
    SET_GPR_U32(ctx, 31, 0x20F2FCu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F2F4u, 0x20F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2FCu;
label_20f2fc:
    // 0x20f2fc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20f2fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f300:
    // 0x20f300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f304:
    // 0x20f304: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f308:
    // 0x20f308: 0xa468127a  sh          $t0, 0x127A($v1)
    ctx->pc = 0x20f308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 8));
label_20f30c:
    // 0x20f30c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f30cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f310:
    // 0x20f310: 0x85231278  lh          $v1, 0x1278($t1)
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
label_20f314:
    // 0x20f314: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x20f314u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
label_20f318:
    // 0x20f318: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x20f318u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_20f31c:
    // 0x20f31c: 0x29410169  slti        $at, $t2, 0x169
    ctx->pc = 0x20f31cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)361) ? 1 : 0);
label_20f320:
    // 0x20f320: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_20f324:
    if (ctx->pc == 0x20F324u) {
        ctx->pc = 0x20F328u;
        goto label_20f328;
    }
    ctx->pc = 0x20F320u;
    {
        const bool branch_taken_0x20f320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f320) {
            ctx->pc = 0x20F344u;
            goto label_20f344;
        }
    }
    ctx->pc = 0x20F328u;
label_20f328:
    // 0x20f328: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f32c:
    // 0x20f32c: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20f330:
    // 0x20f330: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x20f330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_20f334:
    // 0x20f334: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f334u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20f338:
    // 0x20f338: 0x28c402d0  slti        $a0, $a2, 0x2D0
    ctx->pc = 0x20f338u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)720) ? 1 : 0);
label_20f33c:
    // 0x20f33c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_20f340:
    if (ctx->pc == 0x20F340u) {
        ctx->pc = 0x20F344u;
        goto label_20f344;
    }
    ctx->pc = 0x20F33Cu;
    {
        const bool branch_taken_0x20f33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f33c) {
            ctx->pc = 0x20F354u;
            goto label_20f354;
        }
    }
    ctx->pc = 0x20F344u;
label_20f344:
    // 0x20f344: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f348:
    // 0x20f348: 0x8c259540  lw          $a1, -0x6AC0($at)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939968)));
label_20f34c:
    // 0x20f34c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_20f350:
    if (ctx->pc == 0x20F350u) {
        ctx->pc = 0x20F354u;
        goto label_20f354;
    }
    ctx->pc = 0x20F34Cu;
    {
        const bool branch_taken_0x20f34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f34c) {
            ctx->pc = 0x20F3A4u;
            goto label_20f3a4;
        }
    }
    ctx->pc = 0x20F354u;
label_20f354:
    // 0x20f354: 0x3c03beb2  lui         $v1, 0xBEB2
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48818 << 16));
label_20f358:
    // 0x20f358: 0x34631643  ori         $v1, $v1, 0x1643
    ctx->pc = 0x20f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5699);
label_20f35c:
    // 0x20f35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f360:
    // 0x20f360: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f364:
    // 0x20f364: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x20f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_20f368:
    // 0x20f368: 0x3c04c28a  lui         $a0, 0xC28A
    ctx->pc = 0x20f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49802 << 16));
label_20f36c:
    // 0x20f36c: 0x3483f4df  ori         $v1, $a0, 0xF4DF
    ctx->pc = 0x20f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62687);
label_20f370:
    // 0x20f370: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f374:
    // 0x20f374: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f378:
    // 0x20f378: 0xe4ac0184  swc1        $f12, 0x184($a1)
    ctx->pc = 0x20f378u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
label_20f37c:
    // 0x20f37c: 0x3c034289  lui         $v1, 0x4289
    ctx->pc = 0x20f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17033 << 16));
label_20f380:
    // 0x20f380: 0x3466642d  ori         $a2, $v1, 0x642D
    ctx->pc = 0x20f380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25645);
label_20f384:
    // 0x20f384: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f384u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f388:
    // 0x20f388: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f38c:
    // 0x20f38c: 0xe48d0188  swc1        $f13, 0x188($a0)
    ctx->pc = 0x20f38cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_20f390:
    // 0x20f390: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f394:
    // 0x20f394: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20f394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_20f398:
    // 0x20f398: 0xc05cd34  jal         func_1734D0
label_20f39c:
    if (ctx->pc == 0x20F39Cu) {
        ctx->pc = 0x20F3A0u;
        goto label_20f3a0;
    }
    ctx->pc = 0x20F398u;
    SET_GPR_U32(ctx, 31, 0x20F3A0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20F398u, 0x20F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3A0u;
label_20f3a0:
    // 0x20f3a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20f3a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f3a4:
    // 0x20f3a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f3a8:
    // 0x20f3a8: 0x8c239540  lw          $v1, -0x6AC0($at)
    ctx->pc = 0x20f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939968)));
label_20f3ac:
    // 0x20f3ac: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_20f3b0:
    if (ctx->pc == 0x20F3B0u) {
        ctx->pc = 0x20F3B4u;
        goto label_20f3b4;
    }
    ctx->pc = 0x20F3ACu;
    {
        const bool branch_taken_0x20f3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f3ac) {
            ctx->pc = 0x20F470u;
            goto label_20f470;
        }
    }
    ctx->pc = 0x20F3B4u;
label_20f3b4:
    // 0x20f3b4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f3b8:
    // 0x20f3b8: 0x8c851310  lw          $a1, 0x1310($a0)
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4880)));
label_20f3bc:
    // 0x20f3bc: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x20f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_20f3c0:
    // 0x20f3c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x20f3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f3c4:
    // 0x20f3c4: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f3c8:
    // 0x20f3c8: 0xe4ce0180  swc1        $f14, 0x180($a2)
    ctx->pc = 0x20f3c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
label_20f3cc:
    // 0x20f3cc: 0x3c03c2ee  lui         $v1, 0xC2EE
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49902 << 16));
label_20f3d0:
    // 0x20f3d0: 0x34645555  ori         $a0, $v1, 0x5555
    ctx->pc = 0x20f3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_20f3d4:
    // 0x20f3d4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x20f3d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f3d8:
    // 0x20f3d8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f3dc:
    // 0x20f3dc: 0xe46c0184  swc1        $f12, 0x184($v1)
    ctx->pc = 0x20f3dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_20f3e0:
    // 0x20f3e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f3e4:
    // 0x20f3e4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f3e8:
    // 0x20f3e8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x20f3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_20f3ec:
    // 0x20f3ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f3f0:
    // 0x20f3f0: 0xc4219548  lwc1        $f1, -0x6AB8($at)
    ctx->pc = 0x20f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f3f4:
    // 0x20f3f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_20f3f8:
    // 0x20f3f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20f3f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f3fc:
    // 0x20f3fc: 0x0  nop
    ctx->pc = 0x20f3fcu;
    // NOP
label_20f400:
    // 0x20f400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f404:
    // 0x20f404: 0x0  nop
    ctx->pc = 0x20f404u;
    // NOP
label_20f408:
    // 0x20f408: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_20f40c:
    if (ctx->pc == 0x20F40Cu) {
        ctx->pc = 0x20F410u;
        goto label_20f410;
    }
    ctx->pc = 0x20F408u;
    {
        const bool branch_taken_0x20f408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f408) {
            ctx->pc = 0x20F434u;
            goto label_20f434;
        }
    }
    ctx->pc = 0x20F410u;
label_20f410:
    // 0x20f410: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f414:
    // 0x20f414: 0xc4209548  lwc1        $f0, -0x6AB8($at)
    ctx->pc = 0x20f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f418:
    // 0x20f418: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
label_20f41c:
    // 0x20f41c: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x20f41cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_20f420:
    // 0x20f420: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f424:
    // 0x20f424: 0x0  nop
    ctx->pc = 0x20f424u;
    // NOP
label_20f428:
    // 0x20f428: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x20f428u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_20f42c:
    // 0x20f42c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f430:
    // 0x20f430: 0xe42c9548  swc1        $f12, -0x6AB8($at)
    ctx->pc = 0x20f430u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939976), bits); }
label_20f434:
    // 0x20f434: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f438:
    // 0x20f438: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f43c:
    // 0x20f43c: 0x24c80180  addiu       $t0, $a2, 0x180
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_20f440:
    // 0x20f440: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20f440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_20f444:
    // 0x20f444: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x20f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_20f448:
    // 0x20f448: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f44c:
    // 0x20f44c: 0xc42c9548  lwc1        $f12, -0x6AB8($at)
    ctx->pc = 0x20f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20f450:
    // 0x20f450: 0xc040ed8  jal         func_103B60
label_20f454:
    if (ctx->pc == 0x20F454u) {
        ctx->pc = 0x20F458u;
        goto label_20f458;
    }
    ctx->pc = 0x20F450u;
    SET_GPR_U32(ctx, 31, 0x20F458u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x20F458u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20F458u) { return; }
    ctx->pc = 0x20F458u;
label_20f458:
    // 0x20f458: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20f458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f45c:
    // 0x20f45c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f45cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f460:
    // 0x20f460: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20f460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20f464:
    // 0x20f464: 0xc05cd34  jal         func_1734D0
label_20f468:
    if (ctx->pc == 0x20F468u) {
        ctx->pc = 0x20F46Cu;
        goto label_20f46c;
    }
    ctx->pc = 0x20F464u;
    SET_GPR_U32(ctx, 31, 0x20F46Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20F464u, 0x20F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F46Cu;
label_20f46c:
    // 0x20f46c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x20f46cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f470:
    // 0x20f470: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f474:
    // 0x20f474: 0x85631278  lh          $v1, 0x1278($t3)
    ctx->pc = 0x20f474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4728)));
label_20f478:
    // 0x20f478: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x20f478u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
label_20f47c:
    // 0x20f47c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x20f47cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_20f480:
    // 0x20f480: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_20f484:
    // 0x20f484: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
label_20f488:
    if (ctx->pc == 0x20F488u) {
        ctx->pc = 0x20F48Cu;
        goto label_20f48c;
    }
    ctx->pc = 0x20F484u;
    {
        const bool branch_taken_0x20f484 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x20f484) {
            ctx->pc = 0x20F49Cu;
            goto label_20f49c;
        }
    }
    ctx->pc = 0x20F48Cu;
label_20f48c:
    // 0x20f48c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f490:
    // 0x20f490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20f494:
    // 0x20f494: 0x34720002  ori         $s2, $v1, 0x2
    ctx->pc = 0x20f494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_20f498:
    // 0x20f498: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x20f498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
label_20f49c:
    // 0x20f49c: 0x8fb60528  lw          $s6, 0x528($sp)
    ctx->pc = 0x20f49cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f4a0:
    // 0x20f4a0: 0x86c61278  lh          $a2, 0x1278($s6)
    ctx->pc = 0x20f4a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4728)));
label_20f4a4:
    // 0x20f4a4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x20f4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
label_20f4a8:
    // 0x20f4a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20f4a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20f4ac:
    // 0x20f4ac: 0x28e102bc  slti        $at, $a3, 0x2BC
    ctx->pc = 0x20f4acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)700) ? 1 : 0);
label_20f4b0:
    // 0x20f4b0: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_20f4b4:
    if (ctx->pc == 0x20F4B4u) {
        ctx->pc = 0x20F4B8u;
        goto label_20f4b8;
    }
    ctx->pc = 0x20F4B0u;
    {
        const bool branch_taken_0x20f4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f4b0) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F4B8u;
label_20f4b8:
    // 0x20f4b8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x20f4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
label_20f4bc:
    // 0x20f4bc: 0x2509a340  addiu       $t1, $t0, -0x5CC0
    ctx->pc = 0x20f4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943552));
label_20f4c0:
    // 0x20f4c0: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_20f4c4:
    // 0x20f4c4: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x20f4c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_20f4c8:
    // 0x20f4c8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x20f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
label_20f4cc:
    // 0x20f4cc: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_20f4d0:
    // 0x20f4d0: 0x2684a350  addiu       $a0, $s4, -0x5CB0
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943568));
label_20f4d4:
    // 0x20f4d4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20f4d8:
    // 0x20f4d8: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20f4d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f4dc:
    // 0x20f4dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_20f4e0:
    // 0x20f4e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f4e4:
    // 0x20f4e4: 0x2465a360  addiu       $a1, $v1, -0x5CA0
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943584));
label_20f4e8:
    // 0x20f4e8: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x20f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20f4ec:
    // 0x20f4ec: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x20f4ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20f4f0:
    // 0x20f4f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_20f4f4:
    // 0x20f4f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f4f8:
    // 0x20f4f8: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x20f4f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f4fc:
    // 0x20f4fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f500:
    // 0x20f500: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f504:
    // 0x20f504: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x20f504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_20f508:
    // 0x20f508: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x20f508u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_20f50c:
    // 0x20f50c: 0x1684821  addu        $t1, $t3, $t0
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_20f510:
    // 0x20f510: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x20f510u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_20f514:
    // 0x20f514: 0xa2200  sll         $a0, $t2, 8
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_20f518:
    // 0x20f518: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f51c:
    // 0x20f51c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f520:
    // 0x20f520: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x20f520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20f524:
    // 0x20f524: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x20f524u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20f528:
    // 0x20f528: 0x1464821  addu        $t1, $t2, $a2
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_20f52c:
    // 0x20f52c: 0x3123ff00  andi        $v1, $t1, 0xFF00
    ctx->pc = 0x20f52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
label_20f530:
    // 0x20f530: 0x35202  srl         $t2, $v1, 8
    ctx->pc = 0x20f530u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_20f534:
    // 0x20f534: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_20f538:
    // 0x20f538: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f53c:
    // 0x20f53c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_20f540:
    // 0x20f540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20f540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f544:
    // 0x20f544: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_20f548:
    // 0x20f548: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x20f548u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_20f54c:
    // 0x20f54c: 0x0  nop
    ctx->pc = 0x20f54cu;
    // NOP
label_20f550:
    // 0x20f550: 0x0  nop
    ctx->pc = 0x20f550u;
    // NOP
label_20f554:
    // 0x20f554: 0x2010  mfhi        $a0
    ctx->pc = 0x20f554u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20f558:
    // 0x20f558: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_20f55c:
    // 0x20f55c: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x20f55cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f560:
    // 0x20f560: 0xc06765c  jal         func_19D970
label_20f564:
    if (ctx->pc == 0x20F564u) {
        ctx->pc = 0x20F568u;
        goto label_20f568;
    }
    ctx->pc = 0x20F560u;
    SET_GPR_U32(ctx, 31, 0x20F568u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F560u, 0x20F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F568u;
label_20f568:
    // 0x20f568: 0x3c074409  lui         $a3, 0x4409
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17417 << 16));
label_20f56c:
    // 0x20f56c: 0x34f08000  ori         $s0, $a3, 0x8000
    ctx->pc = 0x20f56cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
label_20f570:
    // 0x20f570: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x20f570u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f574:
    // 0x20f574: 0x0  nop
    ctx->pc = 0x20f574u;
    // NOP
label_20f578:
    // 0x20f578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f57c:
    // 0x20f57c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x20f57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_20f580:
    // 0x20f580: 0xc06765c  jal         func_19D970
label_20f584:
    if (ctx->pc == 0x20F584u) {
        ctx->pc = 0x20F588u;
        goto label_20f588;
    }
    ctx->pc = 0x20F580u;
    SET_GPR_U32(ctx, 31, 0x20F588u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F580u, 0x20F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F588u;
label_20f588:
    // 0x20f588: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
label_20f58c:
    // 0x20f58c: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x20f58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_20f590:
    // 0x20f590: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f590u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f594:
    // 0x20f594: 0x0  nop
    ctx->pc = 0x20f594u;
    // NOP
label_20f598:
    // 0x20f598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f59c:
    // 0x20f59c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x20f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_20f5a0:
    // 0x20f5a0: 0xc06765c  jal         func_19D970
label_20f5a4:
    if (ctx->pc == 0x20F5A4u) {
        ctx->pc = 0x20F5A8u;
        goto label_20f5a8;
    }
    ctx->pc = 0x20F5A0u;
    SET_GPR_U32(ctx, 31, 0x20F5A8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F5A0u, 0x20F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
label_20f5ac:
    // 0x20f5ac: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20f5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_20f5b0:
    // 0x20f5b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f5b4:
    // 0x20f5b4: 0x0  nop
    ctx->pc = 0x20f5b4u;
    // NOP
label_20f5b8:
    // 0x20f5b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f5bc:
    // 0x20f5bc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x20f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_20f5c0:
    // 0x20f5c0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20f5c4:
    // 0x20f5c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f5c8:
    // 0x20f5c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20f5cc:
    // 0x20f5cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f5d0:
    // 0x20f5d0: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x20f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
label_20f5d4:
    // 0x20f5d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f5d8:
    // 0x20f5d8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x20f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_20f5dc:
    // 0x20f5dc: 0x32e900ff  andi        $t1, $s7, 0xFF
    ctx->pc = 0x20f5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_20f5e0:
    // 0x20f5e0: 0x33ca00ff  andi        $t2, $fp, 0xFF
    ctx->pc = 0x20f5e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_20f5e4:
    // 0x20f5e4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x20f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_20f5e8:
    // 0x20f5e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f5ec:
    // 0x20f5ec: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x20f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_20f5f0:
    // 0x20f5f0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x20f5f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f5f4:
    // 0x20f5f4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x20f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_20f5f8:
    // 0x20f5f8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20f5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f5fc:
    // 0x20f5fc: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f600:
    // 0x20f600: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x20f600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20f604:
    // 0x20f604: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x20f604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_20f608:
    // 0x20f608: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f60c:
    // 0x20f60c: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20f60cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f610:
    // 0x20f610: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x20f610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20f614:
    // 0x20f614: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20f618:
    // 0x20f618: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f618u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f61c:
    // 0x20f61c: 0xc0bb888  jal         func_2EE220
label_20f620:
    if (ctx->pc == 0x20F620u) {
        ctx->pc = 0x20F624u;
        goto label_20f624;
    }
    ctx->pc = 0x20F61Cu;
    SET_GPR_U32(ctx, 31, 0x20F624u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x20F61Cu, 0x20F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F624u;
label_20f624:
    // 0x20f624: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20f624u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f628:
    // 0x20f628: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f62c:
    // 0x20f62c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20f62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20f630:
    // 0x20f630: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20f630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_20f634:
    // 0x20f634: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f634u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_20f638:
    // 0x20f638: 0x2921026d  slti        $at, $t1, 0x26D
    ctx->pc = 0x20f638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)621) ? 1 : 0);
label_20f63c:
    // 0x20f63c: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_20f640:
    if (ctx->pc == 0x20F640u) {
        ctx->pc = 0x20F644u;
        goto label_20f644;
    }
    ctx->pc = 0x20F63Cu;
    {
        const bool branch_taken_0x20f63c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f63c) {
            ctx->pc = 0x20F694u;
            goto label_20f694;
        }
    }
    ctx->pc = 0x20F644u;
label_20f644:
    // 0x20f644: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f648:
    // 0x20f648: 0x914309e7  lbu         $v1, 0x9E7($t2)
    ctx->pc = 0x20f648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2535)));
label_20f64c:
    // 0x20f64c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_20f650:
    if (ctx->pc == 0x20F650u) {
        ctx->pc = 0x20F654u;
        goto label_20f654;
    }
    ctx->pc = 0x20F64Cu;
    {
        const bool branch_taken_0x20f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f64c) {
            ctx->pc = 0x20F694u;
            goto label_20f694;
        }
    }
    ctx->pc = 0x20F654u;
label_20f654:
    // 0x20f654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f658:
    // 0x20f658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20f65c:
    // 0x20f65c: 0xac259540  sw          $a1, -0x6AC0($at)
    ctx->pc = 0x20f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939968), GPR_U32(ctx, 5));
label_20f660:
    // 0x20f660: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f664:
    // 0x20f664: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x20f664u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f668:
    // 0x20f668: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x20f668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_20f66c:
    // 0x20f66c: 0x8c630368  lw          $v1, 0x368($v1)
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_20f670:
    // 0x20f670: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20f670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20f674:
    // 0x20f674: 0x2409780a  addiu       $t1, $zero, 0x780A
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
label_20f678:
    // 0x20f678: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x20f678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20f67c:
    // 0x20f67c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f680:
    // 0x20f680: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20f680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f684:
    // 0x20f684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20f684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f688:
    // 0x20f688: 0xc0965d0  jal         func_259740
label_20f68c:
    if (ctx->pc == 0x20F68Cu) {
        ctx->pc = 0x20F690u;
        goto label_20f690;
    }
    ctx->pc = 0x20F688u;
    SET_GPR_U32(ctx, 31, 0x20F690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20F688u, 0x20F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F690u;
label_20f690:
    // 0x20f690: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20f690u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f694:
    // 0x20f694: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f698:
    // 0x20f698: 0x85451278  lh          $a1, 0x1278($t2)
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20f69c:
    // 0x20f69c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_20f6a0:
    // 0x20f6a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f6a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20f6a4:
    // 0x20f6a4: 0x24040270  addiu       $a0, $zero, 0x270
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_20f6a8:
    // 0x20f6a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_20f6ac:
    if (ctx->pc == 0x20F6ACu) {
        ctx->pc = 0x20F6B0u;
        goto label_20f6b0;
    }
    ctx->pc = 0x20F6A8u;
    {
        const bool branch_taken_0x20f6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20f6a8) {
            ctx->pc = 0x20F6D4u;
            goto label_20f6d4;
        }
    }
    ctx->pc = 0x20F6B0u;
label_20f6b0:
    // 0x20f6b0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f6b4:
    // 0x20f6b4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f6b8:
    // 0x20f6b8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_20f6bc:
    // 0x20f6bc: 0x24067811  addiu       $a2, $zero, 0x7811
    ctx->pc = 0x20f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30737));
label_20f6c0:
    // 0x20f6c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f6c4:
    // 0x20f6c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f6c8:
    // 0x20f6c8: 0xc0965d0  jal         func_259740
label_20f6cc:
    if (ctx->pc == 0x20F6CCu) {
        ctx->pc = 0x20F6D0u;
        goto label_20f6d0;
    }
    ctx->pc = 0x20F6C8u;
    SET_GPR_U32(ctx, 31, 0x20F6D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20F6C8u, 0x20F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6D0u;
label_20f6d0:
    // 0x20f6d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20f6d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f6d4:
    // 0x20f6d4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f6d8:
    // 0x20f6d8: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20f6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20f6dc:
    // 0x20f6dc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x20f6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_20f6e0:
    // 0x20f6e0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f6e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20f6e4:
    // 0x20f6e4: 0x28c10245  slti        $at, $a2, 0x245
    ctx->pc = 0x20f6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)581) ? 1 : 0);
label_20f6e8:
    // 0x20f6e8: 0x1420005e  bnez        $at, . + 4 + (0x5E << 2)
label_20f6ec:
    if (ctx->pc == 0x20F6ECu) {
        ctx->pc = 0x20F6F0u;
        goto label_20f6f0;
    }
    ctx->pc = 0x20F6E8u;
    {
        const bool branch_taken_0x20f6e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f6e8) {
            ctx->pc = 0x20F864u;
            goto label_20f864;
        }
    }
    ctx->pc = 0x20F6F0u;
label_20f6f0:
    // 0x20f6f0: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f6f4:
    // 0x20f6f4: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20f6f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20f6f8:
    // 0x20f6f8: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20f6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_20f6fc:
    // 0x20f6fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f6fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20f700:
    // 0x20f700: 0x28c102b5  slti        $at, $a2, 0x2B5
    ctx->pc = 0x20f700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)693) ? 1 : 0);
label_20f704:
    // 0x20f704: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
label_20f708:
    if (ctx->pc == 0x20F708u) {
        ctx->pc = 0x20F70Cu;
        goto label_20f70c;
    }
    ctx->pc = 0x20F704u;
    {
        const bool branch_taken_0x20f704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f704) {
            ctx->pc = 0x20F864u;
            goto label_20f864;
        }
    }
    ctx->pc = 0x20F70Cu;
label_20f70c:
    // 0x20f70c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f710:
    // 0x20f710: 0x2464a370  addiu       $a0, $v1, -0x5C90
    ctx->pc = 0x20f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943600));
label_20f714:
    // 0x20f714: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_20f718:
    // 0x20f718: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20f718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f71c:
    // 0x20f71c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x20f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_20f720:
    // 0x20f720: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_20f724:
    // 0x20f724: 0x24c3a380  addiu       $v1, $a2, -0x5C80
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943616));
label_20f728:
    // 0x20f728: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x20f728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20f72c:
    // 0x20f72c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20f72cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20f730:
    // 0x20f730: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20f730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_20f734:
    // 0x20f734: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f738:
    // 0x20f738: 0x2464a390  addiu       $a0, $v1, -0x5C70
    ctx->pc = 0x20f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943632));
label_20f73c:
    // 0x20f73c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x20f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20f740:
    // 0x20f740: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x20f740u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f744:
    // 0x20f744: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x20f744u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_20f748:
    // 0x20f748: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f74c:
    // 0x20f74c: 0xa3a3051a  sb          $v1, 0x51A($sp)
    ctx->pc = 0x20f74cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1306), (uint8_t)GPR_U32(ctx, 3));
label_20f750:
    // 0x20f750: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f754:
    // 0x20f754: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f758:
    // 0x20f758: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x20f758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_20f75c:
    // 0x20f75c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20f760:
    // 0x20f760: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f764:
    // 0x20f764: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x20f764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_20f768:
    // 0x20f768: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_20f76c:
    // 0x20f76c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f770:
    // 0x20f770: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_20f774:
    // 0x20f774: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x20f774u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20f778:
    // 0x20f778: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20f77c:
    // 0x20f77c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_20f780:
    // 0x20f780: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x20f780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
label_20f784:
    // 0x20f784: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_20f788:
    // 0x20f788: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20f78c:
    // 0x20f78c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_20f790:
    // 0x20f790: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20f790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_20f794:
    // 0x20f794: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20f794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f798:
    // 0x20f798: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_20f79c:
    // 0x20f79c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x20f79cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_20f7a0:
    // 0x20f7a0: 0x0  nop
    ctx->pc = 0x20f7a0u;
    // NOP
label_20f7a4:
    // 0x20f7a4: 0x0  nop
    ctx->pc = 0x20f7a4u;
    // NOP
label_20f7a8:
    // 0x20f7a8: 0x1810  mfhi        $v1
    ctx->pc = 0x20f7a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20f7ac:
    // 0x20f7ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20f7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f7b0:
    // 0x20f7b0: 0xa3a3051b  sb          $v1, 0x51B($sp)
    ctx->pc = 0x20f7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1307), (uint8_t)GPR_U32(ctx, 3));
label_20f7b4:
    // 0x20f7b4: 0xc06765c  jal         func_19D970
label_20f7b8:
    if (ctx->pc == 0x20F7B8u) {
        ctx->pc = 0x20F7BCu;
        goto label_20f7bc;
    }
    ctx->pc = 0x20F7B4u;
    SET_GPR_U32(ctx, 31, 0x20F7BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7B4u, 0x20F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7BCu;
label_20f7bc:
    // 0x20f7bc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x20f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
label_20f7c0:
    // 0x20f7c0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20f7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_20f7c4:
    // 0x20f7c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f7c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f7c8:
    // 0x20f7c8: 0x0  nop
    ctx->pc = 0x20f7c8u;
    // NOP
label_20f7cc:
    // 0x20f7cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f7d0:
    // 0x20f7d0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x20f7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_20f7d4:
    // 0x20f7d4: 0xc06765c  jal         func_19D970
label_20f7d8:
    if (ctx->pc == 0x20F7D8u) {
        ctx->pc = 0x20F7DCu;
        goto label_20f7dc;
    }
    ctx->pc = 0x20F7D4u;
    SET_GPR_U32(ctx, 31, 0x20F7DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7D4u, 0x20F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7DCu;
label_20f7dc:
    // 0x20f7dc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
label_20f7e0:
    // 0x20f7e0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_20f7e4:
    // 0x20f7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f7e8:
    // 0x20f7e8: 0x0  nop
    ctx->pc = 0x20f7e8u;
    // NOP
label_20f7ec:
    // 0x20f7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f7f0:
    // 0x20f7f0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x20f7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_20f7f4:
    // 0x20f7f4: 0xc06765c  jal         func_19D970
label_20f7f8:
    if (ctx->pc == 0x20F7F8u) {
        ctx->pc = 0x20F7FCu;
        goto label_20f7fc;
    }
    ctx->pc = 0x20F7F4u;
    SET_GPR_U32(ctx, 31, 0x20F7FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7F4u, 0x20F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7FCu;
label_20f7fc:
    // 0x20f7fc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
label_20f800:
    // 0x20f800: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20f800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_20f804:
    // 0x20f804: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f804u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f808:
    // 0x20f808: 0x0  nop
    ctx->pc = 0x20f808u;
    // NOP
label_20f80c:
    // 0x20f80c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f810:
    // 0x20f810: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x20f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_20f814:
    // 0x20f814: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
label_20f818:
    // 0x20f818: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f818u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f81c:
    // 0x20f81c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x20f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_20f820:
    // 0x20f820: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x20f820u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f824:
    // 0x20f824: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20f828:
    // 0x20f828: 0x93a3051a  lbu         $v1, 0x51A($sp)
    ctx->pc = 0x20f828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1306)));
label_20f82c:
    // 0x20f82c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x20f82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f830:
    // 0x20f830: 0x93a3051b  lbu         $v1, 0x51B($sp)
    ctx->pc = 0x20f830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1307)));
label_20f834:
    // 0x20f834: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x20f834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20f838:
    // 0x20f838: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
label_20f83c:
    // 0x20f83c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x20f83cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f840:
    // 0x20f840: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f844:
    // 0x20f844: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20f844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f848:
    // 0x20f848: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_20f84c:
    // 0x20f84c: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f850:
    // 0x20f850: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x20f850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20f854:
    // 0x20f854: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20f858:
    // 0x20f858: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f858u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f85c:
    // 0x20f85c: 0xc0bb6c0  jal         func_2EDB00
label_20f860:
    if (ctx->pc == 0x20F860u) {
        ctx->pc = 0x20F864u;
        goto label_20f864;
    }
    ctx->pc = 0x20F85Cu;
    SET_GPR_U32(ctx, 31, 0x20F864u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F85Cu, 0x20F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F864u;
label_20f864:
    // 0x20f864: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f868:
    // 0x20f868: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20f868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20f86c:
    // 0x20f86c: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_20f870:
    // 0x20f870: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20f870u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_20f874:
    // 0x20f874: 0x28a102ab  slti        $at, $a1, 0x2AB
    ctx->pc = 0x20f874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)683) ? 1 : 0);
label_20f878:
    // 0x20f878: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
label_20f87c:
    if (ctx->pc == 0x20F87Cu) {
        ctx->pc = 0x20F880u;
        goto label_20f880;
    }
    ctx->pc = 0x20F878u;
    {
        const bool branch_taken_0x20f878 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f878) {
            ctx->pc = 0x20F9B8u;
            goto label_20f9b8;
        }
    }
    ctx->pc = 0x20F880u;
label_20f880:
    // 0x20f880: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f884:
    // 0x20f884: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20f888:
    // 0x20f888: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20f888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_20f88c:
    // 0x20f88c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f88cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20f890:
    // 0x20f890: 0x286102b0  slti        $at, $v1, 0x2B0
    ctx->pc = 0x20f890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)688) ? 1 : 0);
label_20f894:
    // 0x20f894: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_20f898:
    if (ctx->pc == 0x20F898u) {
        ctx->pc = 0x20F89Cu;
        goto label_20f89c;
    }
    ctx->pc = 0x20F894u;
    {
        const bool branch_taken_0x20f894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f894) {
            ctx->pc = 0x20F9B8u;
            goto label_20f9b8;
        }
    }
    ctx->pc = 0x20F89Cu;
label_20f89c:
    // 0x20f89c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_20f8a0:
    // 0x20f8a0: 0x24c6a3a0  addiu       $a2, $a2, -0x5C60
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943648));
label_20f8a4:
    // 0x20f8a4: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x20f8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f8a8:
    // 0x20f8a8: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x20f8a8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20f8ac:
    // 0x20f8ac: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x20f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_20f8b0:
    // 0x20f8b0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_20f8b4:
    // 0x20f8b4: 0x2485a3b0  addiu       $a1, $a0, -0x5C50
    ctx->pc = 0x20f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943664));
label_20f8b8:
    // 0x20f8b8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f8bc:
    // 0x20f8bc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x20f8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20f8c0:
    // 0x20f8c0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x20f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_20f8c4:
    // 0x20f8c4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_20f8c8:
    // 0x20f8c8: 0x2486a3c0  addiu       $a2, $a0, -0x5C40
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943680));
label_20f8cc:
    // 0x20f8cc: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x20f8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f8d0:
    // 0x20f8d0: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x20f8d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20f8d4:
    // 0x20f8d4: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x20f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_20f8d8:
    // 0x20f8d8: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
label_20f8dc:
    // 0x20f8dc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20f8dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f8e0:
    // 0x20f8e0: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
label_20f8e4:
    // 0x20f8e4: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f8e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f8e8:
    // 0x20f8e8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20f8ec:
    // 0x20f8ec: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_20f8f0:
    // 0x20f8f0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20f8f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f8f4:
    // 0x20f8f4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f8f8:
    // 0x20f8f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20f8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20f8fc:
    // 0x20f8fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f900:
    // 0x20f900: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20f900u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_20f904:
    // 0x20f904: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f908:
    // 0x20f908: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20f908u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_20f90c:
    // 0x20f90c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f910:
    // 0x20f910: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x20f910u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_20f914:
    // 0x20f914: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x20f914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20f918:
    // 0x20f918: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20f918u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20f91c:
    // 0x20f91c: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x20f91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f920:
    // 0x20f920: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f924:
    // 0x20f924: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f924u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f928:
    // 0x20f928: 0xc0bb6c0  jal         func_2EDB00
label_20f92c:
    if (ctx->pc == 0x20F92Cu) {
        ctx->pc = 0x20F930u;
        goto label_20f930;
    }
    ctx->pc = 0x20F928u;
    SET_GPR_U32(ctx, 31, 0x20F930u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F928u, 0x20F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F930u;
label_20f930:
    // 0x20f930: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20f930u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f934:
    // 0x20f934: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20f938:
    // 0x20f938: 0x2466a3d0  addiu       $a2, $v1, -0x5C30
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
label_20f93c:
    // 0x20f93c: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20f940:
    // 0x20f940: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x20f940u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20f944:
    // 0x20f944: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x20f944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
label_20f948:
    // 0x20f948: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_20f94c:
    // 0x20f94c: 0x2543a3e0  addiu       $v1, $t2, -0x5C20
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943712));
label_20f950:
    // 0x20f950: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_20f954:
    // 0x20f954: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20f954u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20f958:
    // 0x20f958: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20f958u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_20f95c:
    // 0x20f95c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_20f960:
    // 0x20f960: 0x24c9a3f0  addiu       $t1, $a2, -0x5C10
    ctx->pc = 0x20f960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943728));
label_20f964:
    // 0x20f964: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x20f964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_20f968:
    // 0x20f968: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x20f968u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_20f96c:
    // 0x20f96c: 0x7d460000  sq          $a2, 0x0($t2)
    ctx->pc = 0x20f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 6));
label_20f970:
    // 0x20f970: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20f974:
    // 0x20f974: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x20f974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_20f978:
    // 0x20f978: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f97c:
    // 0x20f97c: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x20f97cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
label_20f980:
    // 0x20f980: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x20f980u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f984:
    // 0x20f984: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x20f984u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_20f988:
    // 0x20f988: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x20f988u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20f98c:
    // 0x20f98c: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x20f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f990:
    // 0x20f990: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20f990u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20f994:
    // 0x20f994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f998:
    // 0x20f998: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x20f998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20f99c:
    // 0x20f99c: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f9a0:
    // 0x20f9a0: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20f9a4:
    // 0x20f9a4: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_20f9a8:
    // 0x20f9a8: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_20f9ac:
    // 0x20f9ac: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f9acu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20f9b0:
    // 0x20f9b0: 0xc0bb6c0  jal         func_2EDB00
label_20f9b4:
    if (ctx->pc == 0x20F9B4u) {
        ctx->pc = 0x20F9B8u;
        goto label_20f9b8;
    }
    ctx->pc = 0x20F9B0u;
    SET_GPR_U32(ctx, 31, 0x20F9B8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F9B0u, 0x20F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9B8u;
label_20f9b8:
    // 0x20f9b8: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f9bc:
    // 0x20f9bc: 0x854a1278  lh          $t2, 0x1278($t2)
    ctx->pc = 0x20f9bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20f9c0:
    // 0x20f9c0: 0xa3c3c  dsll32      $a3, $t2, 16
    ctx->pc = 0x20f9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 16));
label_20f9c4:
    // 0x20f9c4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20f9c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20f9c8:
    // 0x20f9c8: 0x28e10281  slti        $at, $a3, 0x281
    ctx->pc = 0x20f9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)641) ? 1 : 0);
label_20f9cc:
    // 0x20f9cc: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_20f9d0:
    if (ctx->pc == 0x20F9D0u) {
        ctx->pc = 0x20F9D4u;
        goto label_20f9d4;
    }
    ctx->pc = 0x20F9CCu;
    {
        const bool branch_taken_0x20f9cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f9cc) {
            ctx->pc = 0x20FA38u;
            goto label_20fa38;
        }
    }
    ctx->pc = 0x20F9D4u;
label_20f9d4:
    // 0x20f9d4: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20f9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f9d8:
    // 0x20f9d8: 0x85031278  lh          $v1, 0x1278($t0)
    ctx->pc = 0x20f9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4728)));
label_20f9dc:
    // 0x20f9dc: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20f9dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_20f9e0:
    // 0x20f9e0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f9e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_20f9e4:
    // 0x20f9e4: 0x292102c0  slti        $at, $t1, 0x2C0
    ctx->pc = 0x20f9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)704) ? 1 : 0);
label_20f9e8:
    // 0x20f9e8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_20f9ec:
    if (ctx->pc == 0x20F9ECu) {
        ctx->pc = 0x20F9F0u;
        goto label_20f9f0;
    }
    ctx->pc = 0x20F9E8u;
    {
        const bool branch_taken_0x20f9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9e8) {
            ctx->pc = 0x20FA38u;
            goto label_20fa38;
        }
    }
    ctx->pc = 0x20F9F0u;
label_20f9f0:
    // 0x20f9f0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20f9f4:
    // 0x20f9f4: 0x846a1278  lh          $t2, 0x1278($v1)
    ctx->pc = 0x20f9f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20f9f8:
    // 0x20f9f8: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
label_20f9fc:
    // 0x20f9fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f9fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fa00:
    // 0x20fa00: 0x2464fd80  addiu       $a0, $v1, -0x280
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966656));
label_20fa04:
    // 0x20fa04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20fa04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fa08:
    // 0x20fa08: 0x0  nop
    ctx->pc = 0x20fa08u;
    // NOP
label_20fa0c:
    // 0x20fa0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20fa0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20fa10:
    // 0x20fa10: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_20fa14:
    // 0x20fa14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20fa14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fa18:
    // 0x20fa18: 0x0  nop
    ctx->pc = 0x20fa18u;
    // NOP
label_20fa1c:
    // 0x20fa1c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x20fa1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20fa20:
    // 0x20fa20: 0x0  nop
    ctx->pc = 0x20fa20u;
    // NOP
label_20fa24:
    // 0x20fa24: 0x0  nop
    ctx->pc = 0x20fa24u;
    // NOP
label_20fa28:
    // 0x20fa28: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa2c:
    // 0x20fa2c: 0xc0962bc  jal         func_258AF0
label_20fa30:
    if (ctx->pc == 0x20FA30u) {
        ctx->pc = 0x20FA34u;
        goto label_20fa34;
    }
    ctx->pc = 0x20FA2Cu;
    SET_GPR_U32(ctx, 31, 0x20FA34u);
    ctx->pc = 0x258AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AF0u, 0x20FA2Cu, 0x20FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA34u;
label_20fa34:
    // 0x20fa34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20fa34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20fa38:
    // 0x20fa38: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa3c:
    // 0x20fa3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20fa3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fa40:
    // 0x20fa40: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20fa44:
    // 0x20fa44: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fa44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fa48:
    // 0x20fa48: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x20fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
label_20fa4c:
    // 0x20fa4c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_20fa50:
    if (ctx->pc == 0x20FA50u) {
        ctx->pc = 0x20FA54u;
        goto label_20fa54;
    }
    ctx->pc = 0x20FA4Cu;
    {
        const bool branch_taken_0x20fa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fa4c) {
            ctx->pc = 0x20FA70u;
            goto label_20fa70;
        }
    }
    ctx->pc = 0x20FA54u;
label_20fa54:
    // 0x20fa54: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa58:
    // 0x20fa58: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20fa5c:
    // 0x20fa5c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_20fa60:
    // 0x20fa60: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20fa60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20fa64:
    // 0x20fa64: 0x240302c1  addiu       $v1, $zero, 0x2C1
    ctx->pc = 0x20fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_20fa68:
    // 0x20fa68: 0x14c30037  bne         $a2, $v1, . + 4 + (0x37 << 2)
label_20fa6c:
    if (ctx->pc == 0x20FA6Cu) {
        ctx->pc = 0x20FA70u;
        goto label_20fa70;
    }
    ctx->pc = 0x20FA68u;
    {
        const bool branch_taken_0x20fa68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fa68) {
            ctx->pc = 0x20FB48u;
            goto label_20fb48;
        }
    }
    ctx->pc = 0x20FA70u;
label_20fa70:
    // 0x20fa70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fa74:
    // 0x20fa74: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa78:
    // 0x20fa78: 0x8ca61310  lw          $a2, 0x1310($a1)
    ctx->pc = 0x20fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4880)));
label_20fa7c:
    // 0x20fa7c: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x20fa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_20fa80:
    // 0x20fa80: 0x3c043da3  lui         $a0, 0x3DA3
    ctx->pc = 0x20fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15779 << 16));
label_20fa84:
    // 0x20fa84: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x20fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_20fa88:
    // 0x20fa88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fa88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fa8c:
    // 0x20fa8c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa90:
    // 0x20fa90: 0x8ca61310  lw          $a2, 0x1310($a1)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4880)));
label_20fa94:
    // 0x20fa94: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20fa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_20fa98:
    // 0x20fa98: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fa9c:
    // 0x20fa9c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x20fa9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_20faa0:
    // 0x20faa0: 0x3063fff9  andi        $v1, $v1, 0xFFF9
    ctx->pc = 0x20faa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65529);
label_20faa4:
    // 0x20faa4: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x20faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
label_20faa8:
    // 0x20faa8: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20faac:
    // 0x20faac: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x20faacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_20fab0:
    // 0x20fab0: 0x34a60001  ori         $a2, $a1, 0x1
    ctx->pc = 0x20fab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_20fab4:
    // 0x20fab4: 0xa486000c  sh          $a2, 0xC($a0)
    ctx->pc = 0x20fab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 6));
label_20fab8:
    // 0x20fab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20fabc:
    // 0x20fabc: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x20fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_20fac0:
    // 0x20fac0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x20fac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_20fac4:
    // 0x20fac4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fac8:
    // 0x20fac8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20fac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20facc:
    // 0x20facc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fad0:
    // 0x20fad0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x20fad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_20fad4:
    // 0x20fad4: 0xc095fe0  jal         func_257F80
label_20fad8:
    if (ctx->pc == 0x20FAD8u) {
        ctx->pc = 0x20FADCu;
        goto label_20fadc;
    }
    ctx->pc = 0x20FAD4u;
    SET_GPR_U32(ctx, 31, 0x20FADCu);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x20FAD4u, 0x20FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FADCu;
label_20fadc:
    // 0x20fadc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20fadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20fae0:
    // 0x20fae0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fae4:
    // 0x20fae4: 0x84c91278  lh          $t1, 0x1278($a2)
    ctx->pc = 0x20fae4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_20fae8:
    // 0x20fae8: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x20fae8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_20faec:
    // 0x20faec: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x20faecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_20faf0:
    // 0x20faf0: 0x240b02bc  addiu       $t3, $zero, 0x2BC
    ctx->pc = 0x20faf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
label_20faf4:
    // 0x20faf4: 0x114b0014  beq         $t2, $t3, . + 4 + (0x14 << 2)
label_20faf8:
    if (ctx->pc == 0x20FAF8u) {
        ctx->pc = 0x20FAFCu;
        goto label_20fafc;
    }
    ctx->pc = 0x20FAF4u;
    {
        const bool branch_taken_0x20faf4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        if (branch_taken_0x20faf4) {
            ctx->pc = 0x20FB48u;
            goto label_20fb48;
        }
    }
    ctx->pc = 0x20FAFCu;
label_20fafc:
    // 0x20fafc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x20fafcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fb00:
    // 0x20fb00: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fb04:
    // 0x20fb04: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_20fb08:
    // 0x20fb08: 0x0  nop
    ctx->pc = 0x20fb08u;
    // NOP
label_20fb0c:
    // 0x20fb0c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20fb10:
    // 0x20fb10: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x20fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
label_20fb14:
    // 0x20fb14: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20fb18:
    // 0x20fb18: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x20fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
label_20fb1c:
    // 0x20fb1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20fb20:
    // 0x20fb20: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x20fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_20fb24:
    // 0x20fb24: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x20fb24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_20fb28:
    // 0x20fb28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20fb2c:
    // 0x20fb2c: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fb30:
    // 0x20fb30: 0x94c70052  lhu         $a3, 0x52($a2)
    ctx->pc = 0x20fb30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 82)));
label_20fb34:
    // 0x20fb34: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x20fb34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_20fb38:
    // 0x20fb38: 0x2c8482b  sltu        $t1, $s6, $t0
    ctx->pc = 0x20fb38u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_20fb3c:
    // 0x20fb3c: 0x1520fff3  bnez        $t1, . + 4 + (-0xD << 2)
label_20fb40:
    if (ctx->pc == 0x20FB40u) {
        ctx->pc = 0x20FB44u;
        goto label_20fb44;
    }
    ctx->pc = 0x20FB3Cu;
    {
        const bool branch_taken_0x20fb3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb3c) {
            ctx->pc = 0x20FB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb0c;
        }
    }
    ctx->pc = 0x20FB44u;
label_20fb44:
    // 0x20fb44: 0x0  nop
    ctx->pc = 0x20fb44u;
    // NOP
label_20fb48:
    // 0x20fb48: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fb4c:
    // 0x20fb4c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_20fb50:
    // 0x20fb50: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x20fb50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
label_20fb54:
    // 0x20fb54: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x20fb54u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
label_20fb58:
    // 0x20fb58: 0x2a8402b6  slti        $a0, $s4, 0x2B6
    ctx->pc = 0x20fb58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)694) ? 1 : 0);
label_20fb5c:
    // 0x20fb5c: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
label_20fb60:
    if (ctx->pc == 0x20FB60u) {
        ctx->pc = 0x20FB64u;
        goto label_20fb64;
    }
    ctx->pc = 0x20FB5Cu;
    {
        const bool branch_taken_0x20fb5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb5c) {
            ctx->pc = 0x20FC2Cu;
            goto label_20fc2c;
        }
    }
    ctx->pc = 0x20FB64u;
label_20fb64:
    // 0x20fb64: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fb68:
    // 0x20fb68: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fb6c:
    // 0x20fb6c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x20fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_20fb70:
    // 0x20fb70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fb74:
    // 0x20fb74: 0x286102db  slti        $at, $v1, 0x2DB
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)731) ? 1 : 0);
label_20fb78:
    // 0x20fb78: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_20fb7c:
    if (ctx->pc == 0x20FB7Cu) {
        ctx->pc = 0x20FB80u;
        goto label_20fb80;
    }
    ctx->pc = 0x20FB78u;
    {
        const bool branch_taken_0x20fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb78) {
            ctx->pc = 0x20FC2Cu;
            goto label_20fc2c;
        }
    }
    ctx->pc = 0x20FB80u;
label_20fb80:
    // 0x20fb80: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fb84:
    // 0x20fb84: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fb84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fb88:
    // 0x20fb88: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20fb8c:
    // 0x20fb8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fb8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fb90:
    // 0x20fb90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x20fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20fb94:
    // 0x20fb94: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x20fb94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20fb98:
    // 0x20fb98: 0x0  nop
    ctx->pc = 0x20fb98u;
    // NOP
label_20fb9c:
    // 0x20fb9c: 0x0  nop
    ctx->pc = 0x20fb9cu;
    // NOP
label_20fba0:
    // 0x20fba0: 0xb810  mfhi        $s7
    ctx->pc = 0x20fba0u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_20fba4:
    // 0x20fba4: 0x16e00021  bnez        $s7, . + 4 + (0x21 << 2)
label_20fba8:
    if (ctx->pc == 0x20FBA8u) {
        ctx->pc = 0x20FBACu;
        goto label_20fbac;
    }
    ctx->pc = 0x20FBA4u;
    {
        const bool branch_taken_0x20fba4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fba4) {
            ctx->pc = 0x20FC2Cu;
            goto label_20fc2c;
        }
    }
    ctx->pc = 0x20FBACu;
label_20fbac:
    // 0x20fbac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbb0:
    // 0x20fbb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fbb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbb4:
    // 0x20fbb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20fbb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbb8:
    // 0x20fbb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fbbc:
    // 0x20fbbc: 0x3c0b80ef  lui         $t3, 0x80EF
    ctx->pc = 0x20fbbcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33007 << 16));
label_20fbc0:
    // 0x20fbc0: 0x3568b0b0  ori         $t0, $t3, 0xB0B0
    ctx->pc = 0x20fbc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)45232);
label_20fbc4:
    // 0x20fbc4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_20fbc8:
    // 0x20fbc8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x20fbc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20fbcc:
    // 0x20fbcc: 0xc059190  jal         func_164640
label_20fbd0:
    if (ctx->pc == 0x20FBD0u) {
        ctx->pc = 0x20FBD4u;
        goto label_20fbd4;
    }
    ctx->pc = 0x20FBCCu;
    SET_GPR_U32(ctx, 31, 0x20FBD4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x20FBCCu, 0x20FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FBD4u;
label_20fbd4:
    // 0x20fbd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20fbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20fbd8:
    // 0x20fbd8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20fbdc:
    // 0x20fbdc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fbdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbe0:
    // 0x20fbe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fbe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbe4:
    // 0x20fbe4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20fbe8:
    // 0x20fbe8: 0x2466a400  addiu       $a2, $v1, -0x5C00
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943744));
label_20fbec:
    // 0x20fbec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20fbecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbf0:
    // 0x20fbf0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20fbf0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbf4:
    // 0x20fbf4: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_20fbf8:
    // 0x20fbf8: 0x2549a410  addiu       $t1, $t2, -0x5BF0
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943760));
label_20fbfc:
    // 0x20fbfc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20fc00:
    // 0x20fc00: 0xc42ca430  lwc1        $f12, -0x5BD0($at)
    ctx->pc = 0x20fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20fc04:
    // 0x20fc04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20fc08:
    // 0x20fc08: 0xc42da438  lwc1        $f13, -0x5BC8($at)
    ctx->pc = 0x20fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20fc0c:
    // 0x20fc0c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20fc10:
    // 0x20fc10: 0xc42ea440  lwc1        $f14, -0x5BC0($at)
    ctx->pc = 0x20fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_20fc14:
    // 0x20fc14: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20fc18:
    // 0x20fc18: 0x246aa420  addiu       $t2, $v1, -0x5BE0
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943776));
label_20fc1c:
    // 0x20fc1c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20fc1cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fc20:
    // 0x20fc20: 0xc0bb6c0  jal         func_2EDB00
label_20fc24:
    if (ctx->pc == 0x20FC24u) {
        ctx->pc = 0x20FC28u;
        goto label_20fc28;
    }
    ctx->pc = 0x20FC20u;
    SET_GPR_U32(ctx, 31, 0x20FC28u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FC20u, 0x20FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC28u;
label_20fc28:
    // 0x20fc28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20fc28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20fc2c:
    // 0x20fc2c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fc30:
    // 0x20fc30: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fc30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fc34:
    // 0x20fc34: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_20fc38:
    // 0x20fc38: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fc38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fc3c:
    // 0x20fc3c: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_20fc40:
    // 0x20fc40: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_20fc44:
    if (ctx->pc == 0x20FC44u) {
        ctx->pc = 0x20FC48u;
        goto label_20fc48;
    }
    ctx->pc = 0x20FC40u;
    {
        const bool branch_taken_0x20fc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fc40) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC48u;
label_20fc48:
    // 0x20fc48: 0x8fbe0528  lw          $fp, 0x528($sp)
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fc4c:
    // 0x20fc4c: 0x87d01278  lh          $s0, 0x1278($fp)
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4728)));
label_20fc50:
    // 0x20fc50: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x20fc50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
label_20fc54:
    // 0x20fc54: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fc54u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20fc58:
    // 0x20fc58: 0x2405020b  addiu       $a1, $zero, 0x20B
    ctx->pc = 0x20fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_20fc5c:
    // 0x20fc5c: 0x10e5001d  beq         $a3, $a1, . + 4 + (0x1D << 2)
label_20fc60:
    if (ctx->pc == 0x20FC60u) {
        ctx->pc = 0x20FC64u;
        goto label_20fc64;
    }
    ctx->pc = 0x20FC5Cu;
    {
        const bool branch_taken_0x20fc5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x20fc5c) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC64u;
label_20fc64:
    // 0x20fc64: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fc68:
    // 0x20fc68: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20fc6c:
    // 0x20fc6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20fc70:
    // 0x20fc70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fc70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fc74:
    // 0x20fc74: 0x24030226  addiu       $v1, $zero, 0x226
    ctx->pc = 0x20fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
label_20fc78:
    // 0x20fc78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_20fc7c:
    if (ctx->pc == 0x20FC7Cu) {
        ctx->pc = 0x20FC80u;
        goto label_20fc80;
    }
    ctx->pc = 0x20FC78u;
    {
        const bool branch_taken_0x20fc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fc78) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC80u;
label_20fc80:
    // 0x20fc80: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fc84:
    // 0x20fc84: 0x84c31278  lh          $v1, 0x1278($a2)
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_20fc88:
    // 0x20fc88: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20fc88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_20fc8c:
    // 0x20fc8c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20fc8cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_20fc90:
    // 0x20fc90: 0x240a027b  addiu       $t2, $zero, 0x27B
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
label_20fc94:
    // 0x20fc94: 0x112a000f  beq         $t1, $t2, . + 4 + (0xF << 2)
label_20fc98:
    if (ctx->pc == 0x20FC98u) {
        ctx->pc = 0x20FC9Cu;
        goto label_20fc9c;
    }
    ctx->pc = 0x20FC94u;
    {
        const bool branch_taken_0x20fc94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x20fc94) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC9Cu;
label_20fc9c:
    // 0x20fc9c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fca0:
    // 0x20fca0: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fca4:
    // 0x20fca4: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_20fca8:
    // 0x20fca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fcac:
    // 0x20fcac: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
label_20fcb0:
    // 0x20fcb0: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_20fcb4:
    if (ctx->pc == 0x20FCB4u) {
        ctx->pc = 0x20FCB8u;
        goto label_20fcb8;
    }
    ctx->pc = 0x20FCB0u;
    {
        const bool branch_taken_0x20fcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x20fcb0) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fcbc:
    // 0x20fcbc: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_20fcc0:
    // 0x20fcc0: 0x74c3c  dsll32      $t1, $a3, 16
    ctx->pc = 0x20fcc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 16));
label_20fcc4:
    // 0x20fcc4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20fcc4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_20fcc8:
    // 0x20fcc8: 0x240a0311  addiu       $t2, $zero, 0x311
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 785));
label_20fccc:
    // 0x20fccc: 0x152a000e  bne         $t1, $t2, . + 4 + (0xE << 2)
label_20fcd0:
    if (ctx->pc == 0x20FCD0u) {
        ctx->pc = 0x20FCD4u;
        goto label_20fcd4;
    }
    ctx->pc = 0x20FCCCu;
    {
        const bool branch_taken_0x20fccc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x20fccc) {
            ctx->pc = 0x20FD08u;
            goto label_20fd08;
        }
    }
    ctx->pc = 0x20FCD4u;
label_20fcd4:
    // 0x20fcd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fcd8:
    // 0x20fcd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fcd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fcdc:
    // 0x20fcdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20fcdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fce0:
    // 0x20fce0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20fce0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fce4:
    // 0x20fce4: 0x71603e28  paddub      $a3, $t3, $zero
    ctx->pc = 0x20fce4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_20fce8:
    // 0x20fce8: 0x3c0380ef  lui         $v1, 0x80EF
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33007 << 16));
label_20fcec:
    // 0x20fcec: 0x346ab0b0  ori         $t2, $v1, 0xB0B0
    ctx->pc = 0x20fcecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45232);
label_20fcf0:
    // 0x20fcf0: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20fcf0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_20fcf4:
    // 0x20fcf4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x20fcf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_20fcf8:
    // 0x20fcf8: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fcfc:
    // 0x20fcfc: 0xc059190  jal         func_164640
label_20fd00:
    if (ctx->pc == 0x20FD00u) {
        ctx->pc = 0x20FD04u;
        goto label_20fd04;
    }
    ctx->pc = 0x20FCFCu;
    SET_GPR_U32(ctx, 31, 0x20FD04u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x20FCFCu, 0x20FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD04u;
label_20fd04:
    // 0x20fd04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20fd04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20fd08:
    // 0x20fd08: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd0c:
    // 0x20fd0c: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fd0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fd10:
    // 0x20fd10: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x20fd10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
label_20fd14:
    // 0x20fd14: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x20fd14u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_20fd18:
    // 0x20fd18: 0x296300f5  slti        $v1, $t3, 0xF5
    ctx->pc = 0x20fd18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)245) ? 1 : 0);
label_20fd1c:
    // 0x20fd1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_20fd20:
    if (ctx->pc == 0x20FD20u) {
        ctx->pc = 0x20FD24u;
        goto label_20fd24;
    }
    ctx->pc = 0x20FD1Cu;
    {
        const bool branch_taken_0x20fd1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd1c) {
            ctx->pc = 0x20FD40u;
            goto label_20fd40;
        }
    }
    ctx->pc = 0x20FD24u;
label_20fd24:
    // 0x20fd24: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd28:
    // 0x20fd28: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
label_20fd2c:
    // 0x20fd2c: 0xa443c  dsll32      $t0, $t2, 16
    ctx->pc = 0x20fd2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 16));
label_20fd30:
    // 0x20fd30: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x20fd30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_20fd34:
    // 0x20fd34: 0x290100f7  slti        $at, $t0, 0xF7
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)247) ? 1 : 0);
label_20fd38:
    // 0x20fd38: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
label_20fd3c:
    if (ctx->pc == 0x20FD3Cu) {
        ctx->pc = 0x20FD40u;
        goto label_20fd40;
    }
    ctx->pc = 0x20FD38u;
    {
        const bool branch_taken_0x20fd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd38) {
            ctx->pc = 0x20FE58u;
            goto label_20fe58;
        }
    }
    ctx->pc = 0x20FD40u;
label_20fd40:
    // 0x20fd40: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd44:
    // 0x20fd44: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x20fd44u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
label_20fd48:
    // 0x20fd48: 0xa2c3c  dsll32      $a1, $t2, 16
    ctx->pc = 0x20fd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 16));
label_20fd4c:
    // 0x20fd4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20fd4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_20fd50:
    // 0x20fd50: 0x28a3020b  slti        $v1, $a1, 0x20B
    ctx->pc = 0x20fd50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)523) ? 1 : 0);
label_20fd54:
    // 0x20fd54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_20fd58:
    if (ctx->pc == 0x20FD58u) {
        ctx->pc = 0x20FD5Cu;
        goto label_20fd5c;
    }
    ctx->pc = 0x20FD54u;
    {
        const bool branch_taken_0x20fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd54) {
            ctx->pc = 0x20FD78u;
            goto label_20fd78;
        }
    }
    ctx->pc = 0x20FD5Cu;
label_20fd5c:
    // 0x20fd5c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd60:
    // 0x20fd60: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20fd60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20fd64:
    // 0x20fd64: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20fd68:
    // 0x20fd68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fd68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fd6c:
    // 0x20fd6c: 0x28810210  slti        $at, $a0, 0x210
    ctx->pc = 0x20fd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)528) ? 1 : 0);
label_20fd70:
    // 0x20fd70: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_20fd74:
    if (ctx->pc == 0x20FD74u) {
        ctx->pc = 0x20FD78u;
        goto label_20fd78;
    }
    ctx->pc = 0x20FD70u;
    {
        const bool branch_taken_0x20fd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd70) {
            ctx->pc = 0x20FE58u;
            goto label_20fe58;
        }
    }
    ctx->pc = 0x20FD78u;
label_20fd78:
    // 0x20fd78: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd7c:
    // 0x20fd7c: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fd80:
    // 0x20fd80: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
label_20fd84:
    // 0x20fd84: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fd84u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20fd88:
    // 0x20fd88: 0x28e80226  slti        $t0, $a3, 0x226
    ctx->pc = 0x20fd88u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)550) ? 1 : 0);
label_20fd8c:
    // 0x20fd8c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_20fd90:
    if (ctx->pc == 0x20FD90u) {
        ctx->pc = 0x20FD94u;
        goto label_20fd94;
    }
    ctx->pc = 0x20FD8Cu;
    {
        const bool branch_taken_0x20fd8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd8c) {
            ctx->pc = 0x20FDB0u;
            goto label_20fdb0;
        }
    }
    ctx->pc = 0x20FD94u;
label_20fd94:
    // 0x20fd94: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fd98:
    // 0x20fd98: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fd9c:
    // 0x20fd9c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_20fda0:
    // 0x20fda0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fda0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fda4:
    // 0x20fda4: 0x2861022b  slti        $at, $v1, 0x22B
    ctx->pc = 0x20fda4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)555) ? 1 : 0);
label_20fda8:
    // 0x20fda8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
label_20fdac:
    if (ctx->pc == 0x20FDACu) {
        ctx->pc = 0x20FDB0u;
        goto label_20fdb0;
    }
    ctx->pc = 0x20FDA8u;
    {
        const bool branch_taken_0x20fda8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fda8) {
            ctx->pc = 0x20FE58u;
            goto label_20fe58;
        }
    }
    ctx->pc = 0x20FDB0u;
label_20fdb0:
    // 0x20fdb0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fdb4:
    // 0x20fdb4: 0x84c41278  lh          $a0, 0x1278($a2)
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_20fdb8:
    // 0x20fdb8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_20fdbc:
    // 0x20fdbc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20fdbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_20fdc0:
    // 0x20fdc0: 0x28a6027b  slti        $a2, $a1, 0x27B
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)635) ? 1 : 0);
label_20fdc4:
    // 0x20fdc4: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_20fdc8:
    if (ctx->pc == 0x20FDC8u) {
        ctx->pc = 0x20FDCCu;
        goto label_20fdcc;
    }
    ctx->pc = 0x20FDC4u;
    {
        const bool branch_taken_0x20fdc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fdc4) {
            ctx->pc = 0x20FDE8u;
            goto label_20fde8;
        }
    }
    ctx->pc = 0x20FDCCu;
label_20fdcc:
    // 0x20fdcc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fdd0:
    // 0x20fdd0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fdd4:
    // 0x20fdd4: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x20fdd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
label_20fdd8:
    // 0x20fdd8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fdd8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_20fddc:
    // 0x20fddc: 0x28e1027d  slti        $at, $a3, 0x27D
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)637) ? 1 : 0);
label_20fde0:
    // 0x20fde0: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_20fde4:
    if (ctx->pc == 0x20FDE4u) {
        ctx->pc = 0x20FDE8u;
        goto label_20fde8;
    }
    ctx->pc = 0x20FDE0u;
    {
        const bool branch_taken_0x20fde0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fde0) {
            ctx->pc = 0x20FE58u;
            goto label_20fe58;
        }
    }
    ctx->pc = 0x20FDE8u;
label_20fde8:
    // 0x20fde8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fdec:
    // 0x20fdec: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20fdf0:
    // 0x20fdf0: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x20fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_20fdf4:
    // 0x20fdf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fdf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fdf8:
    // 0x20fdf8: 0x2864028f  slti        $a0, $v1, 0x28F
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)655) ? 1 : 0);
label_20fdfc:
    // 0x20fdfc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_20fe00:
    if (ctx->pc == 0x20FE00u) {
        ctx->pc = 0x20FE04u;
        goto label_20fe04;
    }
    ctx->pc = 0x20FDFCu;
    {
        const bool branch_taken_0x20fdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fdfc) {
            ctx->pc = 0x20FE20u;
            goto label_20fe20;
        }
    }
    ctx->pc = 0x20FE04u;
label_20fe04:
    // 0x20fe04: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fe08:
    // 0x20fe08: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fe0c:
    // 0x20fe0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20fe10:
    // 0x20fe10: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fe10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20fe14:
    // 0x20fe14: 0x28810295  slti        $at, $a0, 0x295
    ctx->pc = 0x20fe14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)661) ? 1 : 0);
label_20fe18:
    // 0x20fe18: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_20fe1c:
    if (ctx->pc == 0x20FE1Cu) {
        ctx->pc = 0x20FE20u;
        goto label_20fe20;
    }
    ctx->pc = 0x20FE18u;
    {
        const bool branch_taken_0x20fe18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe18) {
            ctx->pc = 0x20FE58u;
            goto label_20fe58;
        }
    }
    ctx->pc = 0x20FE20u;
label_20fe20:
    // 0x20fe20: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fe24:
    // 0x20fe24: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fe28:
    // 0x20fe28: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_20fe2c:
    // 0x20fe2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fe2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20fe30:
    // 0x20fe30: 0x28660311  slti        $a2, $v1, 0x311
    ctx->pc = 0x20fe30u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)785) ? 1 : 0);
label_20fe34:
    // 0x20fe34: 0x14c0007c  bnez        $a2, . + 4 + (0x7C << 2)
label_20fe38:
    if (ctx->pc == 0x20FE38u) {
        ctx->pc = 0x20FE3Cu;
        goto label_20fe3c;
    }
    ctx->pc = 0x20FE34u;
    {
        const bool branch_taken_0x20fe34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe34) {
            ctx->pc = 0x210028u;
            goto label_210028;
        }
    }
    ctx->pc = 0x20FE3Cu;
label_20fe3c:
    // 0x20fe3c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_20fe40:
    // 0x20fe40: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_20fe44:
    // 0x20fe44: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_20fe48:
    // 0x20fe48: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20fe48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20fe4c:
    // 0x20fe4c: 0x28c10317  slti        $at, $a2, 0x317
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)791) ? 1 : 0);
label_20fe50:
    // 0x20fe50: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_20fe54:
    if (ctx->pc == 0x20FE54u) {
        ctx->pc = 0x20FE58u;
        goto label_20fe58;
    }
    ctx->pc = 0x20FE50u;
    {
        const bool branch_taken_0x20fe50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fe50) {
            ctx->pc = 0x210028u;
            goto label_210028;
        }
    }
    ctx->pc = 0x20FE58u;
label_20fe58:
    // 0x20fe58: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_20fe5c:
    // 0x20fe5c: 0x2486a450  addiu       $a2, $a0, -0x5BB0
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943824));
label_20fe60:
    // 0x20fe60: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20fe64:
    // 0x20fe64: 0x78d30000  lq          $s3, 0x0($a2)
    ctx->pc = 0x20fe64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20fe68:
    // 0x20fe68: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x20fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
label_20fe6c:
    // 0x20fe6c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20fe70:
    // 0x20fe70: 0x2464a460  addiu       $a0, $v1, -0x5BA0
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943840));
label_20fe74:
    // 0x20fe74: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_20fe78:
    // 0x20fe78: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20fe78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20fe7c:
    // 0x20fe7c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x20fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_20fe80:
    // 0x20fe80: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_20fe84:
    // 0x20fe84: 0x2464a470  addiu       $a0, $v1, -0x5B90
    ctx->pc = 0x20fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943856));
label_20fe88:
    // 0x20fe88: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_20fe8c:
    // 0x20fe8c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20fe8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20fe90:
    // 0x20fe90: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x20fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_20fe94:
    // 0x20fe94: 0x3c03c5c8  lui         $v1, 0xC5C8
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50632 << 16));
label_20fe98:
    // 0x20fe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fe9c:
    // 0x20fe9c: 0x0  nop
    ctx->pc = 0x20fe9cu;
    // NOP
label_20fea0:
    // 0x20fea0: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x20fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_20fea4:
    // 0x20fea4: 0x3c0646c1  lui         $a2, 0x46C1
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18113 << 16));
label_20fea8:
    // 0x20fea8: 0x34c55c00  ori         $a1, $a2, 0x5C00
    ctx->pc = 0x20fea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23552);
label_20feac:
    // 0x20feac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20feacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20feb0:
    // 0x20feb0: 0x0  nop
    ctx->pc = 0x20feb0u;
    // NOP
label_20feb4:
    // 0x20feb4: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x20feb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_20feb8:
    // 0x20feb8: 0x3c04c615  lui         $a0, 0xC615
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50709 << 16));
label_20febc:
    // 0x20febc: 0x34833800  ori         $v1, $a0, 0x3800
    ctx->pc = 0x20febcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14336);
label_20fec0:
    // 0x20fec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fec4:
    // 0x20fec4: 0x0  nop
    ctx->pc = 0x20fec4u;
    // NOP
label_20fec8:
    // 0x20fec8: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x20fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_20fecc:
    // 0x20fecc: 0xc06765c  jal         func_19D970
label_20fed0:
    if (ctx->pc == 0x20FED0u) {
        ctx->pc = 0x20FED4u;
        goto label_20fed4;
    }
    ctx->pc = 0x20FECCu;
    SET_GPR_U32(ctx, 31, 0x20FED4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20FECCu, 0x20FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FED4u;
label_20fed4:
    // 0x20fed4: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
label_20fed8:
    // 0x20fed8: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20fed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_20fedc:
    // 0x20fedc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20fedcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20fee0:
    // 0x20fee0: 0x0  nop
    ctx->pc = 0x20fee0u;
    // NOP
label_20fee4:
    // 0x20fee4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20fee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20fee8:
    // 0x20fee8: 0x3c04c59c  lui         $a0, 0xC59C
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50588 << 16));
label_20feec:
    // 0x20feec: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_20fef0:
    // 0x20fef0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20fef0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fef4:
    // 0x20fef4: 0x0  nop
    ctx->pc = 0x20fef4u;
    // NOP
label_20fef8:
    // 0x20fef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20fef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20fefc:
    // 0x20fefc: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x20fefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_20ff00:
    // 0x20ff00: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_20ff04:
    // 0x20ff04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ff04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ff08:
    // 0x20ff08: 0x0  nop
    ctx->pc = 0x20ff08u;
    // NOP
label_20ff0c:
    // 0x20ff0c: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x20ff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_20ff10:
    // 0x20ff10: 0xc06765c  jal         func_19D970
label_20ff14:
    if (ctx->pc == 0x20FF14u) {
        ctx->pc = 0x20FF18u;
        goto label_20ff18;
    }
    ctx->pc = 0x20FF10u;
    SET_GPR_U32(ctx, 31, 0x20FF18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20FF10u, 0x20FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF18u;
label_20ff18:
    // 0x20ff18: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
label_20ff1c:
    // 0x20ff1c: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20ff1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_20ff20:
    // 0x20ff20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20ff20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ff24:
    // 0x20ff24: 0x0  nop
    ctx->pc = 0x20ff24u;
    // NOP
label_20ff28:
    // 0x20ff28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20ff28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20ff2c:
    // 0x20ff2c: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
label_20ff30:
    // 0x20ff30: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x20ff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_20ff34:
    // 0x20ff34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ff34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ff38:
    // 0x20ff38: 0x0  nop
    ctx->pc = 0x20ff38u;
    // NOP
label_20ff3c:
    // 0x20ff3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ff3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20ff40:
    // 0x20ff40: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x20ff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_20ff44:
    // 0x20ff44: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_20ff48:
    // 0x20ff48: 0x3c05442f  lui         $a1, 0x442F
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17455 << 16));
label_20ff4c:
    // 0x20ff4c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ff4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ff50:
    // 0x20ff50: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x20ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
label_20ff54:
    // 0x20ff54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20ff54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20ff58:
    // 0x20ff58: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
label_20ff5c:
    // 0x20ff5c: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x20ff5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20ff60:
    // 0x20ff60: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20ff60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ff64:
    // 0x20ff64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ff64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ff68:
    // 0x20ff68: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20ff6c:
    // 0x20ff6c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20ff6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ff70:
    // 0x20ff70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ff70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ff74:
    // 0x20ff74: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_20ff78:
    // 0x20ff78: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_20ff7c:
    // 0x20ff7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20ff7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ff80:
    // 0x20ff80: 0xc0bb6c0  jal         func_2EDB00
label_20ff84:
    if (ctx->pc == 0x20FF84u) {
        ctx->pc = 0x20FF88u;
        goto label_20ff88;
    }
    ctx->pc = 0x20FF80u;
    SET_GPR_U32(ctx, 31, 0x20FF88u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FF80u, 0x20FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF88u;
label_20ff88:
    // 0x20ff88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20ff88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ff8c:
    // 0x20ff8c: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x20ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_20ff90:
    // 0x20ff90: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ff90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ff94:
    // 0x20ff94: 0x3c064453  lui         $a2, 0x4453
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17491 << 16));
label_20ff98:
    // 0x20ff98: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20ff98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20ff9c:
    // 0x20ff9c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x20ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_20ffa0:
    // 0x20ffa0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20ffa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20ffa4:
    // 0x20ffa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20ffa8:
    // 0x20ffa8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x20ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_20ffac:
    // 0x20ffac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20ffacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffb0:
    // 0x20ffb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ffb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffb4:
    // 0x20ffb4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20ffb8:
    // 0x20ffb8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20ffb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffbc:
    // 0x20ffbc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ffbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffc0:
    // 0x20ffc0: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_20ffc4:
    // 0x20ffc4: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x20ffc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_20ffc8:
    // 0x20ffc8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20ffc8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffcc:
    // 0x20ffcc: 0xc0bb6c0  jal         func_2EDB00
label_20ffd0:
    if (ctx->pc == 0x20FFD0u) {
        ctx->pc = 0x20FFD4u;
        goto label_20ffd4;
    }
    ctx->pc = 0x20FFCCu;
    SET_GPR_U32(ctx, 31, 0x20FFD4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FFCCu, 0x20FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFD4u;
label_20ffd4:
    // 0x20ffd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20ffd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20ffd8:
    // 0x20ffd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20ffdc:
    // 0x20ffdc: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_20ffe0:
    // 0x20ffe0: 0x3c054411  lui         $a1, 0x4411
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17425 << 16));
label_20ffe4:
    // 0x20ffe4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ffe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ffe8:
    // 0x20ffe8: 0x3c0343d2  lui         $v1, 0x43D2
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17362 << 16));
label_20ffec:
    // 0x20ffec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20ffecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20fff0:
    // 0x20fff0: 0x3c06435c  lui         $a2, 0x435C
    ctx->pc = 0x20fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17244 << 16));
label_20fff4:
    // 0x20fff4: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x20fff4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20fff8:
    // 0x20fff8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fffc:
    // 0x20fffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210000:
    // 0x210000: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x210000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_210004:
    // 0x210004: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x210004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_210008:
    // 0x210008: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210008u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21000c:
    // 0x21000c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x21000cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210010:
    // 0x210010: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_210014:
    // 0x210014: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x210014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_210018:
    // 0x210018: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210018u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21001c:
    // 0x21001c: 0xc0bb6c0  jal         func_2EDB00
label_210020:
    if (ctx->pc == 0x210020u) {
        ctx->pc = 0x210024u;
        goto label_210024;
    }
    ctx->pc = 0x21001Cu;
    SET_GPR_U32(ctx, 31, 0x210024u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x21001Cu, 0x210024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210024u;
label_210024:
    // 0x210024: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210024u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210028:
    // 0x210028: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21002c:
    // 0x21002c: 0x85471278  lh          $a3, 0x1278($t2)
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_210030:
    // 0x210030: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x210030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_210034:
    // 0x210034: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210034u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210038:
    // 0x210038: 0x286602b6  slti        $a2, $v1, 0x2B6
    ctx->pc = 0x210038u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)694) ? 1 : 0);
label_21003c:
    // 0x21003c: 0x14c00049  bnez        $a2, . + 4 + (0x49 << 2)
label_210040:
    if (ctx->pc == 0x210040u) {
        ctx->pc = 0x210044u;
        goto label_210044;
    }
    ctx->pc = 0x21003Cu;
    {
        const bool branch_taken_0x21003c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21003c) {
            ctx->pc = 0x210164u;
            goto label_210164;
        }
    }
    ctx->pc = 0x210044u;
label_210044:
    // 0x210044: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210048:
    // 0x210048: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_21004c:
    // 0x21004c: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x21004cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_210050:
    // 0x210050: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x210050u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_210054:
    // 0x210054: 0x294102c2  slti        $at, $t2, 0x2C2
    ctx->pc = 0x210054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)706) ? 1 : 0);
label_210058:
    // 0x210058: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_21005c:
    if (ctx->pc == 0x21005Cu) {
        ctx->pc = 0x210060u;
        goto label_210060;
    }
    ctx->pc = 0x210058u;
    {
        const bool branch_taken_0x210058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210058) {
            ctx->pc = 0x210164u;
            goto label_210164;
        }
    }
    ctx->pc = 0x210060u;
label_210060:
    // 0x210060: 0xc06765c  jal         func_19D970
label_210064:
    if (ctx->pc == 0x210064u) {
        ctx->pc = 0x210068u;
        goto label_210068;
    }
    ctx->pc = 0x210060u;
    SET_GPR_U32(ctx, 31, 0x210068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210060u, 0x210068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210068u;
label_210068:
    // 0x210068: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_21006c:
    // 0x21006c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x21006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_210070:
    // 0x210070: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210074:
    // 0x210074: 0x0  nop
    ctx->pc = 0x210074u;
    // NOP
label_210078:
    // 0x210078: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21007c:
    // 0x21007c: 0xe7a00504  swc1        $f0, 0x504($sp)
    ctx->pc = 0x21007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1284), bits); }
label_210080:
    // 0x210080: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x210080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_210084:
    // 0x210084: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_210088:
    // 0x210088: 0xc7ac0504  lwc1        $f12, 0x504($sp)
    ctx->pc = 0x210088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21008c:
    // 0x21008c: 0xc067844  jal         func_19E110
label_210090:
    if (ctx->pc == 0x210090u) {
        ctx->pc = 0x210094u;
        goto label_210094;
    }
    ctx->pc = 0x21008Cu;
    SET_GPR_U32(ctx, 31, 0x210094u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x21008Cu, 0x210094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210094u;
label_210094:
    // 0x210094: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210094u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210098:
    // 0x210098: 0xc06765c  jal         func_19D970
label_21009c:
    if (ctx->pc == 0x21009Cu) {
        ctx->pc = 0x2100A0u;
        goto label_2100a0;
    }
    ctx->pc = 0x210098u;
    SET_GPR_U32(ctx, 31, 0x2100A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210098u, 0x2100A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100A0u;
label_2100a0:
    // 0x2100a0: 0x3c0a4049  lui         $t2, 0x4049
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16457 << 16));
label_2100a4:
    // 0x2100a4: 0x35490fdb  ori         $t1, $t2, 0xFDB
    ctx->pc = 0x2100a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4059);
label_2100a8:
    // 0x2100a8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x2100a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2100ac:
    // 0x2100ac: 0x0  nop
    ctx->pc = 0x2100acu;
    // NOP
label_2100b0:
    // 0x2100b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2100b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2100b4:
    // 0x2100b4: 0xe7a00504  swc1        $f0, 0x504($sp)
    ctx->pc = 0x2100b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1284), bits); }
label_2100b8:
    // 0x2100b8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2100b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2100bc:
    // 0x2100bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2100bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2100c0:
    // 0x2100c0: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x2100c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2100c4:
    // 0x2100c4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2100c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2100c8:
    // 0x2100c8: 0xc7ac0504  lwc1        $f12, 0x504($sp)
    ctx->pc = 0x2100c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2100cc:
    // 0x2100cc: 0xc040ce4  jal         func_103390
label_2100d0:
    if (ctx->pc == 0x2100D0u) {
        ctx->pc = 0x2100D4u;
        goto label_2100d4;
    }
    ctx->pc = 0x2100CCu;
    SET_GPR_U32(ctx, 31, 0x2100D4u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2100D4u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2100D4u) { return; }
    ctx->pc = 0x2100D4u;
label_2100d4:
    // 0x2100d4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2100d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2100d8:
    // 0x2100d8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x2100d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_2100dc:
    // 0x2100dc: 0x2542a490  addiu       $v0, $t2, -0x5B70
    ctx->pc = 0x2100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943888));
label_2100e0:
    // 0x2100e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2100e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2100e4:
    // 0x2100e4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2100e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2100e8:
    // 0x2100e8: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_2100ec:
    // 0x2100ec: 0x24c7a490  addiu       $a3, $a2, -0x5B70
    ctx->pc = 0x2100ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943888));
label_2100f0:
    // 0x2100f0: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2100f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2100f4:
    // 0x2100f4: 0xc040bf4  jal         func_102FD0
label_2100f8:
    if (ctx->pc == 0x2100F8u) {
        ctx->pc = 0x2100FCu;
        goto label_2100fc;
    }
    ctx->pc = 0x2100F4u;
    SET_GPR_U32(ctx, 31, 0x2100FCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2100FCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2100FCu) { return; }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2100fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210100:
    // 0x210100: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_210104:
    // 0x210104: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x210104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_210108:
    // 0x210108: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21010c:
    // 0x21010c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x21010cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210110:
    // 0x210110: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x210110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_210114:
    // 0x210114: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210118:
    // 0x210118: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_21011c:
    // 0x21011c: 0x254aa480  addiu       $t2, $t2, -0x5B80
    ctx->pc = 0x21011cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943872));
label_210120:
    // 0x210120: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x210120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210124:
    // 0x210124: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210128:
    // 0x210128: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x210128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21012c:
    // 0x21012c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21012cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_210130:
    // 0x210130: 0x2469a490  addiu       $t1, $v1, -0x5B70
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
label_210134:
    // 0x210134: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210138:
    // 0x210138: 0xc42ca4b0  lwc1        $f12, -0x5B50($at)
    ctx->pc = 0x210138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21013c:
    // 0x21013c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210140:
    // 0x210140: 0xc42da4b8  lwc1        $f13, -0x5B48($at)
    ctx->pc = 0x210140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_210144:
    // 0x210144: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210148:
    // 0x210148: 0xc42ea4c0  lwc1        $f14, -0x5B40($at)
    ctx->pc = 0x210148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_21014c:
    // 0x21014c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_210150:
    // 0x210150: 0x246aa4a0  addiu       $t2, $v1, -0x5B60
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_210154:
    // 0x210154: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210154u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210158:
    // 0x210158: 0xc0bb6c0  jal         func_2EDB00
label_21015c:
    if (ctx->pc == 0x21015Cu) {
        ctx->pc = 0x210160u;
        goto label_210160;
    }
    ctx->pc = 0x210158u;
    SET_GPR_U32(ctx, 31, 0x210160u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210158u, 0x210160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210160u;
label_210160:
    // 0x210160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210164:
    // 0x210164: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210168:
    // 0x210168: 0x84861278  lh          $a2, 0x1278($a0)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_21016c:
    // 0x21016c: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x21016cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_210170:
    // 0x210170: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x210170u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_210174:
    // 0x210174: 0x28810272  slti        $at, $a0, 0x272
    ctx->pc = 0x210174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)626) ? 1 : 0);
label_210178:
    // 0x210178: 0x1420005f  bnez        $at, . + 4 + (0x5F << 2)
label_21017c:
    if (ctx->pc == 0x21017Cu) {
        ctx->pc = 0x210180u;
        goto label_210180;
    }
    ctx->pc = 0x210178u;
    {
        const bool branch_taken_0x210178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210178) {
            ctx->pc = 0x2102F8u;
            goto label_2102f8;
        }
    }
    ctx->pc = 0x210180u;
label_210180:
    // 0x210180: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210184:
    // 0x210184: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_210188:
    // 0x210188: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x210188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_21018c:
    // 0x21018c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21018cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210190:
    // 0x210190: 0x28610280  slti        $at, $v1, 0x280
    ctx->pc = 0x210190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
label_210194:
    // 0x210194: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_210198:
    if (ctx->pc == 0x210198u) {
        ctx->pc = 0x21019Cu;
        goto label_21019c;
    }
    ctx->pc = 0x210194u;
    {
        const bool branch_taken_0x210194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210194) {
            ctx->pc = 0x2102F8u;
            goto label_2102f8;
        }
    }
    ctx->pc = 0x21019Cu;
label_21019c:
    // 0x21019c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x21019cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_2101a0:
    // 0x2101a0: 0x2483a4d0  addiu       $v1, $a0, -0x5B30
    ctx->pc = 0x2101a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943952));
label_2101a4:
    // 0x2101a4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2101a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2101a8:
    // 0x2101a8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2101ac:
    // 0x2101ac: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2101b0:
    // 0x2101b0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_2101b4:
    // 0x2101b4: 0x24c3a4e0  addiu       $v1, $a2, -0x5B20
    ctx->pc = 0x2101b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943968));
label_2101b8:
    // 0x2101b8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2101b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2101bc:
    // 0x2101bc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2101c0:
    // 0x2101c0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2101c4:
    // 0x2101c4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_2101c8:
    // 0x2101c8: 0x24c3a4f0  addiu       $v1, $a2, -0x5B10
    ctx->pc = 0x2101c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943984));
label_2101cc:
    // 0x2101cc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2101ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2101d0:
    // 0x2101d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2101d4:
    // 0x2101d4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2101d8:
    // 0x2101d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2101d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2101dc:
    // 0x2101dc: 0x10000042  b           . + 4 + (0x42 << 2)
label_2101e0:
    if (ctx->pc == 0x2101E0u) {
        ctx->pc = 0x2101E4u;
        goto label_2101e4;
    }
    ctx->pc = 0x2101DCu;
    {
        const bool branch_taken_0x2101dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2101dc) {
            ctx->pc = 0x2102E8u;
            goto label_2102e8;
        }
    }
    ctx->pc = 0x2101E4u;
label_2101e4:
    // 0x2101e4: 0xc06765c  jal         func_19D970
label_2101e8:
    if (ctx->pc == 0x2101E8u) {
        ctx->pc = 0x2101ECu;
        goto label_2101ec;
    }
    ctx->pc = 0x2101E4u;
    SET_GPR_U32(ctx, 31, 0x2101ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2101E4u, 0x2101ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101ECu;
label_2101ec:
    // 0x2101ec: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x2101ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_2101f0:
    // 0x2101f0: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x2101f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2101f4:
    // 0x2101f4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2101f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2101f8:
    // 0x2101f8: 0x0  nop
    ctx->pc = 0x2101f8u;
    // NOP
label_2101fc:
    // 0x2101fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2101fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210200:
    // 0x210200: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x210200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_210204:
    // 0x210204: 0xc06765c  jal         func_19D970
label_210208:
    if (ctx->pc == 0x210208u) {
        ctx->pc = 0x21020Cu;
        goto label_21020c;
    }
    ctx->pc = 0x210204u;
    SET_GPR_U32(ctx, 31, 0x21020Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210204u, 0x21020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21020Cu;
label_21020c:
    // 0x21020c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_210210:
    // 0x210210: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_210214:
    // 0x210214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210218:
    // 0x210218: 0x0  nop
    ctx->pc = 0x210218u;
    // NOP
label_21021c:
    // 0x21021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210220:
    // 0x210220: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x210220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_210224:
    // 0x210224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210228:
    // 0x210228: 0x0  nop
    ctx->pc = 0x210228u;
    // NOP
label_21022c:
    // 0x21022c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x21022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_210230:
    // 0x210230: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_210234:
    // 0x210234: 0xc040cbc  jal         func_1032F0
label_210238:
    if (ctx->pc == 0x210238u) {
        ctx->pc = 0x21023Cu;
        goto label_21023c;
    }
    ctx->pc = 0x210234u;
    SET_GPR_U32(ctx, 31, 0x21023Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x21023Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21023Cu) { return; }
    ctx->pc = 0x21023Cu;
label_21023c:
    // 0x21023c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21023cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210240:
    // 0x210240: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_210244:
    // 0x210244: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_210248:
    // 0x210248: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_21024c:
    // 0x21024c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_210250:
    // 0x210250: 0xc040d62  jal         func_103588
label_210254:
    if (ctx->pc == 0x210254u) {
        ctx->pc = 0x210258u;
        goto label_210258;
    }
    ctx->pc = 0x210250u;
    SET_GPR_U32(ctx, 31, 0x210258u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210258u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210258u) { return; }
    ctx->pc = 0x210258u;
label_210258:
    // 0x210258: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21025c:
    // 0x21025c: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_210260:
    // 0x210260: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x210260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_210264:
    // 0x210264: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x210264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_210268:
    // 0x210268: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x210268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_21026c:
    // 0x21026c: 0xc040bf4  jal         func_102FD0
label_210270:
    if (ctx->pc == 0x210270u) {
        ctx->pc = 0x210274u;
        goto label_210274;
    }
    ctx->pc = 0x21026Cu;
    SET_GPR_U32(ctx, 31, 0x210274u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210274u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210274u) { return; }
    ctx->pc = 0x210274u;
label_210274:
    // 0x210274: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210274u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210278:
    // 0x210278: 0x3c0a4496  lui         $t2, 0x4496
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17558 << 16));
label_21027c:
    // 0x21027c: 0x448a6000  mtc1        $t2, $f12
    ctx->pc = 0x21027cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210280:
    // 0x210280: 0x3c0b43fa  lui         $t3, 0x43FA
    ctx->pc = 0x210280u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17402 << 16));
label_210284:
    // 0x210284: 0x448b6800  mtc1        $t3, $f13
    ctx->pc = 0x210284u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_210288:
    // 0x210288: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_21028c:
    // 0x21028c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x21028cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210290:
    // 0x210290: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x210290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_210294:
    // 0x210294: 0xffb20000  sd          $s2, 0x0($sp)
    ctx->pc = 0x210294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
label_210298:
    // 0x210298: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21029c:
    // 0x21029c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x21029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_2102a0:
    // 0x2102a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2102a4:
    // 0x2102a4: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2102a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2102a8:
    // 0x2102a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2102ac:
    // 0x2102ac: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2102acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2102b0:
    // 0x2102b0: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x2102b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2102b4:
    // 0x2102b4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2102b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2102b8:
    // 0x2102b8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2102bc:
    // 0x2102bc: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2102bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_2102c0:
    // 0x2102c0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2102c4:
    // 0x2102c4: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2102c8:
    // 0x2102c8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2102cc:
    // 0x2102cc: 0x27a90230  addiu       $t1, $sp, 0x230
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2102d0:
    // 0x2102d0: 0x27aa0220  addiu       $t2, $sp, 0x220
    ctx->pc = 0x2102d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2102d4:
    // 0x2102d4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2102d4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2102d8:
    // 0x2102d8: 0xc0bb888  jal         func_2EE220
label_2102dc:
    if (ctx->pc == 0x2102DCu) {
        ctx->pc = 0x2102E0u;
        goto label_2102e0;
    }
    ctx->pc = 0x2102D8u;
    SET_GPR_U32(ctx, 31, 0x2102E0u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x2102D8u, 0x2102E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102E0u;
label_2102e0:
    // 0x2102e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2102e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2102e4:
    // 0x2102e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2102e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2102e8:
    // 0x2102e8: 0x2e840005  sltiu       $a0, $s4, 0x5
    ctx->pc = 0x2102e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2102ec:
    // 0x2102ec: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
label_2102f0:
    if (ctx->pc == 0x2102F0u) {
        ctx->pc = 0x2102F4u;
        goto label_2102f4;
    }
    ctx->pc = 0x2102ECu;
    {
        const bool branch_taken_0x2102ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2102ec) {
            ctx->pc = 0x2101E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2101e4;
        }
    }
    ctx->pc = 0x2102F4u;
label_2102f4:
    // 0x2102f4: 0x0  nop
    ctx->pc = 0x2102f4u;
    // NOP
label_2102f8:
    // 0x2102f8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2102fc:
    // 0x2102fc: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210300:
    // 0x210300: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x210300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_210304:
    // 0x210304: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210304u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210308:
    // 0x210308: 0x28650226  slti        $a1, $v1, 0x226
    ctx->pc = 0x210308u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)550) ? 1 : 0);
label_21030c:
    // 0x21030c: 0x14a00083  bnez        $a1, . + 4 + (0x83 << 2)
label_210310:
    if (ctx->pc == 0x210310u) {
        ctx->pc = 0x210314u;
        goto label_210314;
    }
    ctx->pc = 0x21030Cu;
    {
        const bool branch_taken_0x21030c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21030c) {
            ctx->pc = 0x21051Cu;
            goto label_21051c;
        }
    }
    ctx->pc = 0x210314u;
label_210314:
    // 0x210314: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210318:
    // 0x210318: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x210318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_21031c:
    // 0x21031c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x21031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_210320:
    // 0x210320: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210324:
    // 0x210324: 0x28610245  slti        $at, $v1, 0x245
    ctx->pc = 0x210324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
label_210328:
    // 0x210328: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_21032c:
    if (ctx->pc == 0x21032Cu) {
        ctx->pc = 0x210330u;
        goto label_210330;
    }
    ctx->pc = 0x210328u;
    {
        const bool branch_taken_0x210328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210328) {
            ctx->pc = 0x21051Cu;
            goto label_21051c;
        }
    }
    ctx->pc = 0x210330u;
label_210330:
    // 0x210330: 0x8fb70528  lw          $s7, 0x528($sp)
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210334:
    // 0x210334: 0x86e71278  lh          $a3, 0x1278($s7)
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4728)));
label_210338:
    // 0x210338: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x210338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_21033c:
    // 0x21033c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x21033cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_210340:
    // 0x210340: 0x310b0003  andi        $t3, $t0, 0x3
    ctx->pc = 0x210340u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_210344:
    // 0x210344: 0x15600075  bnez        $t3, . + 4 + (0x75 << 2)
label_210348:
    if (ctx->pc == 0x210348u) {
        ctx->pc = 0x21034Cu;
        goto label_21034c;
    }
    ctx->pc = 0x210344u;
    {
        const bool branch_taken_0x210344 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x210344) {
            ctx->pc = 0x21051Cu;
            goto label_21051c;
        }
    }
    ctx->pc = 0x21034Cu;
label_21034c:
    // 0x21034c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x21034cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
label_210350:
    // 0x210350: 0x252aa500  addiu       $t2, $t1, -0x5B00
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944000));
label_210354:
    // 0x210354: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_210358:
    // 0x210358: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x210358u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_21035c:
    // 0x21035c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21035cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_210360:
    // 0x210360: 0x3c06c5c8  lui         $a2, 0xC5C8
    ctx->pc = 0x210360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50632 << 16));
label_210364:
    // 0x210364: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x210364u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210368:
    // 0x210368: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_21036c:
    // 0x21036c: 0xe420a300  swc1        $f0, -0x5D00($at)
    ctx->pc = 0x21036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), bits); }
label_210370:
    // 0x210370: 0x3c0946c1  lui         $t1, 0x46C1
    ctx->pc = 0x210370u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18113 << 16));
label_210374:
    // 0x210374: 0x352a5c00  ori         $t2, $t1, 0x5C00
    ctx->pc = 0x210374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23552);
label_210378:
    // 0x210378: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x210378u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21037c:
    // 0x21037c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210380:
    // 0x210380: 0xe420a304  swc1        $f0, -0x5CFC($at)
    ctx->pc = 0x210380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943492), bits); }
label_210384:
    // 0x210384: 0x3c0ac615  lui         $t2, 0xC615
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50709 << 16));
label_210388:
    // 0x210388: 0x35433800  ori         $v1, $t2, 0x3800
    ctx->pc = 0x210388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)14336);
label_21038c:
    // 0x21038c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21038cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210390:
    // 0x210390: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210394:
    // 0x210394: 0xe420a308  swc1        $f0, -0x5CF8($at)
    ctx->pc = 0x210394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943496), bits); }
label_210398:
    // 0x210398: 0xc06765c  jal         func_19D970
label_21039c:
    if (ctx->pc == 0x21039Cu) {
        ctx->pc = 0x2103A0u;
        goto label_2103a0;
    }
    ctx->pc = 0x210398u;
    SET_GPR_U32(ctx, 31, 0x2103A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210398u, 0x2103A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103A0u;
label_2103a0:
    // 0x2103a0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
label_2103a4:
    // 0x2103a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2103a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2103a8:
    // 0x2103a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2103a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2103ac:
    // 0x2103ac: 0x0  nop
    ctx->pc = 0x2103acu;
    // NOP
label_2103b0:
    // 0x2103b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2103b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2103b4:
    // 0x2103b4: 0x3c04c59c  lui         $a0, 0xC59C
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50588 << 16));
label_2103b8:
    // 0x2103b8: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x2103b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_2103bc:
    // 0x2103bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2103bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2103c0:
    // 0x2103c0: 0x0  nop
    ctx->pc = 0x2103c0u;
    // NOP
label_2103c4:
    // 0x2103c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2103c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2103c8:
    // 0x2103c8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2103c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_2103cc:
    // 0x2103cc: 0xe420a310  swc1        $f0, -0x5CF0($at)
    ctx->pc = 0x2103ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943504), bits); }
label_2103d0:
    // 0x2103d0: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_2103d4:
    // 0x2103d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2103d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2103d8:
    // 0x2103d8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_2103dc:
    // 0x2103dc: 0xe420a314  swc1        $f0, -0x5CEC($at)
    ctx->pc = 0x2103dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943508), bits); }
label_2103e0:
    // 0x2103e0: 0xc06765c  jal         func_19D970
label_2103e4:
    if (ctx->pc == 0x2103E4u) {
        ctx->pc = 0x2103E8u;
        goto label_2103e8;
    }
    ctx->pc = 0x2103E0u;
    SET_GPR_U32(ctx, 31, 0x2103E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2103E0u, 0x2103E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103E8u;
label_2103e8:
    // 0x2103e8: 0x3c1044bb  lui         $s0, 0x44BB
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17595 << 16));
label_2103ec:
    // 0x2103ec: 0x361e8000  ori         $fp, $s0, 0x8000
    ctx->pc = 0x2103ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_2103f0:
    // 0x2103f0: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x2103f0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2103f4:
    // 0x2103f4: 0x0  nop
    ctx->pc = 0x2103f4u;
    // NOP
label_2103f8:
    // 0x2103f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2103f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2103fc:
    // 0x2103fc: 0x3c0545bb  lui         $a1, 0x45BB
    ctx->pc = 0x2103fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17851 << 16));
label_210400:
    // 0x210400: 0x34a78000  ori         $a3, $a1, 0x8000
    ctx->pc = 0x210400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_210404:
    // 0x210404: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x210404u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210408:
    // 0x210408: 0x0  nop
    ctx->pc = 0x210408u;
    // NOP
label_21040c:
    // 0x21040c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21040cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_210410:
    // 0x210410: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_210414:
    // 0x210414: 0xe420a318  swc1        $f0, -0x5CE8($at)
    ctx->pc = 0x210414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943512), bits); }
label_210418:
    // 0x210418: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x210418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_21041c:
    // 0x21041c: 0x3c04442f  lui         $a0, 0x442F
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17455 << 16));
label_210420:
    // 0x210420: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x210420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210424:
    // 0x210424: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_210428:
    // 0x210428: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x210428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_21042c:
    // 0x21042c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_210430:
    // 0x210430: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x210430u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210434:
    // 0x210434: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210438:
    // 0x210438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21043c:
    // 0x21043c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_210440:
    // 0x210440: 0x2466a300  addiu       $a2, $v1, -0x5D00
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
label_210444:
    // 0x210444: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210444u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210448:
    // 0x210448: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21044c:
    // 0x21044c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_210450:
    // 0x210450: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
label_210454:
    // 0x210454: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_210458:
    // 0x210458: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210458u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21045c:
    // 0x21045c: 0xc0bb6c0  jal         func_2EDB00
label_210460:
    if (ctx->pc == 0x210460u) {
        ctx->pc = 0x210464u;
        goto label_210464;
    }
    ctx->pc = 0x21045Cu;
    SET_GPR_U32(ctx, 31, 0x210464u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x21045Cu, 0x210464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210464u;
label_210464:
    // 0x210464: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210464u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210468:
    // 0x210468: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_21046c:
    // 0x21046c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x21046cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210470:
    // 0x210470: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_210474:
    // 0x210474: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x210474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210478:
    // 0x210478: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21047c:
    // 0x21047c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x21047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_210480:
    // 0x210480: 0x3c064310  lui         $a2, 0x4310
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17168 << 16));
label_210484:
    // 0x210484: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x210484u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_210488:
    // 0x210488: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21048c:
    // 0x21048c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21048cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210490:
    // 0x210490: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_210494:
    // 0x210494: 0x24e9a300  addiu       $t1, $a3, -0x5D00
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943488));
label_210498:
    // 0x210498: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x210498u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_21049c:
    // 0x21049c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21049cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104a0:
    // 0x2104a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2104a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104a4:
    // 0x2104a4: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_2104a8:
    // 0x2104a8: 0x254ba310  addiu       $t3, $t2, -0x5CF0
    ctx->pc = 0x2104a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
label_2104ac:
    // 0x2104ac: 0x71604e28  paddub      $t1, $t3, $zero
    ctx->pc = 0x2104acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_2104b0:
    // 0x2104b0: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2104b4:
    // 0x2104b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2104b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104b8:
    // 0x2104b8: 0xc0bb6c0  jal         func_2EDB00
label_2104bc:
    if (ctx->pc == 0x2104BCu) {
        ctx->pc = 0x2104C0u;
        goto label_2104c0;
    }
    ctx->pc = 0x2104B8u;
    SET_GPR_U32(ctx, 31, 0x2104C0u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2104B8u, 0x2104C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104C0u;
label_2104c0:
    // 0x2104c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2104c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2104c4:
    // 0x2104c4: 0x3c094411  lui         $t1, 0x4411
    ctx->pc = 0x2104c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17425 << 16));
label_2104c8:
    // 0x2104c8: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x2104c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2104cc:
    // 0x2104cc: 0x3c0a435c  lui         $t2, 0x435C
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17244 << 16));
label_2104d0:
    // 0x2104d0: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x2104d0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2104d4:
    // 0x2104d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2104d8:
    // 0x2104d8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_2104dc:
    // 0x2104dc: 0x3c05435c  lui         $a1, 0x435C
    ctx->pc = 0x2104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17244 << 16));
label_2104e0:
    // 0x2104e0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2104e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2104e4:
    // 0x2104e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2104e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104e8:
    // 0x2104e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2104e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104ec:
    // 0x2104ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2104ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2104f0:
    // 0x2104f0: 0x246ba300  addiu       $t3, $v1, -0x5D00
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
label_2104f4:
    // 0x2104f4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2104f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_2104f8:
    // 0x2104f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2104f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2104fc:
    // 0x2104fc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2104fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210500:
    // 0x210500: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x210500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_210504:
    // 0x210504: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
label_210508:
    // 0x210508: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_21050c:
    // 0x21050c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x21050cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210510:
    // 0x210510: 0xc0bb6c0  jal         func_2EDB00
label_210514:
    if (ctx->pc == 0x210514u) {
        ctx->pc = 0x210518u;
        goto label_210518;
    }
    ctx->pc = 0x210510u;
    SET_GPR_U32(ctx, 31, 0x210518u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210510u, 0x210518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210518u;
label_210518:
    // 0x210518: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x210518u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21051c:
    // 0x21051c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210520:
    // 0x210520: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
label_210524:
    // 0x210524: 0xa2c3c  dsll32      $a1, $t2, 16
    ctx->pc = 0x210524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 16));
label_210528:
    // 0x210528: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210528u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_21052c:
    // 0x21052c: 0x28a1012c  slti        $at, $a1, 0x12C
    ctx->pc = 0x21052cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
label_210530:
    // 0x210530: 0x10200151  beqz        $at, . + 4 + (0x151 << 2)
label_210534:
    if (ctx->pc == 0x210534u) {
        ctx->pc = 0x210538u;
        goto label_210538;
    }
    ctx->pc = 0x210530u;
    {
        const bool branch_taken_0x210530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210530) {
            ctx->pc = 0x210A78u;
            goto label_210a78;
        }
    }
    ctx->pc = 0x210538u;
label_210538:
    // 0x210538: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21053c:
    // 0x21053c: 0x8c239530  lw          $v1, -0x6AD0($at)
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939952)));
label_210540:
    // 0x210540: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_210544:
    // 0x210544: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210548:
    // 0x210548: 0xac249530  sw          $a0, -0x6AD0($at)
    ctx->pc = 0x210548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939952), GPR_U32(ctx, 4));
label_21054c:
    // 0x21054c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210550:
    // 0x210550: 0x8c239538  lw          $v1, -0x6AC8($at)
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939960)));
label_210554:
    // 0x210554: 0x14830148  bne         $a0, $v1, . + 4 + (0x148 << 2)
label_210558:
    if (ctx->pc == 0x210558u) {
        ctx->pc = 0x21055Cu;
        goto label_21055c;
    }
    ctx->pc = 0x210554u;
    {
        const bool branch_taken_0x210554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x210554) {
            ctx->pc = 0x210A78u;
            goto label_210a78;
        }
    }
    ctx->pc = 0x21055Cu;
label_21055c:
    // 0x21055c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x21055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_210560:
    // 0x210560: 0x2485a510  addiu       $a1, $a0, -0x5AF0
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
label_210564:
    // 0x210564: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_210568:
    // 0x210568: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x210568u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21056c:
    // 0x21056c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x21056cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_210570:
    // 0x210570: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
label_210574:
    // 0x210574: 0x2503a520  addiu       $v1, $t0, -0x5AE0
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944032));
label_210578:
    // 0x210578: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_21057c:
    // 0x21057c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21057cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_210580:
    // 0x210580: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x210580u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_210584:
    // 0x210584: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_210588:
    // 0x210588: 0x24c4a530  addiu       $a0, $a2, -0x5AD0
    ctx->pc = 0x210588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944048));
label_21058c:
    // 0x21058c: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_210590:
    // 0x210590: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x210590u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_210594:
    // 0x210594: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x210594u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_210598:
    // 0x210598: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x210598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_21059c:
    // 0x21059c: 0x2464a540  addiu       $a0, $v1, -0x5AC0
    ctx->pc = 0x21059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
label_2105a0:
    // 0x2105a0: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2105a4:
    // 0x2105a4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2105a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2105a8:
    // 0x2105a8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2105a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_2105ac:
    // 0x2105ac: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2105acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_2105b0:
    // 0x2105b0: 0x24c3a550  addiu       $v1, $a2, -0x5AB0
    ctx->pc = 0x2105b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944080));
label_2105b4:
    // 0x2105b4: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_2105b8:
    // 0x2105b8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2105b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2105bc:
    // 0x2105bc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2105bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2105c0:
    // 0x2105c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2105c4:
    // 0x2105c4: 0x2464a560  addiu       $a0, $v1, -0x5AA0
    ctx->pc = 0x2105c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944096));
label_2105c8:
    // 0x2105c8: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2105c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_2105cc:
    // 0x2105cc: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2105ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2105d0:
    // 0x2105d0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2105d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_2105d4:
    // 0x2105d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2105d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2105d8:
    // 0x2105d8: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x2105d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939952), GPR_U32(ctx, 0));
label_2105dc:
    // 0x2105dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2105e0:
    // 0x2105e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2105e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2105e4:
    // 0x2105e4: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x2105e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 3));
label_2105e8:
    // 0x2105e8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2105ec:
    // 0x2105ec: 0x84c51278  lh          $a1, 0x1278($a2)
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_2105f0:
    // 0x2105f0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2105f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_2105f4:
    // 0x2105f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2105f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2105f8:
    // 0x2105f8: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x2105f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_2105fc:
    // 0x2105fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210600:
    if (ctx->pc == 0x210600u) {
        ctx->pc = 0x210604u;
        goto label_210604;
    }
    ctx->pc = 0x2105FCu;
    {
        const bool branch_taken_0x2105fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2105fc) {
            ctx->pc = 0x210610u;
            goto label_210610;
        }
    }
    ctx->pc = 0x210604u;
label_210604:
    // 0x210604: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210608:
    // 0x210608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21060c:
    // 0x21060c: 0xac269538  sw          $a2, -0x6AC8($at)
    ctx->pc = 0x21060cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 6));
label_210610:
    // 0x210610: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210614:
    // 0x210614: 0x84861278  lh          $a2, 0x1278($a0)
    ctx->pc = 0x210614u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_210618:
    // 0x210618: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x210618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_21061c:
    // 0x21061c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21061cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210620:
    // 0x210620: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x210620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
label_210624:
    // 0x210624: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210628:
    if (ctx->pc == 0x210628u) {
        ctx->pc = 0x21062Cu;
        goto label_21062c;
    }
    ctx->pc = 0x210624u;
    {
        const bool branch_taken_0x210624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210624) {
            ctx->pc = 0x210638u;
            goto label_210638;
        }
    }
    ctx->pc = 0x21062Cu;
label_21062c:
    // 0x21062c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_210630:
    // 0x210630: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210634:
    // 0x210634: 0xac339538  sw          $s3, -0x6AC8($at)
    ctx->pc = 0x210634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 19));
label_210638:
    // 0x210638: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21063c:
    // 0x21063c: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210640:
    // 0x210640: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x210640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_210644:
    // 0x210644: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210644u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_210648:
    // 0x210648: 0x28a10028  slti        $at, $a1, 0x28
    ctx->pc = 0x210648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
label_21064c:
    // 0x21064c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210650:
    if (ctx->pc == 0x210650u) {
        ctx->pc = 0x210654u;
        goto label_210654;
    }
    ctx->pc = 0x21064Cu;
    {
        const bool branch_taken_0x21064c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21064c) {
            ctx->pc = 0x210660u;
            goto label_210660;
        }
    }
    ctx->pc = 0x210654u;
label_210654:
    // 0x210654: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_210658:
    // 0x210658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21065c:
    // 0x21065c: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x21065cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 3));
label_210660:
    // 0x210660: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210664:
    // 0x210664: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x210664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210668:
    // 0x210668: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x210668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_21066c:
    // 0x21066c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x21066cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_210670:
    // 0x210670: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x210670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_210674:
    // 0x210674: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210678:
    if (ctx->pc == 0x210678u) {
        ctx->pc = 0x21067Cu;
        goto label_21067c;
    }
    ctx->pc = 0x210674u;
    {
        const bool branch_taken_0x210674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210674) {
            ctx->pc = 0x210688u;
            goto label_210688;
        }
    }
    ctx->pc = 0x21067Cu;
label_21067c:
    // 0x21067c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_210680:
    // 0x210680: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210684:
    // 0x210684: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x210684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 3));
label_210688:
    // 0x210688: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21068c:
    // 0x21068c: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210690:
    // 0x210690: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_210694:
    // 0x210694: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x210694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210698:
    // 0x210698: 0xc0677a8  jal         func_19DEA0
label_21069c:
    if (ctx->pc == 0x21069Cu) {
        ctx->pc = 0x2106A0u;
        goto label_2106a0;
    }
    ctx->pc = 0x210698u;
    SET_GPR_U32(ctx, 31, 0x2106A0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x210698u, 0x2106A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106A0u;
label_2106a0:
    // 0x2106a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2106a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2106a4:
    // 0x2106a4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2106a8:
    // 0x2106a8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2106a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2106ac:
    // 0x2106ac: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2106b0:
    // 0x2106b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2106b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2106b4:
    // 0x2106b4: 0xc040d38  jal         func_1034E0
label_2106b8:
    if (ctx->pc == 0x2106B8u) {
        ctx->pc = 0x2106BCu;
        goto label_2106bc;
    }
    ctx->pc = 0x2106B4u;
    SET_GPR_U32(ctx, 31, 0x2106BCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2106BCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2106BCu) { return; }
    ctx->pc = 0x2106BCu;
label_2106bc:
    // 0x2106bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2106bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2106c0:
    // 0x2106c0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2106c4:
    // 0x2106c4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2106c8:
    // 0x2106c8: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2106cc:
    // 0x2106cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2106ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2106d0:
    // 0x2106d0: 0xc4cc00d8  lwc1        $f12, 0xD8($a2)
    ctx->pc = 0x2106d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2106d4:
    // 0x2106d4: 0xc040ce4  jal         func_103390
label_2106d8:
    if (ctx->pc == 0x2106D8u) {
        ctx->pc = 0x2106DCu;
        goto label_2106dc;
    }
    ctx->pc = 0x2106D4u;
    SET_GPR_U32(ctx, 31, 0x2106DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2106DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2106DCu) { return; }
    ctx->pc = 0x2106DCu;
label_2106dc:
    // 0x2106dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2106dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2106e0:
    // 0x2106e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2106e4:
    // 0x2106e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2106e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2106e8:
    // 0x2106e8: 0x0  nop
    ctx->pc = 0x2106e8u;
    // NOP
label_2106ec:
    // 0x2106ec: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x2106ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
label_2106f0:
    // 0x2106f0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2106f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2106f4:
    // 0x2106f4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2106f8:
    // 0x2106f8: 0xc7ac050c  lwc1        $f12, 0x50C($sp)
    ctx->pc = 0x2106f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2106fc:
    // 0x2106fc: 0xc040ed8  jal         func_103B60
label_210700:
    if (ctx->pc == 0x210700u) {
        ctx->pc = 0x210704u;
        goto label_210704;
    }
    ctx->pc = 0x2106FCu;
    SET_GPR_U32(ctx, 31, 0x210704u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210704u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210704u) { return; }
    ctx->pc = 0x210704u;
label_210704:
    // 0x210704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210708:
    // 0x210708: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_21070c:
    // 0x21070c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x21070cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_210710:
    // 0x210710: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210714:
    // 0x210714: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x210714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210718:
    // 0x210718: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_21071c:
    // 0x21071c: 0xc040bf4  jal         func_102FD0
label_210720:
    if (ctx->pc == 0x210720u) {
        ctx->pc = 0x210724u;
        goto label_210724;
    }
    ctx->pc = 0x21071Cu;
    SET_GPR_U32(ctx, 31, 0x210724u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210724u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210724u) { return; }
    ctx->pc = 0x210724u;
label_210724:
    // 0x210724: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210728:
    // 0x210728: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21072c:
    // 0x21072c: 0x8d2a0130  lw          $t2, 0x130($t1)
    ctx->pc = 0x21072cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
label_210730:
    // 0x210730: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x210730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_210734:
    // 0x210734: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_210738:
    // 0x210738: 0x25460070  addiu       $a2, $t2, 0x70
    ctx->pc = 0x210738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
label_21073c:
    // 0x21073c: 0xc0675a8  jal         func_19D6A0
label_210740:
    if (ctx->pc == 0x210740u) {
        ctx->pc = 0x210744u;
        goto label_210744;
    }
    ctx->pc = 0x21073Cu;
    SET_GPR_U32(ctx, 31, 0x210744u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x21073Cu, 0x210744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210744u;
label_210744:
    // 0x210744: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210744u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210748:
    // 0x210748: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x210748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_21074c:
    // 0x21074c: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x21074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_210750:
    // 0x210750: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x210750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_210754:
    // 0x210754: 0xc7ac050c  lwc1        $f12, 0x50C($sp)
    ctx->pc = 0x210754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210758:
    // 0x210758: 0xc040ed8  jal         func_103B60
label_21075c:
    if (ctx->pc == 0x21075Cu) {
        ctx->pc = 0x210760u;
        goto label_210760;
    }
    ctx->pc = 0x210758u;
    SET_GPR_U32(ctx, 31, 0x210760u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210760u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210760u) { return; }
    ctx->pc = 0x210760u;
label_210760:
    // 0x210760: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210760u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210764:
    // 0x210764: 0x27aa0270  addiu       $t2, $sp, 0x270
    ctx->pc = 0x210764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_210768:
    // 0x210768: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x210768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_21076c:
    // 0x21076c: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210770:
    // 0x210770: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x210770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_210774:
    // 0x210774: 0xc040bf4  jal         func_102FD0
label_210778:
    if (ctx->pc == 0x210778u) {
        ctx->pc = 0x21077Cu;
        goto label_21077c;
    }
    ctx->pc = 0x210774u;
    SET_GPR_U32(ctx, 31, 0x21077Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x21077Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21077Cu) { return; }
    ctx->pc = 0x21077Cu;
label_21077c:
    // 0x21077c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21077cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210780:
    // 0x210780: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210784:
    // 0x210784: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_210788:
    // 0x210788: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x210788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_21078c:
    // 0x21078c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x21078cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_210790:
    // 0x210790: 0x27a90270  addiu       $t1, $sp, 0x270
    ctx->pc = 0x210790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_210794:
    // 0x210794: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x210794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210798:
    // 0x210798: 0x24ca0070  addiu       $t2, $a2, 0x70
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_21079c:
    // 0x21079c: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x21079cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2107a0:
    // 0x2107a0: 0xc0675a8  jal         func_19D6A0
label_2107a4:
    if (ctx->pc == 0x2107A4u) {
        ctx->pc = 0x2107A8u;
        goto label_2107a8;
    }
    ctx->pc = 0x2107A0u;
    SET_GPR_U32(ctx, 31, 0x2107A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2107A0u, 0x2107A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107A8u;
label_2107a8:
    // 0x2107a8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2107a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2107ac:
    // 0x2107ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2107acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2107b0:
    // 0x2107b0: 0x0  nop
    ctx->pc = 0x2107b0u;
    // NOP
label_2107b4:
    // 0x2107b4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2107b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2107b8:
    // 0x2107b8: 0x3c0a4296  lui         $t2, 0x4296
    ctx->pc = 0x2107b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17046 << 16));
label_2107bc:
    // 0x2107bc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2107bcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2107c0:
    // 0x2107c0: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x2107c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2107c4:
    // 0x2107c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2107c8:
    // 0x2107c8: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2107c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2107cc:
    // 0x2107cc: 0x3c074270  lui         $a3, 0x4270
    ctx->pc = 0x2107ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17008 << 16));
label_2107d0:
    // 0x2107d0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2107d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2107d4:
    // 0x2107d4: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x2107d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2107d8:
    // 0x2107d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2107dc:
    // 0x2107dc: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x2107dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2107e0:
    // 0x2107e0: 0xc06765c  jal         func_19D970
label_2107e4:
    if (ctx->pc == 0x2107E4u) {
        ctx->pc = 0x2107E8u;
        goto label_2107e8;
    }
    ctx->pc = 0x2107E0u;
    SET_GPR_U32(ctx, 31, 0x2107E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2107E0u, 0x2107E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107E8u;
label_2107e8:
    // 0x2107e8: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
label_2107ec:
    // 0x2107ec: 0x34c30fdb  ori         $v1, $a2, 0xFDB
    ctx->pc = 0x2107ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
label_2107f0:
    // 0x2107f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2107f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2107f4:
    // 0x2107f4: 0x0  nop
    ctx->pc = 0x2107f4u;
    // NOP
label_2107f8:
    // 0x2107f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2107fc:
    // 0x2107fc: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x2107fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
label_210800:
    // 0x210800: 0x27a302e0  addiu       $v1, $sp, 0x2E0
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_210804:
    // 0x210804: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x210804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210808:
    // 0x210808: 0xc7ac0508  lwc1        $f12, 0x508($sp)
    ctx->pc = 0x210808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21080c:
    // 0x21080c: 0xc067844  jal         func_19E110
label_210810:
    if (ctx->pc == 0x210810u) {
        ctx->pc = 0x210814u;
        goto label_210814;
    }
    ctx->pc = 0x21080Cu;
    SET_GPR_U32(ctx, 31, 0x210814u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x21080Cu, 0x210814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210814u;
label_210814:
    // 0x210814: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210814u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210818:
    // 0x210818: 0xc06765c  jal         func_19D970
label_21081c:
    if (ctx->pc == 0x21081Cu) {
        ctx->pc = 0x210820u;
        goto label_210820;
    }
    ctx->pc = 0x210818u;
    SET_GPR_U32(ctx, 31, 0x210820u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210818u, 0x210820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210820u;
label_210820:
    // 0x210820: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_210824:
    // 0x210824: 0x346a0fdb  ori         $t2, $v1, 0xFDB
    ctx->pc = 0x210824u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_210828:
    // 0x210828: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x210828u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21082c:
    // 0x21082c: 0x0  nop
    ctx->pc = 0x21082cu;
    // NOP
label_210830:
    // 0x210830: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210834:
    // 0x210834: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x210834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
label_210838:
    // 0x210838: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_21083c:
    // 0x21083c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_210840:
    // 0x210840: 0xc7ac0508  lwc1        $f12, 0x508($sp)
    ctx->pc = 0x210840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210844:
    // 0x210844: 0xc040ce4  jal         func_103390
label_210848:
    if (ctx->pc == 0x210848u) {
        ctx->pc = 0x21084Cu;
        goto label_21084c;
    }
    ctx->pc = 0x210844u;
    SET_GPR_U32(ctx, 31, 0x21084Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x21084Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21084Cu) { return; }
    ctx->pc = 0x21084Cu;
label_21084c:
    // 0x21084c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21084cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210850:
    // 0x210850: 0x27a902a0  addiu       $t1, $sp, 0x2A0
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210854:
    // 0x210854: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210854u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210858:
    // 0x210858: 0x27aa02a0  addiu       $t2, $sp, 0x2A0
    ctx->pc = 0x210858u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_21085c:
    // 0x21085c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x21085cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210860:
    // 0x210860: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_210864:
    // 0x210864: 0xc040c00  jal         func_103000
label_210868:
    if (ctx->pc == 0x210868u) {
        ctx->pc = 0x21086Cu;
        goto label_21086c;
    }
    ctx->pc = 0x210864u;
    SET_GPR_U32(ctx, 31, 0x21086Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x21086Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21086Cu) { return; }
    ctx->pc = 0x21086Cu;
label_21086c:
    // 0x21086c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21086cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210870:
    // 0x210870: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_210874:
    // 0x210874: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210878:
    // 0x210878: 0x27aa02a0  addiu       $t2, $sp, 0x2A0
    ctx->pc = 0x210878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_21087c:
    // 0x21087c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x21087cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210880:
    // 0x210880: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x210880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_210884:
    // 0x210884: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210888:
    // 0x210888: 0xc040bf4  jal         func_102FD0
label_21088c:
    if (ctx->pc == 0x21088Cu) {
        ctx->pc = 0x210890u;
        goto label_210890;
    }
    ctx->pc = 0x210888u;
    SET_GPR_U32(ctx, 31, 0x210890u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210890u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210890u) { return; }
    ctx->pc = 0x210890u;
label_210890:
    // 0x210890: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210894:
    // 0x210894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210898:
    // 0x210898: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x210898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_21089c:
    // 0x21089c: 0x3c07437a  lui         $a3, 0x437A
    ctx->pc = 0x21089cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17274 << 16));
label_2108a0:
    // 0x2108a0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2108a0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2108a4:
    // 0x2108a4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_2108a8:
    // 0x2108a8: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x2108a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2108ac:
    // 0x2108ac: 0x3c09437a  lui         $t1, 0x437A
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17274 << 16));
label_2108b0:
    // 0x2108b0: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2108b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2108b4:
    // 0x2108b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2108b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2108b8:
    // 0x2108b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2108b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2108bc:
    // 0x2108bc: 0x27aa0270  addiu       $t2, $sp, 0x270
    ctx->pc = 0x2108bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2108c0:
    // 0x2108c0: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2108c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2108c4:
    // 0x2108c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2108c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2108c8:
    // 0x2108c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2108c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2108cc:
    // 0x2108cc: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x2108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2108d0:
    // 0x2108d0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2108d0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2108d4:
    // 0x2108d4: 0x27aa0280  addiu       $t2, $sp, 0x280
    ctx->pc = 0x2108d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2108d8:
    // 0x2108d8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2108d8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2108dc:
    // 0x2108dc: 0xc0bb6c0  jal         func_2EDB00
label_2108e0:
    if (ctx->pc == 0x2108E0u) {
        ctx->pc = 0x2108E4u;
        goto label_2108e4;
    }
    ctx->pc = 0x2108DCu;
    SET_GPR_U32(ctx, 31, 0x2108E4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2108DCu, 0x2108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108E4u;
label_2108e4:
    // 0x2108e4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2108e4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2108e8:
    // 0x2108e8: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
label_2108ec:
    // 0x2108ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2108ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2108f0:
    // 0x2108f0: 0x0  nop
    ctx->pc = 0x2108f0u;
    // NOP
label_2108f4:
    // 0x2108f4: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x2108f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
label_2108f8:
    // 0x2108f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2108f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2108fc:
    // 0x2108fc: 0x0  nop
    ctx->pc = 0x2108fcu;
    // NOP
label_210900:
    // 0x210900: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x210900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_210904:
    // 0x210904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210908:
    // 0x210908: 0x0  nop
    ctx->pc = 0x210908u;
    // NOP
label_21090c:
    // 0x21090c: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x21090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_210910:
    // 0x210910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210914:
    // 0x210914: 0x0  nop
    ctx->pc = 0x210914u;
    // NOP
label_210918:
    // 0x210918: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x210918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_21091c:
    // 0x21091c: 0x27a802a0  addiu       $t0, $sp, 0x2A0
    ctx->pc = 0x21091cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210920:
    // 0x210920: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x210920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_210924:
    // 0x210924: 0xc040cbc  jal         func_1032F0
label_210928:
    if (ctx->pc == 0x210928u) {
        ctx->pc = 0x21092Cu;
        goto label_21092c;
    }
    ctx->pc = 0x210924u;
    SET_GPR_U32(ctx, 31, 0x21092Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x21092Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21092Cu) { return; }
    ctx->pc = 0x21092Cu;
label_21092c:
    // 0x21092c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21092cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210930:
    // 0x210930: 0x27a902a0  addiu       $t1, $sp, 0x2A0
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_210934:
    // 0x210934: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210938:
    // 0x210938: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_21093c:
    // 0x21093c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x21093cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210940:
    // 0x210940: 0x27aa0370  addiu       $t2, $sp, 0x370
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_210944:
    // 0x210944: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x210944u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210948:
    // 0x210948: 0xc040d62  jal         func_103588
label_21094c:
    if (ctx->pc == 0x21094Cu) {
        ctx->pc = 0x210950u;
        goto label_210950;
    }
    ctx->pc = 0x210948u;
    SET_GPR_U32(ctx, 31, 0x210950u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210950u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210950u) { return; }
    ctx->pc = 0x210950u;
label_210950:
    // 0x210950: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210950u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210954:
    // 0x210954: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_210958:
    // 0x210958: 0xc040cbc  jal         func_1032F0
label_21095c:
    if (ctx->pc == 0x21095Cu) {
        ctx->pc = 0x210960u;
        goto label_210960;
    }
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 31, 0x210960u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210960u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210960u) { return; }
    ctx->pc = 0x210960u;
label_210960:
    // 0x210960: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210964:
    // 0x210964: 0xc06765c  jal         func_19D970
label_210968:
    if (ctx->pc == 0x210968u) {
        ctx->pc = 0x21096Cu;
        goto label_21096c;
    }
    ctx->pc = 0x210964u;
    SET_GPR_U32(ctx, 31, 0x21096Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210964u, 0x21096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21096Cu;
label_21096c:
    // 0x21096c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_210970:
    // 0x210970: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x210970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_210974:
    // 0x210974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x210974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210978:
    // 0x210978: 0x0  nop
    ctx->pc = 0x210978u;
    // NOP
label_21097c:
    // 0x21097c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21097cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210980:
    // 0x210980: 0xe7a00360  swc1        $f0, 0x360($sp)
    ctx->pc = 0x210980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_210984:
    // 0x210984: 0xc06765c  jal         func_19D970
label_210988:
    if (ctx->pc == 0x210988u) {
        ctx->pc = 0x21098Cu;
        goto label_21098c;
    }
    ctx->pc = 0x210984u;
    SET_GPR_U32(ctx, 31, 0x21098Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210984u, 0x21098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21098Cu;
label_21098c:
    // 0x21098c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_210990:
    // 0x210990: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_210994:
    // 0x210994: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210998:
    // 0x210998: 0x0  nop
    ctx->pc = 0x210998u;
    // NOP
label_21099c:
    // 0x21099c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21099cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2109a0:
    // 0x2109a0: 0xe7a00364  swc1        $f0, 0x364($sp)
    ctx->pc = 0x2109a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_2109a4:
    // 0x2109a4: 0xc06765c  jal         func_19D970
label_2109a8:
    if (ctx->pc == 0x2109A8u) {
        ctx->pc = 0x2109ACu;
        goto label_2109ac;
    }
    ctx->pc = 0x2109A4u;
    SET_GPR_U32(ctx, 31, 0x2109ACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2109A4u, 0x2109ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109ACu;
label_2109ac:
    // 0x2109ac: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_2109b0:
    // 0x2109b0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2109b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2109b4:
    // 0x2109b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2109b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2109b8:
    // 0x2109b8: 0x0  nop
    ctx->pc = 0x2109b8u;
    // NOP
label_2109bc:
    // 0x2109bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2109bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2109c0:
    // 0x2109c0: 0xe7a00368  swc1        $f0, 0x368($sp)
    ctx->pc = 0x2109c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_2109c4:
    // 0x2109c4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2109c8:
    // 0x2109c8: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x2109c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2109cc:
    // 0x2109cc: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x2109ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_2109d0:
    // 0x2109d0: 0xc040d62  jal         func_103588
label_2109d4:
    if (ctx->pc == 0x2109D4u) {
        ctx->pc = 0x2109D8u;
        goto label_2109d8;
    }
    ctx->pc = 0x2109D0u;
    SET_GPR_U32(ctx, 31, 0x2109D8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x2109D8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2109D8u) { return; }
    ctx->pc = 0x2109D8u;
label_2109d8:
    // 0x2109d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2109d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2109dc:
    // 0x2109dc: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2109dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2109e0:
    // 0x2109e0: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x2109e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2109e4:
    // 0x2109e4: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x2109e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2109e8:
    // 0x2109e8: 0xc040c00  jal         func_103000
label_2109ec:
    if (ctx->pc == 0x2109ECu) {
        ctx->pc = 0x2109F0u;
        goto label_2109f0;
    }
    ctx->pc = 0x2109E8u;
    SET_GPR_U32(ctx, 31, 0x2109F0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2109F0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2109F0u) { return; }
    ctx->pc = 0x2109F0u;
label_2109f0:
    // 0x2109f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2109f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2109f4:
    // 0x2109f4: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2109f8:
    // 0x2109f8: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2109fc:
    // 0x2109fc: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2109fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_210a00:
    // 0x210a00: 0xc040bf4  jal         func_102FD0
label_210a04:
    if (ctx->pc == 0x210A04u) {
        ctx->pc = 0x210A08u;
        goto label_210a08;
    }
    ctx->pc = 0x210A00u;
    SET_GPR_U32(ctx, 31, 0x210A08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210A08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210A08u) { return; }
    ctx->pc = 0x210A08u;
label_210a08:
    // 0x210a08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210a0c:
    // 0x210a0c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210a10:
    // 0x210a10: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_210a14:
    // 0x210a14: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_210a18:
    // 0x210a18: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_210a1c:
    // 0x210a1c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x210a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_210a20:
    // 0x210a20: 0xc0675a8  jal         func_19D6A0
label_210a24:
    if (ctx->pc == 0x210A24u) {
        ctx->pc = 0x210A28u;
        goto label_210a28;
    }
    ctx->pc = 0x210A20u;
    SET_GPR_U32(ctx, 31, 0x210A28u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210A20u, 0x210A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A28u;
label_210a28:
    // 0x210a28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210a2c:
    // 0x210a2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210a30:
    // 0x210a30: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x210a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_210a34:
    // 0x210a34: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x210a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_210a38:
    // 0x210a38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x210a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210a3c:
    // 0x210a3c: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x210a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_210a40:
    // 0x210a40: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x210a40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_210a44:
    // 0x210a44: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
label_210a48:
    // 0x210a48: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x210a48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210a4c:
    // 0x210a4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210a50:
    // 0x210a50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210a50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210a54:
    // 0x210a54: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x210a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_210a58:
    // 0x210a58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210a58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210a5c:
    // 0x210a5c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210a5cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210a60:
    // 0x210a60: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x210a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_210a64:
    // 0x210a64: 0x27aa0280  addiu       $t2, $sp, 0x280
    ctx->pc = 0x210a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_210a68:
    // 0x210a68: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210a68u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210a6c:
    // 0x210a6c: 0xc0bb6c0  jal         func_2EDB00
label_210a70:
    if (ctx->pc == 0x210A70u) {
        ctx->pc = 0x210A74u;
        goto label_210a74;
    }
    ctx->pc = 0x210A6Cu;
    SET_GPR_U32(ctx, 31, 0x210A74u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210A6Cu, 0x210A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A74u;
label_210a74:
    // 0x210a74: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x210a74u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210a78:
    // 0x210a78: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210a7c:
    // 0x210a7c: 0x84721278  lh          $s2, 0x1278($v1)
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210a80:
    // 0x210a80: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x210a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
label_210a84:
    // 0x210a84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210a84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_210a88:
    // 0x210a88: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x210a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
label_210a8c:
    // 0x210a8c: 0x14200190  bnez        $at, . + 4 + (0x190 << 2)
label_210a90:
    if (ctx->pc == 0x210A90u) {
        ctx->pc = 0x210A94u;
        goto label_210a94;
    }
    ctx->pc = 0x210A8Cu;
    {
        const bool branch_taken_0x210a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a8c) {
            ctx->pc = 0x2110D0u;
            goto label_2110d0;
        }
    }
    ctx->pc = 0x210A94u;
label_210a94:
    // 0x210a94: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210a98:
    // 0x210a98: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_210a9c:
    // 0x210a9c: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x210a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
label_210aa0:
    // 0x210aa0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x210aa0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_210aa4:
    // 0x210aa4: 0x2a410280  slti        $at, $s2, 0x280
    ctx->pc = 0x210aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)640) ? 1 : 0);
label_210aa8:
    // 0x210aa8: 0x10200189  beqz        $at, . + 4 + (0x189 << 2)
label_210aac:
    if (ctx->pc == 0x210AACu) {
        ctx->pc = 0x210AB0u;
        goto label_210ab0;
    }
    ctx->pc = 0x210AA8u;
    {
        const bool branch_taken_0x210aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210aa8) {
            ctx->pc = 0x2110D0u;
            goto label_2110d0;
        }
    }
    ctx->pc = 0x210AB0u;
label_210ab0:
    // 0x210ab0: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x210ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
label_210ab4:
    // 0x210ab4: 0x26c6a570  addiu       $a2, $s6, -0x5A90
    ctx->pc = 0x210ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944112));
label_210ab8:
    // 0x210ab8: 0x27a70380  addiu       $a3, $sp, 0x380
    ctx->pc = 0x210ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210abc:
    // 0x210abc: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x210abcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_210ac0:
    // 0x210ac0: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x210ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_210ac4:
    // 0x210ac4: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x210ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
label_210ac8:
    // 0x210ac8: 0x252aa580  addiu       $t2, $t1, -0x5A80
    ctx->pc = 0x210ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944128));
label_210acc:
    // 0x210acc: 0x27a30390  addiu       $v1, $sp, 0x390
    ctx->pc = 0x210accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210ad0:
    // 0x210ad0: 0x79540000  lq          $s4, 0x0($t2)
    ctx->pc = 0x210ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_210ad4:
    // 0x210ad4: 0x7c740000  sq          $s4, 0x0($v1)
    ctx->pc = 0x210ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 20));
label_210ad8:
    // 0x210ad8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x210ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_210adc:
    // 0x210adc: 0x2483a590  addiu       $v1, $a0, -0x5A70
    ctx->pc = 0x210adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944144));
label_210ae0:
    // 0x210ae0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x210ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_210ae4:
    // 0x210ae4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x210ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_210ae8:
    // 0x210ae8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_210aec:
    // 0x210aec: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_210af0:
    // 0x210af0: 0x24a3a5a0  addiu       $v1, $a1, -0x5A60
    ctx->pc = 0x210af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944160));
label_210af4:
    // 0x210af4: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_210af8:
    // 0x210af8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x210af8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_210afc:
    // 0x210afc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210afcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_210b00:
    // 0x210b00: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x210b00u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
label_210b04:
    // 0x210b04: 0x26e7a5b0  addiu       $a3, $s7, -0x5A50
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944176));
label_210b08:
    // 0x210b08: 0x27a80480  addiu       $t0, $sp, 0x480
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_210b0c:
    // 0x210b0c: 0x78eb0000  lq          $t3, 0x0($a3)
    ctx->pc = 0x210b0cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_210b10:
    // 0x210b10: 0x7d0b0000  sq          $t3, 0x0($t0)
    ctx->pc = 0x210b10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 11));
label_210b14:
    // 0x210b14: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
label_210b18:
    // 0x210b18: 0x252aa5c0  addiu       $t2, $t1, -0x5A40
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944192));
label_210b1c:
    // 0x210b1c: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x210b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_210b20:
    // 0x210b20: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x210b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_210b24:
    // 0x210b24: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210b24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_210b28:
    // 0x210b28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210b2c:
    // 0x210b2c: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x210b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939952), GPR_U32(ctx, 0));
label_210b30:
    // 0x210b30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210b34:
    // 0x210b34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210b38:
    // 0x210b38: 0xac269538  sw          $a2, -0x6AC8($at)
    ctx->pc = 0x210b38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 6));
label_210b3c:
    // 0x210b3c: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210b40:
    // 0x210b40: 0x85491278  lh          $t1, 0x1278($t2)
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_210b44:
    // 0x210b44: 0x91c3c  dsll32      $v1, $t1, 16
    ctx->pc = 0x210b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
label_210b48:
    // 0x210b48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210b48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210b4c:
    // 0x210b4c: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_210b50:
    // 0x210b50: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210b54:
    if (ctx->pc == 0x210B54u) {
        ctx->pc = 0x210B58u;
        goto label_210b58;
    }
    ctx->pc = 0x210B50u;
    {
        const bool branch_taken_0x210b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b50) {
            ctx->pc = 0x210B64u;
            goto label_210b64;
        }
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210b5c:
    // 0x210b5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210b60:
    // 0x210b60: 0xac2a9538  sw          $t2, -0x6AC8($at)
    ctx->pc = 0x210b60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 10));
label_210b64:
    // 0x210b64: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210b68:
    // 0x210b68: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x210b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210b6c:
    // 0x210b6c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x210b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_210b70:
    // 0x210b70: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210b70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_210b74:
    // 0x210b74: 0x28a10050  slti        $at, $a1, 0x50
    ctx->pc = 0x210b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
label_210b78:
    // 0x210b78: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210b7c:
    if (ctx->pc == 0x210B7Cu) {
        ctx->pc = 0x210B80u;
        goto label_210b80;
    }
    ctx->pc = 0x210B78u;
    {
        const bool branch_taken_0x210b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b78) {
            ctx->pc = 0x210B8Cu;
            goto label_210b8c;
        }
    }
    ctx->pc = 0x210B80u;
label_210b80:
    // 0x210b80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_210b84:
    // 0x210b84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210b88:
    // 0x210b88: 0xac249538  sw          $a0, -0x6AC8($at)
    ctx->pc = 0x210b88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 4));
label_210b8c:
    // 0x210b8c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210b90:
    // 0x210b90: 0x847e1278  lh          $fp, 0x1278($v1)
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210b94:
    // 0x210b94: 0x1e843c  dsll32      $s0, $fp, 16
    ctx->pc = 0x210b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) << (32 + 16));
label_210b98:
    // 0x210b98: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x210b98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_210b9c:
    // 0x210b9c: 0x2a010028  slti        $at, $s0, 0x28
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)40) ? 1 : 0);
label_210ba0:
    // 0x210ba0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210ba4:
    if (ctx->pc == 0x210BA4u) {
        ctx->pc = 0x210BA8u;
        goto label_210ba8;
    }
    ctx->pc = 0x210BA0u;
    {
        const bool branch_taken_0x210ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210ba0) {
            ctx->pc = 0x210BB4u;
            goto label_210bb4;
        }
    }
    ctx->pc = 0x210BA8u;
label_210ba8:
    // 0x210ba8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_210bac:
    // 0x210bac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210bb0:
    // 0x210bb0: 0xac279538  sw          $a3, -0x6AC8($at)
    ctx->pc = 0x210bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 7));
label_210bb4:
    // 0x210bb4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210bb8:
    // 0x210bb8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x210bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_210bbc:
    // 0x210bbc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x210bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_210bc0:
    // 0x210bc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210bc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_210bc4:
    // 0x210bc4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x210bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_210bc8:
    // 0x210bc8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_210bcc:
    if (ctx->pc == 0x210BCCu) {
        ctx->pc = 0x210BD0u;
        goto label_210bd0;
    }
    ctx->pc = 0x210BC8u;
    {
        const bool branch_taken_0x210bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210bc8) {
            ctx->pc = 0x210BDCu;
            goto label_210bdc;
        }
    }
    ctx->pc = 0x210BD0u;
label_210bd0:
    // 0x210bd0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_210bd4:
    // 0x210bd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210bd8:
    // 0x210bd8: 0xac249538  sw          $a0, -0x6AC8($at)
    ctx->pc = 0x210bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939960), GPR_U32(ctx, 4));
label_210bdc:
    // 0x210bdc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210be0:
    // 0x210be0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_210be4:
    // 0x210be4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x210be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_210be8:
    // 0x210be8: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x210be8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_210bec:
    // 0x210bec: 0x252a9260  addiu       $t2, $t1, -0x6DA0
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939232));
label_210bf0:
    // 0x210bf0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x210bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
label_210bf4:
    // 0x210bf4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210bf8:
    // 0x210bf8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_210bfc:
    // 0x210bfc: 0x24a30070  addiu       $v1, $a1, 0x70
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_210c00:
    // 0x210c00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x210c00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_210c04:
    // 0x210c04: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_210c08:
    // 0x210c08: 0x24c79250  addiu       $a3, $a2, -0x6DB0
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939216));
label_210c0c:
    // 0x210c0c: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x210c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_210c10:
    // 0x210c10: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210c14:
    // 0x210c14: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210c18:
    // 0x210c18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210c1c:
    // 0x210c1c: 0xc42c9260  lwc1        $f12, -0x6DA0($at)
    ctx->pc = 0x210c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210c20:
    // 0x210c20: 0xc0677a8  jal         func_19DEA0
label_210c24:
    if (ctx->pc == 0x210C24u) {
        ctx->pc = 0x210C28u;
        goto label_210c28;
    }
    ctx->pc = 0x210C20u;
    SET_GPR_U32(ctx, 31, 0x210C28u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x210C20u, 0x210C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C28u;
label_210c28:
    // 0x210c28: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x210c28u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210c2c:
    // 0x210c2c: 0x27ab03c0  addiu       $t3, $sp, 0x3C0
    ctx->pc = 0x210c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210c30:
    // 0x210c30: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x210c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_210c34:
    // 0x210c34: 0x27aa03c0  addiu       $t2, $sp, 0x3C0
    ctx->pc = 0x210c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210c38:
    // 0x210c38: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x210c38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210c3c:
    // 0x210c3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210c40:
    // 0x210c40: 0xc42c9264  lwc1        $f12, -0x6D9C($at)
    ctx->pc = 0x210c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210c44:
    // 0x210c44: 0xc040d38  jal         func_1034E0
label_210c48:
    if (ctx->pc == 0x210C48u) {
        ctx->pc = 0x210C4Cu;
        goto label_210c4c;
    }
    ctx->pc = 0x210C44u;
    SET_GPR_U32(ctx, 31, 0x210C4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x210C4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210C4Cu) { return; }
    ctx->pc = 0x210C4Cu;
label_210c4c:
    // 0x210c4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210c4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210c50:
    // 0x210c50: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210c54:
    // 0x210c54: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210c58:
    // 0x210c58: 0x27aa03c0  addiu       $t2, $sp, 0x3C0
    ctx->pc = 0x210c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210c5c:
    // 0x210c5c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x210c5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_210c60:
    // 0x210c60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_210c64:
    // 0x210c64: 0xc42c9268  lwc1        $f12, -0x6D98($at)
    ctx->pc = 0x210c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210c68:
    // 0x210c68: 0xc040ce4  jal         func_103390
label_210c6c:
    if (ctx->pc == 0x210C6Cu) {
        ctx->pc = 0x210C70u;
        goto label_210c70;
    }
    ctx->pc = 0x210C68u;
    SET_GPR_U32(ctx, 31, 0x210C70u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x210C70u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210C70u) { return; }
    ctx->pc = 0x210C70u;
label_210c70:
    // 0x210c70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210c70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210c74:
    // 0x210c74: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210c78:
    // 0x210c78: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_210c7c:
    // 0x210c7c: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x210c7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
label_210c80:
    // 0x210c80: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x210c80u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_210c84:
    // 0x210c84: 0x29610190  slti        $at, $t3, 0x190
    ctx->pc = 0x210c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)400) ? 1 : 0);
label_210c88:
    // 0x210c88: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_210c8c:
    if (ctx->pc == 0x210C8Cu) {
        ctx->pc = 0x210C90u;
        goto label_210c90;
    }
    ctx->pc = 0x210C88u;
    {
        const bool branch_taken_0x210c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210c88) {
            ctx->pc = 0x210CD0u;
            goto label_210cd0;
        }
    }
    ctx->pc = 0x210C90u;
label_210c90:
    // 0x210c90: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210c94:
    // 0x210c94: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_210c98:
    // 0x210c98: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x210c98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_210c9c:
    // 0x210c9c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x210c9cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_210ca0:
    // 0x210ca0: 0x2548fed4  addiu       $t0, $t2, -0x12C
    ctx->pc = 0x210ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966996));
label_210ca4:
    // 0x210ca4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x210ca4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210ca8:
    // 0x210ca8: 0x0  nop
    ctx->pc = 0x210ca8u;
    // NOP
label_210cac:
    // 0x210cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x210cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_210cb0:
    // 0x210cb0: 0x3c0a3d4c  lui         $t2, 0x3D4C
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15692 << 16));
label_210cb4:
    // 0x210cb4: 0x3549cccd  ori         $t1, $t2, 0xCCCD
    ctx->pc = 0x210cb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)52429);
label_210cb8:
    // 0x210cb8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x210cb8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210cbc:
    // 0x210cbc: 0x0  nop
    ctx->pc = 0x210cbcu;
    // NOP
label_210cc0:
    // 0x210cc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_210cc4:
    // 0x210cc4: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
label_210cc8:
    // 0x210cc8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_210ccc:
    if (ctx->pc == 0x210CCCu) {
        ctx->pc = 0x210CD0u;
        goto label_210cd0;
    }
    ctx->pc = 0x210CC8u;
    {
        const bool branch_taken_0x210cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cc8) {
            ctx->pc = 0x210D3Cu;
            goto label_210d3c;
        }
    }
    ctx->pc = 0x210CD0u;
label_210cd0:
    // 0x210cd0: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210cd4:
    // 0x210cd4: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_210cd8:
    // 0x210cd8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x210cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_210cdc:
    // 0x210cdc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x210cdcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_210ce0:
    // 0x210ce0: 0x2881021d  slti        $at, $a0, 0x21D
    ctx->pc = 0x210ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)541) ? 1 : 0);
label_210ce4:
    // 0x210ce4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_210ce8:
    if (ctx->pc == 0x210CE8u) {
        ctx->pc = 0x210CECu;
        goto label_210cec;
    }
    ctx->pc = 0x210CE4u;
    {
        const bool branch_taken_0x210ce4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ce4) {
            ctx->pc = 0x210D04u;
            goto label_210d04;
        }
    }
    ctx->pc = 0x210CECu;
label_210cec:
    // 0x210cec: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x210cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_210cf0:
    // 0x210cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210cf4:
    // 0x210cf4: 0x0  nop
    ctx->pc = 0x210cf4u;
    // NOP
label_210cf8:
    // 0x210cf8: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
label_210cfc:
    // 0x210cfc: 0x1000000f  b           . + 4 + (0xF << 2)
label_210d00:
    if (ctx->pc == 0x210D00u) {
        ctx->pc = 0x210D04u;
        goto label_210d04;
    }
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210D3Cu;
            goto label_210d3c;
        }
    }
    ctx->pc = 0x210D04u;
label_210d04:
    // 0x210d04: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_210d08:
    // 0x210d08: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x210d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_210d0c:
    // 0x210d0c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_210d10:
    // 0x210d10: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x210d10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_210d14:
    // 0x210d14: 0x24c7fe34  addiu       $a3, $a2, -0x1CC
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966836));
label_210d18:
    // 0x210d18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x210d18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210d1c:
    // 0x210d1c: 0x0  nop
    ctx->pc = 0x210d1cu;
    // NOP
label_210d20:
    // 0x210d20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x210d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_210d24:
    // 0x210d24: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x210d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_210d28:
    // 0x210d28: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x210d28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_210d2c:
    // 0x210d2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x210d2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210d30:
    // 0x210d30: 0x0  nop
    ctx->pc = 0x210d30u;
    // NOP
label_210d34:
    // 0x210d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_210d38:
    // 0x210d38: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
label_210d3c:
    // 0x210d3c: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x210d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d40:
    // 0x210d40: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_210d44:
    // 0x210d44: 0x27a30380  addiu       $v1, $sp, 0x380
    ctx->pc = 0x210d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d48:
    // 0x210d48: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x210d48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210d4c:
    // 0x210d4c: 0xc7ac0514  lwc1        $f12, 0x514($sp)
    ctx->pc = 0x210d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210d50:
    // 0x210d50: 0xc040ed8  jal         func_103B60
label_210d54:
    if (ctx->pc == 0x210D54u) {
        ctx->pc = 0x210D58u;
        goto label_210d58;
    }
    ctx->pc = 0x210D50u;
    SET_GPR_U32(ctx, 31, 0x210D58u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210D58u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210D58u) { return; }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210d58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210d5c:
    // 0x210d5c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d60:
    // 0x210d60: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210d64:
    // 0x210d64: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d68:
    // 0x210d68: 0xc040bf4  jal         func_102FD0
label_210d6c:
    if (ctx->pc == 0x210D6Cu) {
        ctx->pc = 0x210D70u;
        goto label_210d70;
    }
    ctx->pc = 0x210D68u;
    SET_GPR_U32(ctx, 31, 0x210D70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210D70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210D70u) { return; }
    ctx->pc = 0x210D70u;
label_210d70:
    // 0x210d70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210d70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210d74:
    // 0x210d74: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x210d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d78:
    // 0x210d78: 0x27a70380  addiu       $a3, $sp, 0x380
    ctx->pc = 0x210d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210d7c:
    // 0x210d7c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x210d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_210d80:
    // 0x210d80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x210d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_210d84:
    // 0x210d84: 0x24669250  addiu       $a2, $v1, -0x6DB0
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
label_210d88:
    // 0x210d88: 0xc0675a8  jal         func_19D6A0
label_210d8c:
    if (ctx->pc == 0x210D8Cu) {
        ctx->pc = 0x210D90u;
        goto label_210d90;
    }
    ctx->pc = 0x210D88u;
    SET_GPR_U32(ctx, 31, 0x210D90u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210D88u, 0x210D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D90u;
label_210d90:
    // 0x210d90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210d90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210d94:
    // 0x210d94: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210d98:
    // 0x210d98: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210d9c:
    // 0x210d9c: 0xc7ac0514  lwc1        $f12, 0x514($sp)
    ctx->pc = 0x210d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210da0:
    // 0x210da0: 0xc040ed8  jal         func_103B60
label_210da4:
    if (ctx->pc == 0x210DA4u) {
        ctx->pc = 0x210DA8u;
        goto label_210da8;
    }
    ctx->pc = 0x210DA0u;
    SET_GPR_U32(ctx, 31, 0x210DA8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210DA8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210DA8u) { return; }
    ctx->pc = 0x210DA8u;
label_210da8:
    // 0x210da8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210da8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210dac:
    // 0x210dac: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x210dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210db0:
    // 0x210db0: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210db4:
    // 0x210db4: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210db8:
    // 0x210db8: 0xc040bf4  jal         func_102FD0
label_210dbc:
    if (ctx->pc == 0x210DBCu) {
        ctx->pc = 0x210DC0u;
        goto label_210dc0;
    }
    ctx->pc = 0x210DB8u;
    SET_GPR_U32(ctx, 31, 0x210DC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210DC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210DC0u) { return; }
    ctx->pc = 0x210DC0u;
label_210dc0:
    // 0x210dc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210dc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210dc4:
    // 0x210dc4: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x210dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210dc8:
    // 0x210dc8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_210dcc:
    // 0x210dcc: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210dd0:
    // 0x210dd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_210dd4:
    // 0x210dd4: 0x24669250  addiu       $a2, $v1, -0x6DB0
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
label_210dd8:
    // 0x210dd8: 0xc0675a8  jal         func_19D6A0
label_210ddc:
    if (ctx->pc == 0x210DDCu) {
        ctx->pc = 0x210DE0u;
        goto label_210de0;
    }
    ctx->pc = 0x210DD8u;
    SET_GPR_U32(ctx, 31, 0x210DE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210DD8u, 0x210DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DE0u;
label_210de0:
    // 0x210de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210de4:
    // 0x210de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210de8:
    // 0x210de8: 0x0  nop
    ctx->pc = 0x210de8u;
    // NOP
label_210dec:
    // 0x210dec: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x210decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_210df0:
    // 0x210df0: 0x3c064296  lui         $a2, 0x4296
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17046 << 16));
label_210df4:
    // 0x210df4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x210df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210df8:
    // 0x210df8: 0xc7a00514  lwc1        $f0, 0x514($sp)
    ctx->pc = 0x210df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210dfc:
    // 0x210dfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210e00:
    // 0x210e00: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x210e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_210e04:
    // 0x210e04: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x210e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_210e08:
    // 0x210e08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210e0c:
    // 0x210e0c: 0xc7a00514  lwc1        $f0, 0x514($sp)
    ctx->pc = 0x210e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210e10:
    // 0x210e10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210e14:
    // 0x210e14: 0xe7a003a8  swc1        $f0, 0x3A8($sp)
    ctx->pc = 0x210e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_210e18:
    // 0x210e18: 0xc06765c  jal         func_19D970
label_210e1c:
    if (ctx->pc == 0x210E1Cu) {
        ctx->pc = 0x210E20u;
        goto label_210e20;
    }
    ctx->pc = 0x210E18u;
    SET_GPR_U32(ctx, 31, 0x210E20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210E18u, 0x210E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E20u;
label_210e20:
    // 0x210e20: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_210e24:
    // 0x210e24: 0x34730fdb  ori         $s3, $v1, 0xFDB
    ctx->pc = 0x210e24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_210e28:
    // 0x210e28: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x210e28u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210e2c:
    // 0x210e2c: 0x0  nop
    ctx->pc = 0x210e2cu;
    // NOP
label_210e30:
    // 0x210e30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210e34:
    // 0x210e34: 0xe7a00510  swc1        $f0, 0x510($sp)
    ctx->pc = 0x210e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_210e38:
    // 0x210e38: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x210e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_210e3c:
    // 0x210e3c: 0xc7ac0510  lwc1        $f12, 0x510($sp)
    ctx->pc = 0x210e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210e40:
    // 0x210e40: 0xc067844  jal         func_19E110
label_210e44:
    if (ctx->pc == 0x210E44u) {
        ctx->pc = 0x210E48u;
        goto label_210e48;
    }
    ctx->pc = 0x210E40u;
    SET_GPR_U32(ctx, 31, 0x210E48u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x210E40u, 0x210E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E48u;
label_210e48:
    // 0x210e48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210e4c:
    // 0x210e4c: 0xc06765c  jal         func_19D970
label_210e50:
    if (ctx->pc == 0x210E50u) {
        ctx->pc = 0x210E54u;
        goto label_210e54;
    }
    ctx->pc = 0x210E4Cu;
    SET_GPR_U32(ctx, 31, 0x210E54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210E4Cu, 0x210E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E54u;
label_210e54:
    // 0x210e54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_210e58:
    // 0x210e58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_210e5c:
    // 0x210e5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_210e60:
    // 0x210e60: 0x0  nop
    ctx->pc = 0x210e60u;
    // NOP
label_210e64:
    // 0x210e64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210e68:
    // 0x210e68: 0xe7a00510  swc1        $f0, 0x510($sp)
    ctx->pc = 0x210e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_210e6c:
    // 0x210e6c: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x210e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_210e70:
    // 0x210e70: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_210e74:
    // 0x210e74: 0xc7ac0510  lwc1        $f12, 0x510($sp)
    ctx->pc = 0x210e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_210e78:
    // 0x210e78: 0xc040ce4  jal         func_103390
label_210e7c:
    if (ctx->pc == 0x210E7Cu) {
        ctx->pc = 0x210E80u;
        goto label_210e80;
    }
    ctx->pc = 0x210E78u;
    SET_GPR_U32(ctx, 31, 0x210E80u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x210E80u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210E80u) { return; }
    ctx->pc = 0x210E80u;
label_210e80:
    // 0x210e80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210e84:
    // 0x210e84: 0x27a303c0  addiu       $v1, $sp, 0x3C0
    ctx->pc = 0x210e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210e88:
    // 0x210e88: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x210e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210e8c:
    // 0x210e8c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210e90:
    // 0x210e90: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_210e94:
    // 0x210e94: 0xc040c00  jal         func_103000
label_210e98:
    if (ctx->pc == 0x210E98u) {
        ctx->pc = 0x210E9Cu;
        goto label_210e9c;
    }
    ctx->pc = 0x210E94u;
    SET_GPR_U32(ctx, 31, 0x210E9Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x210E9Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210E9Cu) { return; }
    ctx->pc = 0x210E9Cu;
label_210e9c:
    // 0x210e9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210e9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210ea0:
    // 0x210ea0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_210ea4:
    // 0x210ea4: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210ea8:
    // 0x210ea8: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_210eac:
    // 0x210eac: 0xc040bf4  jal         func_102FD0
label_210eb0:
    if (ctx->pc == 0x210EB0u) {
        ctx->pc = 0x210EB4u;
        goto label_210eb4;
    }
    ctx->pc = 0x210EACu;
    SET_GPR_U32(ctx, 31, 0x210EB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210EB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210EB4u) { return; }
    ctx->pc = 0x210EB4u;
label_210eb4:
    // 0x210eb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210eb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210eb8:
    // 0x210eb8: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_210ebc:
    // 0x210ebc: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x210ebcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210ec0:
    // 0x210ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210ec4:
    // 0x210ec4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x210ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_210ec8:
    // 0x210ec8: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x210ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
label_210ecc:
    // 0x210ecc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x210eccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210ed0:
    // 0x210ed0: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x210ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_210ed4:
    // 0x210ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210ed8:
    // 0x210ed8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210edc:
    // 0x210edc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210ee0:
    // 0x210ee0: 0x27a80390  addiu       $t0, $sp, 0x390
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_210ee4:
    // 0x210ee4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x210ee4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_210ee8:
    // 0x210ee8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210ee8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210eec:
    // 0x210eec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210eecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210ef0:
    // 0x210ef0: 0x27a90380  addiu       $t1, $sp, 0x380
    ctx->pc = 0x210ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_210ef4:
    // 0x210ef4: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x210ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
label_210ef8:
    // 0x210ef8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x210ef8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_210efc:
    // 0x210efc: 0x27aa03a0  addiu       $t2, $sp, 0x3A0
    ctx->pc = 0x210efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_210f00:
    // 0x210f00: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210f00u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210f04:
    // 0x210f04: 0xc0bb6c0  jal         func_2EDB00
label_210f08:
    if (ctx->pc == 0x210F08u) {
        ctx->pc = 0x210F0Cu;
        goto label_210f0c;
    }
    ctx->pc = 0x210F04u;
    SET_GPR_U32(ctx, 31, 0x210F0Cu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210F04u, 0x210F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F0Cu;
label_210f0c:
    // 0x210f0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210f0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210f10:
    // 0x210f10: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x210f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_210f14:
    // 0x210f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210f18:
    // 0x210f18: 0x0  nop
    ctx->pc = 0x210f18u;
    // NOP
label_210f1c:
    // 0x210f1c: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
label_210f20:
    // 0x210f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210f24:
    // 0x210f24: 0x0  nop
    ctx->pc = 0x210f24u;
    // NOP
label_210f28:
    // 0x210f28: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x210f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_210f2c:
    // 0x210f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210f30:
    // 0x210f30: 0x0  nop
    ctx->pc = 0x210f30u;
    // NOP
label_210f34:
    // 0x210f34: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x210f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_210f38:
    // 0x210f38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x210f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210f3c:
    // 0x210f3c: 0x0  nop
    ctx->pc = 0x210f3cu;
    // NOP
label_210f40:
    // 0x210f40: 0xe7ac03a8  swc1        $f12, 0x3A8($sp)
    ctx->pc = 0x210f40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_210f44:
    // 0x210f44: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x210f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210f48:
    // 0x210f48: 0xc040cbc  jal         func_1032F0
label_210f4c:
    if (ctx->pc == 0x210F4Cu) {
        ctx->pc = 0x210F50u;
        goto label_210f50;
    }
    ctx->pc = 0x210F48u;
    SET_GPR_U32(ctx, 31, 0x210F50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210F50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F50u) { return; }
    ctx->pc = 0x210F50u;
label_210f50:
    // 0x210f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210f54:
    // 0x210f54: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210f58:
    // 0x210f58: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_210f5c:
    // 0x210f5c: 0x27a30490  addiu       $v1, $sp, 0x490
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_210f60:
    // 0x210f60: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x210f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_210f64:
    // 0x210f64: 0xc040d62  jal         func_103588
label_210f68:
    if (ctx->pc == 0x210F68u) {
        ctx->pc = 0x210F6Cu;
        goto label_210f6c;
    }
    ctx->pc = 0x210F64u;
    SET_GPR_U32(ctx, 31, 0x210F6Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210F6Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F6Cu) { return; }
    ctx->pc = 0x210F6Cu;
label_210f6c:
    // 0x210f6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210f70:
    // 0x210f70: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x210f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_210f74:
    // 0x210f74: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210f74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_210f78:
    // 0x210f78: 0xc040cbc  jal         func_1032F0
label_210f7c:
    if (ctx->pc == 0x210F7Cu) {
        ctx->pc = 0x210F80u;
        goto label_210f80;
    }
    ctx->pc = 0x210F78u;
    SET_GPR_U32(ctx, 31, 0x210F80u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210F80u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F80u) { return; }
    ctx->pc = 0x210F80u;
label_210f80:
    // 0x210f80: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210f80u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_210f84:
    // 0x210f84: 0xc06765c  jal         func_19D970
label_210f88:
    if (ctx->pc == 0x210F88u) {
        ctx->pc = 0x210F8Cu;
        goto label_210f8c;
    }
    ctx->pc = 0x210F84u;
    SET_GPR_U32(ctx, 31, 0x210F8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x210f8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_210f90:
    // 0x210f90: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_210f94:
    // 0x210f94: 0x348a0fdb  ori         $t2, $a0, 0xFDB
    ctx->pc = 0x210f94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_210f98:
    // 0x210f98: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x210f98u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210f9c:
    // 0x210f9c: 0x0  nop
    ctx->pc = 0x210f9cu;
    // NOP
label_210fa0:
    // 0x210fa0: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x210fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_210fa4:
    // 0x210fa4: 0xe7a10480  swc1        $f1, 0x480($sp)
    ctx->pc = 0x210fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_210fa8:
    // 0x210fa8: 0xc06765c  jal         func_19D970
label_210fac:
    if (ctx->pc == 0x210FACu) {
        ctx->pc = 0x210FB0u;
        goto label_210fb0;
    }
    ctx->pc = 0x210FA8u;
    SET_GPR_U32(ctx, 31, 0x210FB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210FA8u, 0x210FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FB0u;
label_210fb0:
    // 0x210fb0: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x210fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
label_210fb4:
    // 0x210fb4: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x210fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
label_210fb8:
    // 0x210fb8: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x210fb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_210fbc:
    // 0x210fbc: 0x0  nop
    ctx->pc = 0x210fbcu;
    // NOP
label_210fc0:
    // 0x210fc0: 0x46007302  mul.s       $f12, $f14, $f0
    ctx->pc = 0x210fc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_210fc4:
    // 0x210fc4: 0xe7ac0484  swc1        $f12, 0x484($sp)
    ctx->pc = 0x210fc4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_210fc8:
    // 0x210fc8: 0xc06765c  jal         func_19D970
label_210fcc:
    if (ctx->pc == 0x210FCCu) {
        ctx->pc = 0x210FD0u;
        goto label_210fd0;
    }
    ctx->pc = 0x210FC8u;
    SET_GPR_U32(ctx, 31, 0x210FD0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210FC8u, 0x210FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FD0u;
label_210fd0:
    // 0x210fd0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x210fd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_210fd4:
    // 0x210fd4: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_210fd8:
    // 0x210fd8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x210fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_210fdc:
    // 0x210fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210fe0:
    // 0x210fe0: 0x0  nop
    ctx->pc = 0x210fe0u;
    // NOP
label_210fe4:
    // 0x210fe4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x210fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_210fe8:
    // 0x210fe8: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x210fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_210fec:
    // 0x210fec: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x210fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_210ff0:
    // 0x210ff0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_210ff4:
    // 0x210ff4: 0x27a90440  addiu       $t1, $sp, 0x440
    ctx->pc = 0x210ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_210ff8:
    // 0x210ff8: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x210ff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_210ffc:
    // 0x210ffc: 0x27aa0480  addiu       $t2, $sp, 0x480
    ctx->pc = 0x210ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_211000:
    // 0x211000: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x211000u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_211004:
    // 0x211004: 0xc040d62  jal         func_103588
label_211008:
    if (ctx->pc == 0x211008u) {
        ctx->pc = 0x21100Cu;
        goto label_21100c;
    }
    ctx->pc = 0x211004u;
    SET_GPR_U32(ctx, 31, 0x21100Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x21100Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21100Cu) { return; }
    ctx->pc = 0x21100Cu;
label_21100c:
    // 0x21100c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21100cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211010:
    // 0x211010: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_211014:
    // 0x211014: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x211014u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_211018:
    // 0x211018: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_21101c:
    // 0x21101c: 0x27a303c0  addiu       $v1, $sp, 0x3C0
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_211020:
    // 0x211020: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x211020u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_211024:
    // 0x211024: 0xc040c00  jal         func_103000
label_211028:
    if (ctx->pc == 0x211028u) {
        ctx->pc = 0x21102Cu;
        goto label_21102c;
    }
    ctx->pc = 0x211024u;
    SET_GPR_U32(ctx, 31, 0x21102Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x21102Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21102Cu) { return; }
    ctx->pc = 0x21102Cu;
label_21102c:
    // 0x21102c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21102cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211030:
    // 0x211030: 0x27a703b0  addiu       $a3, $sp, 0x3B0
    ctx->pc = 0x211030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_211034:
    // 0x211034: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x211034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_211038:
    // 0x211038: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_21103c:
    // 0x21103c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x21103cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_211040:
    // 0x211040: 0x27aa03b0  addiu       $t2, $sp, 0x3B0
    ctx->pc = 0x211040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_211044:
    // 0x211044: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x211044u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_211048:
    // 0x211048: 0xc040bf4  jal         func_102FD0
label_21104c:
    if (ctx->pc == 0x21104Cu) {
        ctx->pc = 0x211050u;
        goto label_211050;
    }
    ctx->pc = 0x211048u;
    SET_GPR_U32(ctx, 31, 0x211050u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x211050u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x211050u) { return; }
    ctx->pc = 0x211050u;
label_211050:
    // 0x211050: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x211050u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211054:
    // 0x211054: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211058:
    // 0x211058: 0x8d470130  lw          $a3, 0x130($t2)
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 304)));
label_21105c:
    // 0x21105c: 0x27a303b0  addiu       $v1, $sp, 0x3B0
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_211060:
    // 0x211060: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x211060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_211064:
    // 0x211064: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x211064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_211068:
    // 0x211068: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x211068u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_21106c:
    // 0x21106c: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
label_211070:
    // 0x211070: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x211070u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_211074:
    // 0x211074: 0xc0675a8  jal         func_19D6A0
label_211078:
    if (ctx->pc == 0x211078u) {
        ctx->pc = 0x21107Cu;
        goto label_21107c;
    }
    ctx->pc = 0x211074u;
    SET_GPR_U32(ctx, 31, 0x21107Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x211074u, 0x21107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21107Cu;
label_21107c:
    // 0x21107c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x21107cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211080:
    // 0x211080: 0x3c0a42f0  lui         $t2, 0x42F0
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17136 << 16));
label_211084:
    // 0x211084: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x211084u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_211088:
    // 0x211088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21108c:
    // 0x21108c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_211090:
    // 0x211090: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
label_211094:
    // 0x211094: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211094u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211098:
    // 0x211098: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
label_21109c:
    // 0x21109c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x21109cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2110a0:
    // 0x2110a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2110a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2110a4:
    // 0x2110a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2110a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2110a8:
    // 0x2110a8: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_2110ac:
    // 0x2110ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2110acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2110b0:
    // 0x2110b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2110b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2110b4:
    // 0x2110b4: 0x27a90380  addiu       $t1, $sp, 0x380
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_2110b8:
    // 0x2110b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2110b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2110bc:
    // 0x2110bc: 0x27aa03a0  addiu       $t2, $sp, 0x3A0
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_2110c0:
    // 0x2110c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2110c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2110c4:
    // 0x2110c4: 0xc0bb6c0  jal         func_2EDB00
label_2110c8:
    if (ctx->pc == 0x2110C8u) {
        ctx->pc = 0x2110CCu;
        goto label_2110cc;
    }
    ctx->pc = 0x2110C4u;
    SET_GPR_U32(ctx, 31, 0x2110CCu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2110C4u, 0x2110CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110CCu;
label_2110cc:
    // 0x2110cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2110ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2110d0:
    // 0x2110d0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2110d4:
    // 0x2110d4: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2110d8:
    // 0x2110d8: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x2110d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_2110dc:
    // 0x2110dc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2110dcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_2110e0:
    // 0x2110e0: 0x29410320  slti        $at, $t2, 0x320
    ctx->pc = 0x2110e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)800) ? 1 : 0);
label_2110e4:
    // 0x2110e4: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_2110e8:
    if (ctx->pc == 0x2110E8u) {
        ctx->pc = 0x2110ECu;
        goto label_2110ec;
    }
    ctx->pc = 0x2110E4u;
    {
        const bool branch_taken_0x2110e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2110e4) {
            ctx->pc = 0x211274u;
            goto label_211274;
        }
    }
    ctx->pc = 0x2110ECu;
label_2110ec:
    // 0x2110ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2110f0:
    // 0x2110f0: 0x2445a5d0  addiu       $a1, $v0, -0x5A30
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944208));
label_2110f4:
    // 0x2110f4: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_2110f8:
    // 0x2110f8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2110f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2110fc:
    // 0x2110fc: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x2110fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_211100:
    // 0x211100: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
label_211104:
    // 0x211104: 0x2509a5e0  addiu       $t1, $t0, -0x5A20
    ctx->pc = 0x211104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944224));
label_211108:
    // 0x211108: 0x27aa04b0  addiu       $t2, $sp, 0x4B0
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_21110c:
    // 0x21110c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x21110cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_211110:
    // 0x211110: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x211110u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_211114:
    // 0x211114: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x211114u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_211118:
    // 0x211118: 0x254aa5f0  addiu       $t2, $t2, -0x5A10
    ctx->pc = 0x211118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944240));
label_21111c:
    // 0x21111c: 0x27a704c0  addiu       $a3, $sp, 0x4C0
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_211120:
    // 0x211120: 0x79480000  lq          $t0, 0x0($t2)
    ctx->pc = 0x211120u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_211124:
    // 0x211124: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x211124u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_211128:
    // 0x211128: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21112c:
    // 0x21112c: 0xa3a3051c  sb          $v1, 0x51C($sp)
    ctx->pc = 0x21112cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1308), (uint8_t)GPR_U32(ctx, 3));
label_211130:
    // 0x211130: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211134:
    // 0x211134: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x211134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_211138:
    // 0x211138: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_21113c:
    // 0x21113c: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211140:
    // 0x211140: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x211140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_211144:
    // 0x211144: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x211144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211148:
    // 0x211148: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x211148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_21114c:
    // 0x21114c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211150:
    // 0x211150: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x211150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_211154:
    // 0x211154: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x211154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_211158:
    // 0x211158: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x211158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21115c:
    // 0x21115c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_211160:
    // 0x211160: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x211160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_211164:
    // 0x211164: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x211164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_211168:
    // 0x211168: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x211168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21116c:
    // 0x21116c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211170:
    // 0x211170: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x211170u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 4));
label_211174:
    // 0x211174: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x211174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_211178:
    // 0x211178: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_21117c:
    // 0x21117c: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x21117cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_211180:
    // 0x211180: 0x0  nop
    ctx->pc = 0x211180u;
    // NOP
label_211184:
    // 0x211184: 0x0  nop
    ctx->pc = 0x211184u;
    // NOP
label_211188:
    // 0x211188: 0x1810  mfhi        $v1
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21118c:
    // 0x21118c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211190:
    // 0x211190: 0xa3a4051d  sb          $a0, 0x51D($sp)
    ctx->pc = 0x211190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1309), (uint8_t)GPR_U32(ctx, 4));
label_211194:
    // 0x211194: 0xc06765c  jal         func_19D970
label_211198:
    if (ctx->pc == 0x211198u) {
        ctx->pc = 0x21119Cu;
        goto label_21119c;
    }
    ctx->pc = 0x211194u;
    SET_GPR_U32(ctx, 31, 0x21119Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x211194u, 0x21119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21119Cu;
label_21119c:
    // 0x21119c: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
label_2111a0:
    // 0x2111a0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x2111a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_2111a4:
    // 0x2111a4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2111a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2111a8:
    // 0x2111a8: 0x0  nop
    ctx->pc = 0x2111a8u;
    // NOP
label_2111ac:
    // 0x2111ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2111acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2111b0:
    // 0x2111b0: 0xe7a004c0  swc1        $f0, 0x4C0($sp)
    ctx->pc = 0x2111b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_2111b4:
    // 0x2111b4: 0xc06765c  jal         func_19D970
label_2111b8:
    if (ctx->pc == 0x2111B8u) {
        ctx->pc = 0x2111BCu;
        goto label_2111bc;
    }
    ctx->pc = 0x2111B4u;
    SET_GPR_U32(ctx, 31, 0x2111BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2111B4u, 0x2111BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111BCu;
label_2111bc:
    // 0x2111bc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x2111bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
label_2111c0:
    // 0x2111c0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2111c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_2111c4:
    // 0x2111c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2111c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2111c8:
    // 0x2111c8: 0x0  nop
    ctx->pc = 0x2111c8u;
    // NOP
label_2111cc:
    // 0x2111cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2111ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2111d0:
    // 0x2111d0: 0xe7a104c4  swc1        $f1, 0x4C4($sp)
    ctx->pc = 0x2111d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1220), bits); }
label_2111d4:
    // 0x2111d4: 0xc06765c  jal         func_19D970
label_2111d8:
    if (ctx->pc == 0x2111D8u) {
        ctx->pc = 0x2111DCu;
        goto label_2111dc;
    }
    ctx->pc = 0x2111D4u;
    SET_GPR_U32(ctx, 31, 0x2111DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2111D4u, 0x2111DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111DCu;
label_2111dc:
    // 0x2111dc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
label_2111e0:
    // 0x2111e0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x2111e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_2111e4:
    // 0x2111e4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2111e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2111e8:
    // 0x2111e8: 0x0  nop
    ctx->pc = 0x2111e8u;
    // NOP
label_2111ec:
    // 0x2111ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2111ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2111f0:
    // 0x2111f0: 0xe7a004c8  swc1        $f0, 0x4C8($sp)
    ctx->pc = 0x2111f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1224), bits); }
label_2111f4:
    // 0x2111f4: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_2111f8:
    // 0x2111f8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2111f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2111fc:
    // 0x2111fc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_211200:
    // 0x211200: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x211200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_211204:
    // 0x211204: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x211204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_211208:
    // 0x211208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21120c:
    // 0x21120c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x21120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_211210:
    // 0x211210: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x211210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_211214:
    // 0x211214: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x211214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_211218:
    // 0x211218: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21121c:
    // 0x21121c: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x21121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_211220:
    // 0x211220: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211224:
    // 0x211224: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x211224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
label_211228:
    // 0x211228: 0x93a5051c  lbu         $a1, 0x51C($sp)
    ctx->pc = 0x211228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1308)));
label_21122c:
    // 0x21122c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x21122cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_211230:
    // 0x211230: 0x93a3051d  lbu         $v1, 0x51D($sp)
    ctx->pc = 0x211230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1309)));
label_211234:
    // 0x211234: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x211234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211238:
    // 0x211238: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21123c:
    // 0x21123c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x21123cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_211240:
    // 0x211240: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x211240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_211244:
    // 0x211244: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_211248:
    // 0x211248: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21124c:
    // 0x21124c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x21124cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_211250:
    // 0x211250: 0x27aa04b0  addiu       $t2, $sp, 0x4B0
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_211254:
    // 0x211254: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x211254u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_211258:
    // 0x211258: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x211258u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_21125c:
    // 0x21125c: 0x27ab04c0  addiu       $t3, $sp, 0x4C0
    ctx->pc = 0x21125cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_211260:
    // 0x211260: 0x71605628  paddub      $t2, $t3, $zero
    ctx->pc = 0x211260u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_211264:
    // 0x211264: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x211264u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_211268:
    // 0x211268: 0xc0bb888  jal         func_2EE220
label_21126c:
    if (ctx->pc == 0x21126Cu) {
        ctx->pc = 0x211270u;
        goto label_211270;
    }
    ctx->pc = 0x211268u;
    SET_GPR_U32(ctx, 31, 0x211270u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x211268u, 0x211270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211270u;
label_211270:
    // 0x211270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211274:
    // 0x211274: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211278:
    // 0x211278: 0x86451278  lh          $a1, 0x1278($s2)
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4728)));
label_21127c:
    // 0x21127c: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x21127cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_211280:
    // 0x211280: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x211280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_211284:
    // 0x211284: 0x2881044c  slti        $at, $a0, 0x44C
    ctx->pc = 0x211284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1100) ? 1 : 0);
label_211288:
    // 0x211288: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_21128c:
    if (ctx->pc == 0x21128Cu) {
        ctx->pc = 0x211290u;
        goto label_211290;
    }
    ctx->pc = 0x211288u;
    {
        const bool branch_taken_0x211288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x211288) {
            ctx->pc = 0x211494u;
            goto label_211494;
        }
    }
    ctx->pc = 0x211290u;
label_211290:
    // 0x211290: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211294:
    // 0x211294: 0x84721278  lh          $s2, 0x1278($v1)
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_211298:
    // 0x211298: 0x12b43c  dsll32      $s6, $s2, 16
    ctx->pc = 0x211298u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) << (32 + 16));
label_21129c:
    // 0x21129c: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x21129cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_2112a0:
    // 0x2112a0: 0x32c60003  andi        $a2, $s6, 0x3
    ctx->pc = 0x2112a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
label_2112a4:
    // 0x2112a4: 0x14c0007b  bnez        $a2, . + 4 + (0x7B << 2)
label_2112a8:
    if (ctx->pc == 0x2112A8u) {
        ctx->pc = 0x2112ACu;
        goto label_2112ac;
    }
    ctx->pc = 0x2112A4u;
    {
        const bool branch_taken_0x2112a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2112a4) {
            ctx->pc = 0x211494u;
            goto label_211494;
        }
    }
    ctx->pc = 0x2112ACu;
label_2112ac:
    // 0x2112ac: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_2112b0:
    // 0x2112b0: 0x24e8a600  addiu       $t0, $a3, -0x5A00
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944256));
label_2112b4:
    // 0x2112b4: 0x27a904d0  addiu       $t1, $sp, 0x4D0
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_2112b8:
    // 0x2112b8: 0x790a0000  lq          $t2, 0x0($t0)
    ctx->pc = 0x2112b8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2112bc:
    // 0x2112bc: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x2112bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_2112c0:
    // 0x2112c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2112c4:
    // 0x2112c4: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
label_2112c8:
    // 0x2112c8: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_2112cc:
    // 0x2112cc: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x2112ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2112d0:
    // 0x2112d0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2112d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2112d4:
    // 0x2112d4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_2112d8:
    // 0x2112d8: 0x2483a620  addiu       $v1, $a0, -0x59E0
    ctx->pc = 0x2112d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944288));
label_2112dc:
    // 0x2112dc: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x2112dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_2112e0:
    // 0x2112e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2112e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2112e4:
    // 0x2112e4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2112e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2112e8:
    // 0x2112e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2112ec:
    // 0x2112ec: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2112ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2112f0:
    // 0x2112f0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2112f4:
    // 0x2112f4: 0x3b880  sll         $s7, $v1, 2
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2112f8:
    // 0x2112f8: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_2112fc:
    // 0x2112fc: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_211300:
    // 0x211300: 0x85a00  sll         $t3, $t0, 8
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_211304:
    // 0x211304: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211308:
    // 0x211308: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x211308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_21130c:
    // 0x21130c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x21130cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_211310:
    // 0x211310: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_211314:
    // 0x211314: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x211314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_211318:
    // 0x211318: 0x3066ff00  andi        $a2, $v1, 0xFF00
    ctx->pc = 0x211318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_21131c:
    // 0x21131c: 0x65202  srl         $t2, $a2, 8
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_211320:
    // 0x211320: 0x16a4821  addu        $t1, $t3, $t2
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_211324:
    // 0x211324: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211328:
    // 0x211328: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x211328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 9));
label_21132c:
    // 0x21132c: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x21132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_211330:
    // 0x211330: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x211330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_211334:
    // 0x211334: 0x6a001b  divu        $zero, $v1, $t2
    ctx->pc = 0x211334u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_211338:
    // 0x211338: 0x0  nop
    ctx->pc = 0x211338u;
    // NOP
label_21133c:
    // 0x21133c: 0x0  nop
    ctx->pc = 0x21133cu;
    // NOP
label_211340:
    // 0x211340: 0x1810  mfhi        $v1
    ctx->pc = 0x211340u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_211344:
    // 0x211344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211348:
    // 0x211348: 0xa3a3051e  sb          $v1, 0x51E($sp)
    ctx->pc = 0x211348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1310), (uint8_t)GPR_U32(ctx, 3));
label_21134c:
    // 0x21134c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_211350:
    // 0x211350: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_211354:
    // 0x211354: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x211354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_211358:
    // 0x211358: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21135c:
    // 0x21135c: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_211360:
    // 0x211360: 0x33d000ff  andi        $s0, $fp, 0xFF
    ctx->pc = 0x211360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_211364:
    // 0x211364: 0x103a00  sll         $a3, $s0, 8
    ctx->pc = 0x211364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_211368:
    // 0x211368: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_21136c:
    // 0x21136c: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_211370:
    // 0x211370: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_211374:
    // 0x211374: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_211378:
    // 0x211378: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x211378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21137c:
    // 0x21137c: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x21137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
label_211380:
    // 0x211380: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x211380u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_211384:
    // 0x211384: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_211388:
    // 0x211388: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_21138c:
    // 0x21138c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x21138cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_211390:
    // 0x211390: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211394:
    // 0x211394: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_211398:
    // 0x211398: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x211398u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_21139c:
    // 0x21139c: 0x0  nop
    ctx->pc = 0x21139cu;
    // NOP
label_2113a0:
    // 0x2113a0: 0x0  nop
    ctx->pc = 0x2113a0u;
    // NOP
label_2113a4:
    // 0x2113a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2113a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2113a8:
    // 0x2113a8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2113a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2113ac:
    // 0x2113ac: 0xa3a5051f  sb          $a1, 0x51F($sp)
    ctx->pc = 0x2113acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1311), (uint8_t)GPR_U32(ctx, 5));
label_2113b0:
    // 0x2113b0: 0xc06765c  jal         func_19D970
label_2113b4:
    if (ctx->pc == 0x2113B4u) {
        ctx->pc = 0x2113B8u;
        goto label_2113b8;
    }
    ctx->pc = 0x2113B0u;
    SET_GPR_U32(ctx, 31, 0x2113B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113B0u, 0x2113B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113B8u;
label_2113b8:
    // 0x2113b8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2113b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2113bc:
    // 0x2113bc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
label_2113c0:
    // 0x2113c0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2113c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_2113c4:
    // 0x2113c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2113c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2113c8:
    // 0x2113c8: 0x0  nop
    ctx->pc = 0x2113c8u;
    // NOP
label_2113cc:
    // 0x2113cc: 0x460d7342  mul.s       $f13, $f14, $f13
    ctx->pc = 0x2113ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
label_2113d0:
    // 0x2113d0: 0xe7ad04f0  swc1        $f13, 0x4F0($sp)
    ctx->pc = 0x2113d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
label_2113d4:
    // 0x2113d4: 0xc06765c  jal         func_19D970
label_2113d8:
    if (ctx->pc == 0x2113D8u) {
        ctx->pc = 0x2113DCu;
        goto label_2113dc;
    }
    ctx->pc = 0x2113D4u;
    SET_GPR_U32(ctx, 31, 0x2113DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113D4u, 0x2113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113DCu;
label_2113dc:
    // 0x2113dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2113dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2113e0:
    // 0x2113e0: 0x3c074409  lui         $a3, 0x4409
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17417 << 16));
label_2113e4:
    // 0x2113e4: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x2113e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
label_2113e8:
    // 0x2113e8: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2113e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2113ec:
    // 0x2113ec: 0x0  nop
    ctx->pc = 0x2113ecu;
    // NOP
label_2113f0:
    // 0x2113f0: 0x460c7302  mul.s       $f12, $f14, $f12
    ctx->pc = 0x2113f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
label_2113f4:
    // 0x2113f4: 0xe7ac04f4  swc1        $f12, 0x4F4($sp)
    ctx->pc = 0x2113f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1268), bits); }
label_2113f8:
    // 0x2113f8: 0xc06765c  jal         func_19D970
label_2113fc:
    if (ctx->pc == 0x2113FCu) {
        ctx->pc = 0x211400u;
        goto label_211400;
    }
    ctx->pc = 0x2113F8u;
    SET_GPR_U32(ctx, 31, 0x211400u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113F8u, 0x211400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211400u;
label_211400:
    // 0x211400: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x211400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_211404:
    // 0x211404: 0x3c0a4409  lui         $t2, 0x4409
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17417 << 16));
label_211408:
    // 0x211408: 0x35498000  ori         $t1, $t2, 0x8000
    ctx->pc = 0x211408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_21140c:
    // 0x21140c: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x21140cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_211410:
    // 0x211410: 0x0  nop
    ctx->pc = 0x211410u;
    // NOP
label_211414:
    // 0x211414: 0x460d7002  mul.s       $f0, $f14, $f13
    ctx->pc = 0x211414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
label_211418:
    // 0x211418: 0xe7a004f8  swc1        $f0, 0x4F8($sp)
    ctx->pc = 0x211418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1272), bits); }
label_21141c:
    // 0x21141c: 0x3c0b4348  lui         $t3, 0x4348
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17224 << 16));
label_211420:
    // 0x211420: 0x448b6000  mtc1        $t3, $f12
    ctx->pc = 0x211420u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_211424:
    // 0x211424: 0x3c0a4348  lui         $t2, 0x4348
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17224 << 16));
label_211428:
    // 0x211428: 0x448a6800  mtc1        $t2, $f13
    ctx->pc = 0x211428u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_21142c:
    // 0x21142c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x21142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_211430:
    // 0x211430: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_211434:
    // 0x211434: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x211434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_211438:
    // 0x211438: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21143c:
    // 0x21143c: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x21143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
label_211440:
    // 0x211440: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211444:
    // 0x211444: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x211444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
label_211448:
    // 0x211448: 0x93a3051e  lbu         $v1, 0x51E($sp)
    ctx->pc = 0x211448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1310)));
label_21144c:
    // 0x21144c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x21144cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211450:
    // 0x211450: 0x93a3051f  lbu         $v1, 0x51F($sp)
    ctx->pc = 0x211450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1311)));
label_211454:
    // 0x211454: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x211454u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_211458:
    // 0x211458: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_21145c:
    // 0x21145c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x21145cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_211460:
    // 0x211460: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211464:
    // 0x211464: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x211464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_211468:
    // 0x211468: 0x27aa04d0  addiu       $t2, $sp, 0x4D0
    ctx->pc = 0x211468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_21146c:
    // 0x21146c: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x21146cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_211470:
    // 0x211470: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x211470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211474:
    // 0x211474: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x211474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_211478:
    // 0x211478: 0x71604628  paddub      $t0, $t3, $zero
    ctx->pc = 0x211478u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_21147c:
    // 0x21147c: 0x27a904e0  addiu       $t1, $sp, 0x4E0
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_211480:
    // 0x211480: 0x27aa04f0  addiu       $t2, $sp, 0x4F0
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_211484:
    // 0x211484: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x211484u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_211488:
    // 0x211488: 0xc0bb888  jal         func_2EE220
label_21148c:
    if (ctx->pc == 0x21148Cu) {
        ctx->pc = 0x211490u;
        goto label_211490;
    }
    ctx->pc = 0x211488u;
    SET_GPR_U32(ctx, 31, 0x211490u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x211488u, 0x211490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211490u;
label_211490:
    // 0x211490: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x211490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211494:
    // 0x211494: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211498:
    // 0x211498: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_21149c:
    // 0x21149c: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
label_2114a0:
    if (ctx->pc == 0x2114A0u) {
        ctx->pc = 0x2114A4u;
        goto label_2114a4;
    }
    ctx->pc = 0x21149Cu;
    {
        const bool branch_taken_0x21149c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21149c) {
            ctx->pc = 0x2116E0u;
            goto label_2116e0;
        }
    }
    ctx->pc = 0x2114A4u;
label_2114a4:
    // 0x2114a4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2114a8:
    // 0x2114a8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x2114a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_2114ac:
    // 0x2114ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2114acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2114b0:
    // 0x2114b0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x2114b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
label_2114b4:
    // 0x2114b4: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
label_2114b8:
    // 0x2114b8: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x2114b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
label_2114bc:
    // 0x2114bc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2114bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2114c0:
    // 0x2114c0: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2114c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2114c4:
    // 0x2114c4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2114c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2114c8:
    // 0x2114c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2114cc:
    // 0x2114cc: 0x2465a300  addiu       $a1, $v1, -0x5D00
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
label_2114d0:
    // 0x2114d0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2114d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2114d4:
    // 0x2114d4: 0x2466a310  addiu       $a2, $v1, -0x5CF0
    ctx->pc = 0x2114d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
label_2114d8:
    // 0x2114d8: 0xc040ecc  jal         func_103B30
label_2114dc:
    if (ctx->pc == 0x2114DCu) {
        ctx->pc = 0x2114E0u;
        goto label_2114e0;
    }
    ctx->pc = 0x2114D8u;
    SET_GPR_U32(ctx, 31, 0x2114E0u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x2114E0u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2114E0u) { return; }
    ctx->pc = 0x2114E0u;
label_2114e0:
    // 0x2114e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2114e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2114e4:
    // 0x2114e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2114e8:
    // 0x2114e8: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x2114e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2114ec:
    // 0x2114ec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2114ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2114f0:
    // 0x2114f0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2114f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2114f4:
    // 0x2114f4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2114f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2114f8:
    // 0x2114f8: 0xc05dafc  jal         func_176BF0
label_2114fc:
    if (ctx->pc == 0x2114FCu) {
        ctx->pc = 0x211500u;
        goto label_211500;
    }
    ctx->pc = 0x2114F8u;
    SET_GPR_U32(ctx, 31, 0x211500u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x2114F8u, 0x211500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211500u;
label_211500:
    // 0x211500: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211504:
    // 0x211504: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211508:
    // 0x211508: 0x8487127a  lh          $a3, 0x127A($a0)
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_21150c:
    // 0x21150c: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x21150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_211510:
    // 0x211510: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x211510u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_211514:
    // 0x211514: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_211518:
    // 0x211518: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21151c:
    // 0x21151c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21151cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211520:
    // 0x211520: 0x0  nop
    ctx->pc = 0x211520u;
    // NOP
label_211524:
    // 0x211524: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_211528:
    // 0x211528: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_21152c:
    // 0x21152c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21152cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211530:
    // 0x211530: 0x0  nop
    ctx->pc = 0x211530u;
    // NOP
label_211534:
    // 0x211534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_211538:
    // 0x211538: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21153c:
    // 0x21153c: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x21153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939528), bits); }
label_211540:
    // 0x211540: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211544:
    // 0x211544: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211548:
    // 0x211548: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x211548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_21154c:
    // 0x21154c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211550:
    // 0x211550: 0xc42c9388  lwc1        $f12, -0x6C78($at)
    ctx->pc = 0x211550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_211554:
    // 0x211554: 0xc05db4c  jal         func_176D30
label_211558:
    if (ctx->pc == 0x211558u) {
        ctx->pc = 0x21155Cu;
        goto label_21155c;
    }
    ctx->pc = 0x211554u;
    SET_GPR_U32(ctx, 31, 0x21155Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x211554u, 0x21155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21155Cu;
label_21155c:
    // 0x21155c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21155cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211560:
    // 0x211560: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_211564:
    // 0x211564: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x211564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_211568:
    // 0x211568: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x211568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21156c:
    // 0x21156c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211570:
    // 0x211570: 0x8c269380  lw          $a2, -0x6C80($at)
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211574:
    // 0x211574: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x211574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_211578:
    // 0x211578: 0xc05db74  jal         func_176DD0
label_21157c:
    if (ctx->pc == 0x21157Cu) {
        ctx->pc = 0x211580u;
        goto label_211580;
    }
    ctx->pc = 0x211578u;
    SET_GPR_U32(ctx, 31, 0x211580u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x211578u, 0x211580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211580u;
label_211580:
    // 0x211580: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211580u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211584:
    // 0x211584: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x211584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_211588:
    // 0x211588: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x211588u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21158c:
    // 0x21158c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211590:
    // 0x211590: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211594:
    // 0x211594: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_211598:
    // 0x211598: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21159c:
    // 0x21159c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2115a0:
    // 0x2115a0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2115a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2115a4:
    // 0x2115a4: 0x24c3bd00  addiu       $v1, $a2, -0x4300
    ctx->pc = 0x2115a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_2115a8:
    // 0x2115a8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2115a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2115ac:
    // 0x2115ac: 0xe66c0070  swc1        $f12, 0x70($s3)
    ctx->pc = 0x2115acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
label_2115b0:
    // 0x2115b0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2115b4:
    // 0x2115b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2115b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2115b8:
    // 0x2115b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2115b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2115bc:
    // 0x2115bc: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2115c0:
    // 0x2115c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2115c4:
    // 0x2115c4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2115c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2115c8:
    // 0x2115c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2115cc:
    // 0x2115cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_2115d0:
    // 0x2115d0: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_2115d4:
    // 0x2115d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2115d8:
    // 0x2115d8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2115d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_2115dc:
    // 0x2115dc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2115e0:
    // 0x2115e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2115e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2115e4:
    // 0x2115e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2115e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2115e8:
    // 0x2115e8: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2115ec:
    // 0x2115ec: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2115f0:
    // 0x2115f0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2115f4:
    // 0x2115f4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2115f8:
    // 0x2115f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2115fc:
    // 0x2115fc: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_211600:
    // 0x211600: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x211600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_211604:
    // 0x211604: 0xe4c10078  swc1        $f1, 0x78($a2)
    ctx->pc = 0x211604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
label_211608:
    // 0x211608: 0x3c033e48  lui         $v1, 0x3E48
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15944 << 16));
label_21160c:
    // 0x21160c: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x21160cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_211610:
    // 0x211610: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211610u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211614:
    // 0x211614: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211618:
    // 0x211618: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_21161c:
    // 0x21161c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_211620:
    // 0x211620: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_211624:
    // 0x211624: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x211624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_211628:
    // 0x211628: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
label_21162c:
    // 0x21162c: 0x2546bd00  addiu       $a2, $t2, -0x4300
    ctx->pc = 0x21162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294950144));
label_211630:
    // 0x211630: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_211634:
    // 0x211634: 0xe4e00080  swc1        $f0, 0x80($a3)
    ctx->pc = 0x211634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 128), bits); }
label_211638:
    // 0x211638: 0x3c043e48  lui         $a0, 0x3E48
    ctx->pc = 0x211638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15944 << 16));
label_21163c:
    // 0x21163c: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x21163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_211640:
    // 0x211640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211644:
    // 0x211644: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211648:
    // 0x211648: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_21164c:
    // 0x21164c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_211650:
    // 0x211650: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_211654:
    // 0x211654: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_211658:
    // 0x211658: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_21165c:
    // 0x21165c: 0x24c6bd00  addiu       $a2, $a2, -0x4300
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_211660:
    // 0x211660: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x211660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_211664:
    // 0x211664: 0xe5200084  swc1        $f0, 0x84($t1)
    ctx->pc = 0x211664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 132), bits); }
label_211668:
    // 0x211668: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_21166c:
    // 0x21166c: 0x348ac8c9  ori         $t2, $a0, 0xC8C9
    ctx->pc = 0x21166cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_211670:
    // 0x211670: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x211670u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211674:
    // 0x211674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211678:
    // 0x211678: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_21167c:
    // 0x21167c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x21167cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_211680:
    // 0x211680: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_211684:
    // 0x211684: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x211684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_211688:
    // 0x211688: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_21168c:
    // 0x21168c: 0x24c9bd00  addiu       $t1, $a2, -0x4300
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_211690:
    // 0x211690: 0x1245021  addu        $t2, $t1, $a0
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_211694:
    // 0x211694: 0xe5410088  swc1        $f1, 0x88($t2)
    ctx->pc = 0x211694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 136), bits); }
label_211698:
    // 0x211698: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21169c:
    // 0x21169c: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2116a0:
    // 0x2116a0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2116a4:
    // 0x2116a4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2116a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2116a8:
    // 0x2116a8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2116ac:
    // 0x2116ac: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2116b0:
    // 0x2116b0: 0x24c7bd00  addiu       $a3, $a2, -0x4300
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_2116b4:
    // 0x2116b4: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x2116b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2116b8:
    // 0x2116b8: 0xad20007c  sw          $zero, 0x7C($t1)
    ctx->pc = 0x2116b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 0));
label_2116bc:
    // 0x2116bc: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2116c0:
    // 0x2116c0: 0x8549127a  lh          $t1, 0x127A($t2)
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4730)));
label_2116c4:
    // 0x2116c4: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x2116c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_2116c8:
    // 0x2116c8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2116c8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_2116cc:
    // 0x2116cc: 0x2947001e  slti        $a3, $t2, 0x1E
    ctx->pc = 0x2116ccu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
label_2116d0:
    // 0x2116d0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_2116d4:
    if (ctx->pc == 0x2116D4u) {
        ctx->pc = 0x2116D8u;
        goto label_2116d8;
    }
    ctx->pc = 0x2116D0u;
    {
        const bool branch_taken_0x2116d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2116d0) {
            ctx->pc = 0x2116E0u;
            goto label_2116e0;
        }
    }
    ctx->pc = 0x2116D8u;
label_2116d8:
    // 0x2116d8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2116dc:
    // 0x2116dc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2116dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2116e0:
    // 0x2116e0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_2116e4:
    // 0x2116e4: 0x34666666  ori         $a2, $v1, 0x6666
    ctx->pc = 0x2116e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_2116e8:
    // 0x2116e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2116e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2116ec:
    // 0x2116ec: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2116f0:
    // 0x2116f0: 0xe52001a8  swc1        $f0, 0x1A8($t1)
    ctx->pc = 0x2116f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 424), bits); }
label_2116f4:
    // 0x2116f4: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_2116f8:
    // 0x2116f8: 0xe54001a4  swc1        $f0, 0x1A4($t2)
    ctx->pc = 0x2116f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 420), bits); }
label_2116fc:
    // 0x2116fc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211700:
    // 0x211700: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x211700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_211704:
    // 0x211704: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x211704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211708:
    // 0x211708: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_21170c:
    // 0x21170c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_211710:
    // 0x211710: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x211710u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_211714:
    // 0x211714: 0x28c90226  slti        $t1, $a2, 0x226
    ctx->pc = 0x211714u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)550) ? 1 : 0);
label_211718:
    // 0x211718: 0x15200080  bnez        $t1, . + 4 + (0x80 << 2)
label_21171c:
    if (ctx->pc == 0x21171Cu) {
        ctx->pc = 0x211720u;
        goto label_211720;
    }
    ctx->pc = 0x211718u;
    {
        const bool branch_taken_0x211718 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x211718) {
            ctx->pc = 0x21191Cu;
            goto label_21191c;
        }
    }
    ctx->pc = 0x211720u;
label_211720:
    // 0x211720: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x211720u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211724:
    // 0x211724: 0x85461278  lh          $a2, 0x1278($t2)
    ctx->pc = 0x211724u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
label_211728:
    // 0x211728: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_21172c:
    // 0x21172c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21172cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_211730:
    // 0x211730: 0x2861022c  slti        $at, $v1, 0x22C
    ctx->pc = 0x211730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)556) ? 1 : 0);
label_211734:
    // 0x211734: 0x10200079  beqz        $at, . + 4 + (0x79 << 2)
label_211738:
    if (ctx->pc == 0x211738u) {
        ctx->pc = 0x21173Cu;
        goto label_21173c;
    }
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x211734) {
            ctx->pc = 0x21191Cu;
            goto label_21191c;
        }
    }
    ctx->pc = 0x21173Cu;
label_21173c:
    // 0x21173c: 0x3c0ac59c  lui         $t2, 0xC59C
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50588 << 16));
label_211740:
    // 0x211740: 0x35494000  ori         $t1, $t2, 0x4000
    ctx->pc = 0x211740u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
label_211744:
    // 0x211744: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x211744u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211748:
    // 0x211748: 0x0  nop
    ctx->pc = 0x211748u;
    // NOP
label_21174c:
    // 0x21174c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x21174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_211750:
    // 0x211750: 0x3c0544da  lui         $a1, 0x44DA
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17626 << 16));
label_211754:
    // 0x211754: 0x34a2c000  ori         $v0, $a1, 0xC000
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
label_211758:
    // 0x211758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x211758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21175c:
    // 0x21175c: 0x0  nop
    ctx->pc = 0x21175cu;
    // NOP
label_211760:
    // 0x211760: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x211760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_211764:
    // 0x211764: 0x3c0745be  lui         $a3, 0x45BE
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17854 << 16));
label_211768:
    // 0x211768: 0x34e6a000  ori         $a2, $a3, 0xA000
    ctx->pc = 0x211768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
label_21176c:
    // 0x21176c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x21176cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211770:
    // 0x211770: 0x0  nop
    ctx->pc = 0x211770u;
    // NOP
label_211774:
    // 0x211774: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x211774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_211778:
    // 0x211778: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21177c:
    // 0x21177c: 0x8c289380  lw          $t0, -0x6C80($at)
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211780:
    // 0x211780: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x211780u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_211784:
    // 0x211784: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_211788:
    // 0x211788: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x211788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_21178c:
    // 0x21178c: 0xc05dafc  jal         func_176BF0
label_211790:
    if (ctx->pc == 0x211790u) {
        ctx->pc = 0x211794u;
        goto label_211794;
    }
    ctx->pc = 0x21178Cu;
    SET_GPR_U32(ctx, 31, 0x211794u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x21178Cu, 0x211794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211794u;
label_211794:
    // 0x211794: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x211794u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_211798:
    // 0x211798: 0x3c0a461c  lui         $t2, 0x461C
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17948 << 16));
label_21179c:
    // 0x21179c: 0x35424000  ori         $v0, $t2, 0x4000
    ctx->pc = 0x21179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
label_2117a0:
    // 0x2117a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2117a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2117a4:
    // 0x2117a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2117a8:
    // 0x2117a8: 0x8c2a9380  lw          $t2, -0x6C80($at)
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2117ac:
    // 0x2117ac: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2117acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2117b0:
    // 0x2117b0: 0xc05db4c  jal         func_176D30
label_2117b4:
    if (ctx->pc == 0x2117B4u) {
        ctx->pc = 0x2117B8u;
        goto label_2117b8;
    }
    ctx->pc = 0x2117B0u;
    SET_GPR_U32(ctx, 31, 0x2117B8u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2117B0u, 0x2117B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117B8u;
label_2117b8:
    // 0x2117b8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2117b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2117bc:
    // 0x2117bc: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_2117c0:
    // 0x2117c0: 0x34684000  ori         $t0, $v1, 0x4000
    ctx->pc = 0x2117c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2117c4:
    // 0x2117c4: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x2117c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2117c8:
    // 0x2117c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2117cc:
    // 0x2117cc: 0x8c299380  lw          $t1, -0x6C80($at)
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2117d0:
    // 0x2117d0: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2117d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2117d4:
    // 0x2117d4: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x2117d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_2117d8:
    // 0x2117d8: 0xc05db74  jal         func_176DD0
label_2117dc:
    if (ctx->pc == 0x2117DCu) {
        ctx->pc = 0x2117E0u;
        goto label_2117e0;
    }
    ctx->pc = 0x2117D8u;
    SET_GPR_U32(ctx, 31, 0x2117E0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2117D8u, 0x2117E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117E0u;
label_2117e0:
    // 0x2117e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2117e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2117e4:
    // 0x2117e4: 0x3c0a4248  lui         $t2, 0x4248
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16968 << 16));
label_2117e8:
    // 0x2117e8: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x2117e8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2117ec:
    // 0x2117ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2117f0:
    // 0x2117f0: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2117f4:
    // 0x2117f4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2117f8:
    // 0x2117f8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2117fc:
    // 0x2117fc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_211800:
    // 0x211800: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_211804:
    // 0x211804: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x211804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_211808:
    // 0x211808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21180c:
    // 0x21180c: 0xe46e0070  swc1        $f14, 0x70($v1)
    ctx->pc = 0x21180cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_211810:
    // 0x211810: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_211814:
    // 0x211814: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211818:
    // 0x211818: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_21181c:
    // 0x21181c: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x21181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211820:
    // 0x211820: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_211824:
    // 0x211824: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211828:
    // 0x211828: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21182c:
    // 0x21182c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_211830:
    // 0x211830: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_211834:
    // 0x211834: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_211838:
    // 0x211838: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x211838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_21183c:
    // 0x21183c: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x21183cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
label_211840:
    // 0x211840: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x211840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211844:
    // 0x211844: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211848:
    // 0x211848: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_21184c:
    // 0x21184c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_211850:
    // 0x211850: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211854:
    // 0x211854: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_211858:
    // 0x211858: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_21185c:
    // 0x21185c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x21185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_211860:
    // 0x211860: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_211864:
    // 0x211864: 0xe4610078  swc1        $f1, 0x78($v1)
    ctx->pc = 0x211864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_211868:
    // 0x211868: 0x3c053e48  lui         $a1, 0x3E48
    ctx->pc = 0x211868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15944 << 16));
label_21186c:
    // 0x21186c: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x21186cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_211870:
    // 0x211870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211874:
    // 0x211874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211878:
    // 0x211878: 0x8c269380  lw          $a2, -0x6C80($at)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_21187c:
    // 0x21187c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_211880:
    // 0x211880: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_211884:
    // 0x211884: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_211888:
    // 0x211888: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_21188c:
    // 0x21188c: 0x2505bd00  addiu       $a1, $t0, -0x4300
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950144));
label_211890:
    // 0x211890: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_211894:
    // 0x211894: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x211894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
label_211898:
    // 0x211898: 0x3c0a3e48  lui         $t2, 0x3E48
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15944 << 16));
label_21189c:
    // 0x21189c: 0x3549c8c9  ori         $t1, $t2, 0xC8C9
    ctx->pc = 0x21189cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)51401);
label_2118a0:
    // 0x2118a0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2118a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2118a4:
    // 0x2118a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2118a8:
    // 0x2118a8: 0x8c2b9380  lw          $t3, -0x6C80($at)
    ctx->pc = 0x2118a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2118ac:
    // 0x2118ac: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2118acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_2118b0:
    // 0x2118b0: 0x6b9021  addu        $s2, $v1, $t3
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2118b4:
    // 0x2118b4: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2118b8:
    // 0x2118b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_2118bc:
    // 0x2118bc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_2118c0:
    // 0x2118c0: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2118c4:
    // 0x2118c4: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x2118c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_2118c8:
    // 0x2118c8: 0x3c063f48  lui         $a2, 0x3F48
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16200 << 16));
label_2118cc:
    // 0x2118cc: 0x34d6c8c9  ori         $s6, $a2, 0xC8C9
    ctx->pc = 0x2118ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51401);
label_2118d0:
    // 0x2118d0: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x2118d0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2118d4:
    // 0x2118d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2118d8:
    // 0x2118d8: 0x8c279380  lw          $a3, -0x6C80($at)
    ctx->pc = 0x2118d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_2118dc:
    // 0x2118dc: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2118e0:
    // 0x2118e0: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2118e4:
    // 0x2118e4: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x2118e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2118e8:
    // 0x2118e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2118e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2118ec:
    // 0x2118ec: 0x2474bd00  addiu       $s4, $v1, -0x4300
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_2118f0:
    // 0x2118f0: 0x28a2021  addu        $a0, $s4, $t2
    ctx->pc = 0x2118f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_2118f4:
    // 0x2118f4: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x2118f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_2118f8:
    // 0x2118f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2118fc:
    // 0x2118fc: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x2118fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939520)));
label_211900:
    // 0x211900: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x211900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_211904:
    // 0x211904: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211908:
    // 0x211908: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21190c:
    // 0x21190c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x21190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_211910:
    // 0x211910: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x211910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_211914:
    // 0x211914: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_211918:
    // 0x211918: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x211918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
label_21191c:
    // 0x21191c: 0x8fb70528  lw          $s7, 0x528($sp)
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_211920:
    // 0x211920: 0x86e71278  lh          $a3, 0x1278($s7)
    ctx->pc = 0x211920u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4728)));
label_211924:
    // 0x211924: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x211924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_211928:
    // 0x211928: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x211928u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_21192c:
    // 0x21192c: 0x29010353  slti        $at, $t0, 0x353
    ctx->pc = 0x21192cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)851) ? 1 : 0);
label_211930:
    // 0x211930: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_211934:
    if (ctx->pc == 0x211934u) {
        ctx->pc = 0x211938u;
        goto label_211938;
    }
    ctx->pc = 0x211930u;
    {
        const bool branch_taken_0x211930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x211930) {
            ctx->pc = 0x211974u;
            goto label_211974;
        }
    }
    ctx->pc = 0x211938u;
label_211938:
    // 0x211938: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x211938u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_21193c:
    // 0x21193c: 0x85691278  lh          $t1, 0x1278($t3)
    ctx->pc = 0x21193cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4728)));
label_211940:
    // 0x211940: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x211940u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
label_211944:
    // 0x211944: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x211944u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_211948:
    // 0x211948: 0x29410357  slti        $at, $t2, 0x357
    ctx->pc = 0x211948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)855) ? 1 : 0);
label_21194c:
    // 0x21194c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_211950:
    if (ctx->pc == 0x211950u) {
        ctx->pc = 0x211954u;
        goto label_211954;
    }
    ctx->pc = 0x21194Cu;
    {
        const bool branch_taken_0x21194c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21194c) {
            ctx->pc = 0x211974u;
            goto label_211974;
        }
    }
    ctx->pc = 0x211954u;
label_211954:
    // 0x211954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211958:
    // 0x211958: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x211958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_21195c:
    // 0x21195c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_211960:
    // 0x211960: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x211960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_211964:
    // 0x211964: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211968:
    // 0x211968: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x211968u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 6));
label_21196c:
    // 0x21196c: 0x10000008  b           . + 4 + (0x8 << 2)
label_211970:
    if (ctx->pc == 0x211970u) {
        ctx->pc = 0x211974u;
        goto label_211974;
    }
    ctx->pc = 0x21196Cu;
    {
        const bool branch_taken_0x21196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21196c) {
            ctx->pc = 0x211990u;
            goto label_211990;
        }
    }
    ctx->pc = 0x211974u;
label_211974:
    // 0x211974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211978:
    // 0x211978: 0x8c2a1a98  lw          $t2, 0x1A98($at)
    ctx->pc = 0x211978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_21197c:
    // 0x21197c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_211980:
    // 0x211980: 0x3469ffff  ori         $t1, $v1, 0xFFFF
    ctx->pc = 0x211980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_211984:
    // 0x211984: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x211984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_211988:
    // 0x211988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_21198c:
    // 0x21198c: 0xac2a1a98  sw          $t2, 0x1A98($at)
    ctx->pc = 0x21198cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 10));
label_211990:
    // 0x211990: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_211994:
    // 0x211994: 0x8c23a2f0  lw          $v1, -0x5D10($at)
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943472)));
label_211998:
    // 0x211998: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_21199c:
    // 0x21199c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_2119a0:
    // 0x2119a0: 0xac23a2f0  sw          $v1, -0x5D10($at)
    ctx->pc = 0x2119a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943472), GPR_U32(ctx, 3));
label_2119a4:
    // 0x2119a4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2119a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2119a8:
    // 0x2119a8: 0x10000067  b           . + 4 + (0x67 << 2)
label_2119ac:
    if (ctx->pc == 0x2119ACu) {
        ctx->pc = 0x2119B0u;
        goto label_2119b0;
    }
    ctx->pc = 0x2119A8u;
    {
        const bool branch_taken_0x2119a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119a8) {
            ctx->pc = 0x211B48u;
            goto label_211b48;
        }
    }
    ctx->pc = 0x2119B0u;
label_2119b0:
    // 0x2119b0: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2119b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2119b4:
    // 0x2119b4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_2119b8:
    // 0x2119b8: 0x2483e650  addiu       $v1, $a0, -0x19B0
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960720));
label_2119bc:
    // 0x2119bc: 0x65f021  addu        $fp, $v1, $a1
    ctx->pc = 0x2119bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2119c0:
    // 0x2119c0: 0x8fd01390  lw          $s0, 0x1390($fp)
    ctx->pc = 0x2119c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 5008)));
label_2119c4:
    // 0x2119c4: 0x960710a4  lhu         $a3, 0x10A4($s0)
    ctx->pc = 0x2119c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_2119c8:
    // 0x2119c8: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x2119c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_2119cc:
    // 0x2119cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2119d0:
    // 0x2119d0: 0x10a40025  beq         $a1, $a0, . + 4 + (0x25 << 2)
label_2119d4:
    if (ctx->pc == 0x2119D4u) {
        ctx->pc = 0x2119D8u;
        goto label_2119d8;
    }
    ctx->pc = 0x2119D0u;
    {
        const bool branch_taken_0x2119d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2119d0) {
            ctx->pc = 0x211A68u;
            goto label_211a68;
        }
    }
    ctx->pc = 0x2119D8u;
label_2119d8:
    // 0x2119d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2119dc:
    // 0x2119dc: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_2119e0:
    if (ctx->pc == 0x2119E0u) {
        ctx->pc = 0x2119E4u;
        goto label_2119e4;
    }
    ctx->pc = 0x2119DCu;
    {
        const bool branch_taken_0x2119dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2119dc) {
            ctx->pc = 0x211A2Cu;
            goto label_211a2c;
        }
    }
    ctx->pc = 0x2119E4u;
label_2119e4:
    // 0x2119e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2119e8:
    if (ctx->pc == 0x2119E8u) {
        ctx->pc = 0x2119ECu;
        goto label_2119ec;
    }
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x2119F4u;
            goto label_2119f4;
        }
    }
    ctx->pc = 0x2119ECu;
label_2119ec:
    // 0x2119ec: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2119f0:
    if (ctx->pc == 0x2119F0u) {
        ctx->pc = 0x2119F4u;
        goto label_2119f4;
    }
    ctx->pc = 0x2119ECu;
    {
        const bool branch_taken_0x2119ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119ec) {
            ctx->pc = 0x211AA0u;
            goto label_211aa0;
        }
    }
    ctx->pc = 0x2119F4u;
label_2119f4:
    // 0x2119f4: 0x960410a4  lhu         $a0, 0x10A4($s0)
    ctx->pc = 0x2119f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_2119f8:
    // 0x2119f8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2119f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2119fc:
    // 0x2119fc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_211a00:
    // 0x211a00: 0x960310a4  lhu         $v1, 0x10A4($s0)
    ctx->pc = 0x211a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211a04:
    // 0x211a04: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_211a08:
    // 0x211a08: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_211a0c:
    // 0x211a0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_211a10:
    // 0x211a10: 0x24659500  addiu       $a1, $v1, -0x6B00
    ctx->pc = 0x211a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
label_211a14:
    // 0x211a14: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x211a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_211a18:
    // 0x211a18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211a1c:
    // 0x211a1c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x211a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_211a20:
    // 0x211a20: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x211a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_211a24:
    // 0x211a24: 0x1000001e  b           . + 4 + (0x1E << 2)
label_211a28:
    if (ctx->pc == 0x211A28u) {
        ctx->pc = 0x211A2Cu;
        goto label_211a2c;
    }
    ctx->pc = 0x211A24u;
    {
        const bool branch_taken_0x211a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a24) {
            ctx->pc = 0x211AA0u;
            goto label_211aa0;
        }
    }
    ctx->pc = 0x211A2Cu;
label_211a2c:
    // 0x211a2c: 0x960710a4  lhu         $a3, 0x10A4($s0)
    ctx->pc = 0x211a2cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211a30:
    // 0x211a30: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x211a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_211a34:
    // 0x211a34: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_211a38:
    // 0x211a38: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x211a38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_211a3c:
    // 0x211a3c: 0x960a10a4  lhu         $t2, 0x10A4($s0)
    ctx->pc = 0x211a3cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211a40:
    // 0x211a40: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_211a44:
    // 0x211a44: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211a48:
    // 0x211a48: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_211a4c:
    // 0x211a4c: 0x25439500  addiu       $v1, $t2, -0x6B00
    ctx->pc = 0x211a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939904));
label_211a50:
    // 0x211a50: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_211a54:
    // 0x211a54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_211a58:
    // 0x211a58: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_211a5c:
    // 0x211a5c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x211a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_211a60:
    // 0x211a60: 0x1000000f  b           . + 4 + (0xF << 2)
label_211a64:
    if (ctx->pc == 0x211A64u) {
        ctx->pc = 0x211A68u;
        goto label_211a68;
    }
    ctx->pc = 0x211A60u;
    {
        const bool branch_taken_0x211a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a60) {
            ctx->pc = 0x211AA0u;
            goto label_211aa0;
        }
    }
    ctx->pc = 0x211A68u;
label_211a68:
    // 0x211a68: 0x960310a4  lhu         $v1, 0x10A4($s0)
    ctx->pc = 0x211a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211a6c:
    // 0x211a6c: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x211a6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_211a70:
    // 0x211a70: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x211a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_211a74:
    // 0x211a74: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x211a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_211a78:
    // 0x211a78: 0x960910a4  lhu         $t1, 0x10A4($s0)
    ctx->pc = 0x211a78u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211a7c:
    // 0x211a7c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x211a7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_211a80:
    // 0x211a80: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x211a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_211a84:
    // 0x211a84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_211a88:
    // 0x211a88: 0x24649500  addiu       $a0, $v1, -0x6B00
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
label_211a8c:
    // 0x211a8c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_211a90:
    // 0x211a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211a94:
    // 0x211a94: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_211a98:
    // 0x211a98: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x211a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_211a9c:
    // 0x211a9c: 0x0  nop
    ctx->pc = 0x211a9cu;
    // NOP
label_211aa0:
    // 0x211aa0: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_211aa4:
    // 0x211aa4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x211aa4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_211aa8:
    // 0x211aa8: 0x8ea70034  lw          $a3, 0x34($s5)
    ctx->pc = 0x211aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_211aac:
    // 0x211aac: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x211aacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_211ab0:
    // 0x211ab0: 0x960810a4  lhu         $t0, 0x10A4($s0)
    ctx->pc = 0x211ab0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_211ab4:
    // 0x211ab4: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x211ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_211ab8:
    // 0x211ab8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211abc:
    // 0x211abc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_211ac0:
    // 0x211ac0: 0x24669500  addiu       $a2, $v1, -0x6B00
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
label_211ac4:
    // 0x211ac4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x211ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_211ac8:
    // 0x211ac8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x211ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211acc:
    // 0x211acc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211ad0:
    // 0x211ad0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x211ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_211ad4:
    // 0x211ad4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_211ad8:
    // 0x211ad8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_211adc:
    // 0x211adc: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_211ae0:
    // 0x211ae0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x211ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_211ae4:
    // 0x211ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211ae8:
    // 0x211ae8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x211ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_211aec:
    // 0x211aec: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211af0:
    // 0x211af0: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x211af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_211af4:
    // 0x211af4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_211af8:
    // 0x211af8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211afc:
    // 0x211afc: 0x30a31fff  andi        $v1, $a1, 0x1FFF
    ctx->pc = 0x211afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
label_211b00:
    // 0x211b00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x211b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_211b04:
    // 0x211b04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x211b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_211b08:
    // 0x211b08: 0x8c24a2f0  lw          $a0, -0x5D10($at)
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943472)));
label_211b0c:
    // 0x211b0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211b10:
    // 0x211b10: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_211b14:
    // 0x211b14: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x211b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_211b18:
    // 0x211b18: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_211b1c:
    // 0x211b1c: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x211b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_211b20:
    // 0x211b20: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x211b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_211b24:
    // 0x211b24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211b28:
    // 0x211b28: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x211b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_211b2c:
    // 0x211b2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_211b30:
    // 0x211b30: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_211b34:
    // 0x211b34: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_211b38:
    // 0x211b38: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x211b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_211b3c:
    // 0x211b3c: 0x30c31fff  andi        $v1, $a2, 0x1FFF
    ctx->pc = 0x211b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8191);
label_211b40:
    // 0x211b40: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x211b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_211b44:
    // 0x211b44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_211b48:
    // 0x211b48: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x211b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_211b4c:
    // 0x211b4c: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
label_211b50:
    if (ctx->pc == 0x211B50u) {
        ctx->pc = 0x211B54u;
        goto label_211b54;
    }
    ctx->pc = 0x211B4Cu;
    {
        const bool branch_taken_0x211b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211b4c) {
            ctx->pc = 0x2119B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2119b0;
        }
    }
    ctx->pc = 0x211B54u;
label_211b54:
    // 0x211b54: 0x7bbf00b0  lq          $ra, 0xB0($sp)
    ctx->pc = 0x211b54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_211b58:
    // 0x211b58: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x211b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_211b5c:
    // 0x211b5c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x211b5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_211b60:
    // 0x211b60: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x211b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_211b64:
    // 0x211b64: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x211b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_211b68:
    // 0x211b68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x211b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_211b6c:
    // 0x211b6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x211b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_211b70:
    // 0x211b70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x211b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_211b74:
    // 0x211b74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x211b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_211b78:
    // 0x211b78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x211b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_211b7c:
    // 0x211b7c: 0x27bd0530  addiu       $sp, $sp, 0x530
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_211b80:
    // 0x211b80: 0x3e00008  jr          $ra
label_211b84:
    if (ctx->pc == 0x211B84u) {
        ctx->pc = 0x211B88u;
        goto label_fallthrough_0x211b80;
    }
    ctx->pc = 0x211B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x211b80:
    ctx->pc = 0x211B88u;
}
