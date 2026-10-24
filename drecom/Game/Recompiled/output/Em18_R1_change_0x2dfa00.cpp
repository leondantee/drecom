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

// Function: Em18_R1_change
// Address: 0x2dfa00 - 0x2dffc4
void Em18_R1_change_0x2dfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_change_0x2dfa00");
#endif

    switch (ctx->pc) {
        case 0x2dfa00u: goto label_2dfa00;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa08u: goto label_2dfa08;
        case 0x2dfa0cu: goto label_2dfa0c;
        case 0x2dfa10u: goto label_2dfa10;
        case 0x2dfa14u: goto label_2dfa14;
        case 0x2dfa18u: goto label_2dfa18;
        case 0x2dfa1cu: goto label_2dfa1c;
        case 0x2dfa20u: goto label_2dfa20;
        case 0x2dfa24u: goto label_2dfa24;
        case 0x2dfa28u: goto label_2dfa28;
        case 0x2dfa2cu: goto label_2dfa2c;
        case 0x2dfa30u: goto label_2dfa30;
        case 0x2dfa34u: goto label_2dfa34;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa3cu: goto label_2dfa3c;
        case 0x2dfa40u: goto label_2dfa40;
        case 0x2dfa44u: goto label_2dfa44;
        case 0x2dfa48u: goto label_2dfa48;
        case 0x2dfa4cu: goto label_2dfa4c;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa54u: goto label_2dfa54;
        case 0x2dfa58u: goto label_2dfa58;
        case 0x2dfa5cu: goto label_2dfa5c;
        case 0x2dfa60u: goto label_2dfa60;
        case 0x2dfa64u: goto label_2dfa64;
        case 0x2dfa68u: goto label_2dfa68;
        case 0x2dfa6cu: goto label_2dfa6c;
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa74u: goto label_2dfa74;
        case 0x2dfa78u: goto label_2dfa78;
        case 0x2dfa7cu: goto label_2dfa7c;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa84u: goto label_2dfa84;
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfa8cu: goto label_2dfa8c;
        case 0x2dfa90u: goto label_2dfa90;
        case 0x2dfa94u: goto label_2dfa94;
        case 0x2dfa98u: goto label_2dfa98;
        case 0x2dfa9cu: goto label_2dfa9c;
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfaa4u: goto label_2dfaa4;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfab4u: goto label_2dfab4;
        case 0x2dfab8u: goto label_2dfab8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfac0u: goto label_2dfac0;
        case 0x2dfac4u: goto label_2dfac4;
        case 0x2dfac8u: goto label_2dfac8;
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfad4u: goto label_2dfad4;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfae0u: goto label_2dfae0;
        case 0x2dfae4u: goto label_2dfae4;
        case 0x2dfae8u: goto label_2dfae8;
        case 0x2dfaecu: goto label_2dfaec;
        case 0x2dfaf0u: goto label_2dfaf0;
        case 0x2dfaf4u: goto label_2dfaf4;
        case 0x2dfaf8u: goto label_2dfaf8;
        case 0x2dfafcu: goto label_2dfafc;
        case 0x2dfb00u: goto label_2dfb00;
        case 0x2dfb04u: goto label_2dfb04;
        case 0x2dfb08u: goto label_2dfb08;
        case 0x2dfb0cu: goto label_2dfb0c;
        case 0x2dfb10u: goto label_2dfb10;
        case 0x2dfb14u: goto label_2dfb14;
        case 0x2dfb18u: goto label_2dfb18;
        case 0x2dfb1cu: goto label_2dfb1c;
        case 0x2dfb20u: goto label_2dfb20;
        case 0x2dfb24u: goto label_2dfb24;
        case 0x2dfb28u: goto label_2dfb28;
        case 0x2dfb2cu: goto label_2dfb2c;
        case 0x2dfb30u: goto label_2dfb30;
        case 0x2dfb34u: goto label_2dfb34;
        case 0x2dfb38u: goto label_2dfb38;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb40u: goto label_2dfb40;
        case 0x2dfb44u: goto label_2dfb44;
        case 0x2dfb48u: goto label_2dfb48;
        case 0x2dfb4cu: goto label_2dfb4c;
        case 0x2dfb50u: goto label_2dfb50;
        case 0x2dfb54u: goto label_2dfb54;
        case 0x2dfb58u: goto label_2dfb58;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb60u: goto label_2dfb60;
        case 0x2dfb64u: goto label_2dfb64;
        case 0x2dfb68u: goto label_2dfb68;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfb70u: goto label_2dfb70;
        case 0x2dfb74u: goto label_2dfb74;
        case 0x2dfb78u: goto label_2dfb78;
        case 0x2dfb7cu: goto label_2dfb7c;
        case 0x2dfb80u: goto label_2dfb80;
        case 0x2dfb84u: goto label_2dfb84;
        case 0x2dfb88u: goto label_2dfb88;
        case 0x2dfb8cu: goto label_2dfb8c;
        case 0x2dfb90u: goto label_2dfb90;
        case 0x2dfb94u: goto label_2dfb94;
        case 0x2dfb98u: goto label_2dfb98;
        case 0x2dfb9cu: goto label_2dfb9c;
        case 0x2dfba0u: goto label_2dfba0;
        case 0x2dfba4u: goto label_2dfba4;
        case 0x2dfba8u: goto label_2dfba8;
        case 0x2dfbacu: goto label_2dfbac;
        case 0x2dfbb0u: goto label_2dfbb0;
        case 0x2dfbb4u: goto label_2dfbb4;
        case 0x2dfbb8u: goto label_2dfbb8;
        case 0x2dfbbcu: goto label_2dfbbc;
        case 0x2dfbc0u: goto label_2dfbc0;
        case 0x2dfbc4u: goto label_2dfbc4;
        case 0x2dfbc8u: goto label_2dfbc8;
        case 0x2dfbccu: goto label_2dfbcc;
        case 0x2dfbd0u: goto label_2dfbd0;
        case 0x2dfbd4u: goto label_2dfbd4;
        case 0x2dfbd8u: goto label_2dfbd8;
        case 0x2dfbdcu: goto label_2dfbdc;
        case 0x2dfbe0u: goto label_2dfbe0;
        case 0x2dfbe4u: goto label_2dfbe4;
        case 0x2dfbe8u: goto label_2dfbe8;
        case 0x2dfbecu: goto label_2dfbec;
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfbf4u: goto label_2dfbf4;
        case 0x2dfbf8u: goto label_2dfbf8;
        case 0x2dfbfcu: goto label_2dfbfc;
        case 0x2dfc00u: goto label_2dfc00;
        case 0x2dfc04u: goto label_2dfc04;
        case 0x2dfc08u: goto label_2dfc08;
        case 0x2dfc0cu: goto label_2dfc0c;
        case 0x2dfc10u: goto label_2dfc10;
        case 0x2dfc14u: goto label_2dfc14;
        case 0x2dfc18u: goto label_2dfc18;
        case 0x2dfc1cu: goto label_2dfc1c;
        case 0x2dfc20u: goto label_2dfc20;
        case 0x2dfc24u: goto label_2dfc24;
        case 0x2dfc28u: goto label_2dfc28;
        case 0x2dfc2cu: goto label_2dfc2c;
        case 0x2dfc30u: goto label_2dfc30;
        case 0x2dfc34u: goto label_2dfc34;
        case 0x2dfc38u: goto label_2dfc38;
        case 0x2dfc3cu: goto label_2dfc3c;
        case 0x2dfc40u: goto label_2dfc40;
        case 0x2dfc44u: goto label_2dfc44;
        case 0x2dfc48u: goto label_2dfc48;
        case 0x2dfc4cu: goto label_2dfc4c;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc54u: goto label_2dfc54;
        case 0x2dfc58u: goto label_2dfc58;
        case 0x2dfc5cu: goto label_2dfc5c;
        case 0x2dfc60u: goto label_2dfc60;
        case 0x2dfc64u: goto label_2dfc64;
        case 0x2dfc68u: goto label_2dfc68;
        case 0x2dfc6cu: goto label_2dfc6c;
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfc78u: goto label_2dfc78;
        case 0x2dfc7cu: goto label_2dfc7c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfc84u: goto label_2dfc84;
        case 0x2dfc88u: goto label_2dfc88;
        case 0x2dfc8cu: goto label_2dfc8c;
        case 0x2dfc90u: goto label_2dfc90;
        case 0x2dfc94u: goto label_2dfc94;
        case 0x2dfc98u: goto label_2dfc98;
        case 0x2dfc9cu: goto label_2dfc9c;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfca4u: goto label_2dfca4;
        case 0x2dfca8u: goto label_2dfca8;
        case 0x2dfcacu: goto label_2dfcac;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcb4u: goto label_2dfcb4;
        case 0x2dfcb8u: goto label_2dfcb8;
        case 0x2dfcbcu: goto label_2dfcbc;
        case 0x2dfcc0u: goto label_2dfcc0;
        case 0x2dfcc4u: goto label_2dfcc4;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcccu: goto label_2dfccc;
        case 0x2dfcd0u: goto label_2dfcd0;
        case 0x2dfcd4u: goto label_2dfcd4;
        case 0x2dfcd8u: goto label_2dfcd8;
        case 0x2dfcdcu: goto label_2dfcdc;
        case 0x2dfce0u: goto label_2dfce0;
        case 0x2dfce4u: goto label_2dfce4;
        case 0x2dfce8u: goto label_2dfce8;
        case 0x2dfcecu: goto label_2dfcec;
        case 0x2dfcf0u: goto label_2dfcf0;
        case 0x2dfcf4u: goto label_2dfcf4;
        case 0x2dfcf8u: goto label_2dfcf8;
        case 0x2dfcfcu: goto label_2dfcfc;
        case 0x2dfd00u: goto label_2dfd00;
        case 0x2dfd04u: goto label_2dfd04;
        case 0x2dfd08u: goto label_2dfd08;
        case 0x2dfd0cu: goto label_2dfd0c;
        case 0x2dfd10u: goto label_2dfd10;
        case 0x2dfd14u: goto label_2dfd14;
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfd1cu: goto label_2dfd1c;
        case 0x2dfd20u: goto label_2dfd20;
        case 0x2dfd24u: goto label_2dfd24;
        case 0x2dfd28u: goto label_2dfd28;
        case 0x2dfd2cu: goto label_2dfd2c;
        case 0x2dfd30u: goto label_2dfd30;
        case 0x2dfd34u: goto label_2dfd34;
        case 0x2dfd38u: goto label_2dfd38;
        case 0x2dfd3cu: goto label_2dfd3c;
        case 0x2dfd40u: goto label_2dfd40;
        case 0x2dfd44u: goto label_2dfd44;
        case 0x2dfd48u: goto label_2dfd48;
        case 0x2dfd4cu: goto label_2dfd4c;
        case 0x2dfd50u: goto label_2dfd50;
        case 0x2dfd54u: goto label_2dfd54;
        case 0x2dfd58u: goto label_2dfd58;
        case 0x2dfd5cu: goto label_2dfd5c;
        case 0x2dfd60u: goto label_2dfd60;
        case 0x2dfd64u: goto label_2dfd64;
        case 0x2dfd68u: goto label_2dfd68;
        case 0x2dfd6cu: goto label_2dfd6c;
        case 0x2dfd70u: goto label_2dfd70;
        case 0x2dfd74u: goto label_2dfd74;
        case 0x2dfd78u: goto label_2dfd78;
        case 0x2dfd7cu: goto label_2dfd7c;
        case 0x2dfd80u: goto label_2dfd80;
        case 0x2dfd84u: goto label_2dfd84;
        case 0x2dfd88u: goto label_2dfd88;
        case 0x2dfd8cu: goto label_2dfd8c;
        case 0x2dfd90u: goto label_2dfd90;
        case 0x2dfd94u: goto label_2dfd94;
        case 0x2dfd98u: goto label_2dfd98;
        case 0x2dfd9cu: goto label_2dfd9c;
        case 0x2dfda0u: goto label_2dfda0;
        case 0x2dfda4u: goto label_2dfda4;
        case 0x2dfda8u: goto label_2dfda8;
        case 0x2dfdacu: goto label_2dfdac;
        case 0x2dfdb0u: goto label_2dfdb0;
        case 0x2dfdb4u: goto label_2dfdb4;
        case 0x2dfdb8u: goto label_2dfdb8;
        case 0x2dfdbcu: goto label_2dfdbc;
        case 0x2dfdc0u: goto label_2dfdc0;
        case 0x2dfdc4u: goto label_2dfdc4;
        case 0x2dfdc8u: goto label_2dfdc8;
        case 0x2dfdccu: goto label_2dfdcc;
        case 0x2dfdd0u: goto label_2dfdd0;
        case 0x2dfdd4u: goto label_2dfdd4;
        case 0x2dfdd8u: goto label_2dfdd8;
        case 0x2dfddcu: goto label_2dfddc;
        case 0x2dfde0u: goto label_2dfde0;
        case 0x2dfde4u: goto label_2dfde4;
        case 0x2dfde8u: goto label_2dfde8;
        case 0x2dfdecu: goto label_2dfdec;
        case 0x2dfdf0u: goto label_2dfdf0;
        case 0x2dfdf4u: goto label_2dfdf4;
        case 0x2dfdf8u: goto label_2dfdf8;
        case 0x2dfdfcu: goto label_2dfdfc;
        case 0x2dfe00u: goto label_2dfe00;
        case 0x2dfe04u: goto label_2dfe04;
        case 0x2dfe08u: goto label_2dfe08;
        case 0x2dfe0cu: goto label_2dfe0c;
        case 0x2dfe10u: goto label_2dfe10;
        case 0x2dfe14u: goto label_2dfe14;
        case 0x2dfe18u: goto label_2dfe18;
        case 0x2dfe1cu: goto label_2dfe1c;
        case 0x2dfe20u: goto label_2dfe20;
        case 0x2dfe24u: goto label_2dfe24;
        case 0x2dfe28u: goto label_2dfe28;
        case 0x2dfe2cu: goto label_2dfe2c;
        case 0x2dfe30u: goto label_2dfe30;
        case 0x2dfe34u: goto label_2dfe34;
        case 0x2dfe38u: goto label_2dfe38;
        case 0x2dfe3cu: goto label_2dfe3c;
        case 0x2dfe40u: goto label_2dfe40;
        case 0x2dfe44u: goto label_2dfe44;
        case 0x2dfe48u: goto label_2dfe48;
        case 0x2dfe4cu: goto label_2dfe4c;
        case 0x2dfe50u: goto label_2dfe50;
        case 0x2dfe54u: goto label_2dfe54;
        case 0x2dfe58u: goto label_2dfe58;
        case 0x2dfe5cu: goto label_2dfe5c;
        case 0x2dfe60u: goto label_2dfe60;
        case 0x2dfe64u: goto label_2dfe64;
        case 0x2dfe68u: goto label_2dfe68;
        case 0x2dfe6cu: goto label_2dfe6c;
        case 0x2dfe70u: goto label_2dfe70;
        case 0x2dfe74u: goto label_2dfe74;
        case 0x2dfe78u: goto label_2dfe78;
        case 0x2dfe7cu: goto label_2dfe7c;
        case 0x2dfe80u: goto label_2dfe80;
        case 0x2dfe84u: goto label_2dfe84;
        case 0x2dfe88u: goto label_2dfe88;
        case 0x2dfe8cu: goto label_2dfe8c;
        case 0x2dfe90u: goto label_2dfe90;
        case 0x2dfe94u: goto label_2dfe94;
        case 0x2dfe98u: goto label_2dfe98;
        case 0x2dfe9cu: goto label_2dfe9c;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfea4u: goto label_2dfea4;
        case 0x2dfea8u: goto label_2dfea8;
        case 0x2dfeacu: goto label_2dfeac;
        case 0x2dfeb0u: goto label_2dfeb0;
        case 0x2dfeb4u: goto label_2dfeb4;
        case 0x2dfeb8u: goto label_2dfeb8;
        case 0x2dfebcu: goto label_2dfebc;
        case 0x2dfec0u: goto label_2dfec0;
        case 0x2dfec4u: goto label_2dfec4;
        case 0x2dfec8u: goto label_2dfec8;
        case 0x2dfeccu: goto label_2dfecc;
        case 0x2dfed0u: goto label_2dfed0;
        case 0x2dfed4u: goto label_2dfed4;
        case 0x2dfed8u: goto label_2dfed8;
        case 0x2dfedcu: goto label_2dfedc;
        case 0x2dfee0u: goto label_2dfee0;
        case 0x2dfee4u: goto label_2dfee4;
        case 0x2dfee8u: goto label_2dfee8;
        case 0x2dfeecu: goto label_2dfeec;
        case 0x2dfef0u: goto label_2dfef0;
        case 0x2dfef4u: goto label_2dfef4;
        case 0x2dfef8u: goto label_2dfef8;
        case 0x2dfefcu: goto label_2dfefc;
        case 0x2dff00u: goto label_2dff00;
        case 0x2dff04u: goto label_2dff04;
        case 0x2dff08u: goto label_2dff08;
        case 0x2dff0cu: goto label_2dff0c;
        case 0x2dff10u: goto label_2dff10;
        case 0x2dff14u: goto label_2dff14;
        case 0x2dff18u: goto label_2dff18;
        case 0x2dff1cu: goto label_2dff1c;
        case 0x2dff20u: goto label_2dff20;
        case 0x2dff24u: goto label_2dff24;
        case 0x2dff28u: goto label_2dff28;
        case 0x2dff2cu: goto label_2dff2c;
        case 0x2dff30u: goto label_2dff30;
        case 0x2dff34u: goto label_2dff34;
        case 0x2dff38u: goto label_2dff38;
        case 0x2dff3cu: goto label_2dff3c;
        case 0x2dff40u: goto label_2dff40;
        case 0x2dff44u: goto label_2dff44;
        case 0x2dff48u: goto label_2dff48;
        case 0x2dff4cu: goto label_2dff4c;
        case 0x2dff50u: goto label_2dff50;
        case 0x2dff54u: goto label_2dff54;
        case 0x2dff58u: goto label_2dff58;
        case 0x2dff5cu: goto label_2dff5c;
        case 0x2dff60u: goto label_2dff60;
        case 0x2dff64u: goto label_2dff64;
        case 0x2dff68u: goto label_2dff68;
        case 0x2dff6cu: goto label_2dff6c;
        case 0x2dff70u: goto label_2dff70;
        case 0x2dff74u: goto label_2dff74;
        case 0x2dff78u: goto label_2dff78;
        case 0x2dff7cu: goto label_2dff7c;
        case 0x2dff80u: goto label_2dff80;
        case 0x2dff84u: goto label_2dff84;
        case 0x2dff88u: goto label_2dff88;
        case 0x2dff8cu: goto label_2dff8c;
        case 0x2dff90u: goto label_2dff90;
        case 0x2dff94u: goto label_2dff94;
        case 0x2dff98u: goto label_2dff98;
        case 0x2dff9cu: goto label_2dff9c;
        case 0x2dffa0u: goto label_2dffa0;
        case 0x2dffa4u: goto label_2dffa4;
        case 0x2dffa8u: goto label_2dffa8;
        case 0x2dffacu: goto label_2dffac;
        case 0x2dffb0u: goto label_2dffb0;
        case 0x2dffb4u: goto label_2dffb4;
        case 0x2dffb8u: goto label_2dffb8;
        case 0x2dffbcu: goto label_2dffbc;
        case 0x2dffc0u: goto label_2dffc0;
        default: break;
    }

    ctx->pc = 0x2dfa00u;

label_2dfa00:
    // 0x2dfa00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dfa04:
    // 0x2dfa04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dfa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_2dfa08:
    // 0x2dfa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dfa0c:
    // 0x2dfa0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dfa10:
    // 0x2dfa10: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2dfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2dfa14:
    // 0x2dfa14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa18:
    // 0x2dfa18: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2dfa18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2dfa1c:
    // 0x2dfa1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa20:
    // 0x2dfa20: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dfa20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dfa24:
    // 0x2dfa24: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2dfa24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dfa28:
    // 0x2dfa28: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2dfa28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2dfa2c:
    // 0x2dfa2c: 0x1020015f  beqz        $at, . + 4 + (0x15F << 2)
label_2dfa30:
    if (ctx->pc == 0x2DFA30u) {
        ctx->pc = 0x2DFA34u;
        goto label_2dfa34;
    }
    ctx->pc = 0x2DFA2Cu;
    {
        const bool branch_taken_0x2dfa2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa2c) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFA34u;
label_2dfa34:
    // 0x2dfa34: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2dfa38:
    // 0x2dfa38: 0x24641a30  addiu       $a0, $v1, 0x1A30
    ctx->pc = 0x2dfa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6704));
label_2dfa3c:
    // 0x2dfa3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2dfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2dfa40:
    // 0x2dfa40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dfa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dfa44:
    // 0x2dfa44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dfa48:
    // 0x2dfa48: 0x600008  jr          $v1
label_2dfa4c:
    if (ctx->pc == 0x2DFA4Cu) {
        ctx->pc = 0x2DFA50u;
        goto label_2dfa50;
    }
    ctx->pc = 0x2DFA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFA48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DFA50u;
label_2dfa50:
    // 0x2dfa50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa54:
    // 0x2dfa54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa58:
    // 0x2dfa58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dfa5c:
    // 0x2dfa5c: 0x24060a30  addiu       $a2, $zero, 0xA30
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2608));
label_2dfa60:
    // 0x2dfa60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfa64:
    // 0x2dfa64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dfa68:
    // 0x2dfa68: 0xc0965d0  jal         func_259740
label_2dfa6c:
    if (ctx->pc == 0x2DFA6Cu) {
        ctx->pc = 0x2DFA70u;
        goto label_2dfa70;
    }
    ctx->pc = 0x2DFA68u;
    SET_GPR_U32(ctx, 31, 0x2DFA70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DFA68u, 0x2DFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA70u;
label_2dfa70:
    // 0x2dfa70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa74:
    // 0x2dfa74: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2dfa78:
    // 0x2dfa78: 0xc057a80  jal         func_15EA00
label_2dfa7c:
    if (ctx->pc == 0x2DFA7Cu) {
        ctx->pc = 0x2DFA80u;
        goto label_2dfa80;
    }
    ctx->pc = 0x2DFA78u;
    SET_GPR_U32(ctx, 31, 0x2DFA80u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DFA78u, 0x2DFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA80u;
label_2dfa80:
    // 0x2dfa80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfa84:
    // 0x2dfa84: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2dfa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfa88:
    // 0x2dfa88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfa88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dfa8c:
    // 0x2dfa8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2dfa90:
    // 0x2dfa90: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2dfa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfa94:
    // 0x2dfa94: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_2dfa98:
    // 0x2dfa98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2dfa9c:
    // 0x2dfa9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfaa0:
    // 0x2dfaa0: 0x0  nop
    ctx->pc = 0x2dfaa0u;
    // NOP
label_2dfaa4:
    // 0x2dfaa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfaa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfaa8:
    // 0x2dfaa8: 0x0  nop
    ctx->pc = 0x2dfaa8u;
    // NOP
label_2dfaac:
    // 0x2dfaac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2dfab0:
    if (ctx->pc == 0x2DFAB0u) {
        ctx->pc = 0x2DFAB4u;
        goto label_2dfab4;
    }
    ctx->pc = 0x2DFAACu;
    {
        const bool branch_taken_0x2dfaac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfaac) {
            ctx->pc = 0x2DFAC8u;
            goto label_2dfac8;
        }
    }
    ctx->pc = 0x2DFAB4u;
label_2dfab4:
    // 0x2dfab4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_2dfab8:
    // 0x2dfab8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2dfabc:
    // 0x2dfabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfac0:
    // 0x2dfac0: 0x0  nop
    ctx->pc = 0x2dfac0u;
    // NOP
label_2dfac4:
    // 0x2dfac4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2dfac8:
    // 0x2dfac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2dfacc:
    // 0x2dfacc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dfad0:
    // 0x2dfad0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfad4:
    // 0x2dfad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dfad8:
    // 0x2dfad8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2dfadc:
    // 0x2dfadc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2dfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2dfae0:
    // 0x2dfae0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2dfae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2dfae4:
    // 0x2dfae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dfae8:
    // 0x2dfae8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfaec:
    // 0x2dfaec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2dfaecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dfaf0:
    // 0x2dfaf0: 0xc045630  jal         func_1158C0
label_2dfaf4:
    if (ctx->pc == 0x2DFAF4u) {
        ctx->pc = 0x2DFAF8u;
        goto label_2dfaf8;
    }
    ctx->pc = 0x2DFAF0u;
    SET_GPR_U32(ctx, 31, 0x2DFAF8u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2DFAF0u, 0x2DFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAF8u;
label_2dfaf8:
    // 0x2dfaf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2dfafc:
    // 0x2dfafc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2dfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2dfb00:
    // 0x2dfb00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dfb04:
    // 0x2dfb04: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfb08:
    // 0x2dfb08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dfb0c:
    // 0x2dfb0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb10:
    // 0x2dfb10: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dfb14:
    // 0x2dfb14: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2dfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2dfb18:
    // 0x2dfb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfb1c:
    // 0x2dfb1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb20:
    // 0x2dfb20: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dfb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2dfb24:
    // 0x2dfb24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb28:
    // 0x2dfb28: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dfb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dfb2c:
    // 0x2dfb2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dfb30:
    // 0x2dfb30: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dfb30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dfb34:
    // 0x2dfb34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb38:
    // 0x2dfb38: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x2dfb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_2dfb3c:
    // 0x2dfb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dfb40:
    // 0x2dfb40: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2dfb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2dfb44:
    // 0x2dfb44: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2dfb48:
    if (ctx->pc == 0x2DFB48u) {
        ctx->pc = 0x2DFB4Cu;
        goto label_2dfb4c;
    }
    ctx->pc = 0x2DFB44u;
    {
        const bool branch_taken_0x2dfb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfb44) {
            ctx->pc = 0x2DFBE0u;
            goto label_2dfbe0;
        }
    }
    ctx->pc = 0x2DFB4Cu;
label_2dfb4c:
    // 0x2dfb4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb50:
    // 0x2dfb50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dfb54:
    // 0x2dfb54: 0xc096b40  jal         func_25AD00
label_2dfb58:
    if (ctx->pc == 0x2DFB58u) {
        ctx->pc = 0x2DFB5Cu;
        goto label_2dfb5c;
    }
    ctx->pc = 0x2DFB54u;
    SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFB54u, 0x2DFB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb60:
    // 0x2dfb60: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2dfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_2dfb64:
    // 0x2dfb64: 0xc0675a4  jal         func_19D690
label_2dfb68:
    if (ctx->pc == 0x2DFB68u) {
        ctx->pc = 0x2DFB6Cu;
        goto label_2dfb6c;
    }
    ctx->pc = 0x2DFB64u;
    SET_GPR_U32(ctx, 31, 0x2DFB6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DFB64u, 0x2DFB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB6Cu;
label_2dfb6c:
    // 0x2dfb6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb70:
    // 0x2dfb70: 0xc05cd10  jal         func_173440
label_2dfb74:
    if (ctx->pc == 0x2DFB74u) {
        ctx->pc = 0x2DFB78u;
        goto label_2dfb78;
    }
    ctx->pc = 0x2DFB70u;
    SET_GPR_U32(ctx, 31, 0x2DFB78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DFB70u, 0x2DFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB78u;
label_2dfb78:
    // 0x2dfb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb7c:
    // 0x2dfb7c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfb80:
    // 0x2dfb80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfb80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfb84:
    // 0x2dfb84: 0x0  nop
    ctx->pc = 0x2dfb84u;
    // NOP
label_2dfb88:
    // 0x2dfb88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfb8c:
    // 0x2dfb8c: 0x0  nop
    ctx->pc = 0x2dfb8cu;
    // NOP
label_2dfb90:
    // 0x2dfb90: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2dfb94:
    if (ctx->pc == 0x2DFB94u) {
        ctx->pc = 0x2DFB98u;
        goto label_2dfb98;
    }
    ctx->pc = 0x2DFB90u;
    {
        const bool branch_taken_0x2dfb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfb90) {
            ctx->pc = 0x2DFBC8u;
            goto label_2dfbc8;
        }
    }
    ctx->pc = 0x2DFB98u;
label_2dfb98:
    // 0x2dfb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfb9c:
    // 0x2dfb9c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfba0:
    // 0x2dfba0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfba4:
    // 0x2dfba4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfba8:
    // 0x2dfba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dfbac:
    // 0x2dfbac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2dfbb0:
    // 0x2dfbb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfbb4:
    // 0x2dfbb4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfbb8:
    // 0x2dfbb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfbbc:
    // 0x2dfbbc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfbc0:
    // 0x2dfbc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dfbc4:
    // 0x2dfbc4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dfbc8:
    // 0x2dfbc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfbcc:
    // 0x2dfbcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dfbd0:
    // 0x2dfbd0: 0xc05cec4  jal         func_173B10
label_2dfbd4:
    if (ctx->pc == 0x2DFBD4u) {
        ctx->pc = 0x2DFBD8u;
        goto label_2dfbd8;
    }
    ctx->pc = 0x2DFBD0u;
    SET_GPR_U32(ctx, 31, 0x2DFBD8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFBD0u, 0x2DFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBD8u;
label_2dfbd8:
    // 0x2dfbd8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2dfbdc:
    if (ctx->pc == 0x2DFBDCu) {
        ctx->pc = 0x2DFBE0u;
        goto label_2dfbe0;
    }
    ctx->pc = 0x2DFBD8u;
    {
        const bool branch_taken_0x2dfbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfbd8) {
            ctx->pc = 0x2DFC0Cu;
            goto label_2dfc0c;
        }
    }
    ctx->pc = 0x2DFBE0u;
label_2dfbe0:
    // 0x2dfbe0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfbe4:
    // 0x2dfbe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfbe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dfbe8:
    // 0x2dfbe8: 0xc096b40  jal         func_25AD00
label_2dfbec:
    if (ctx->pc == 0x2DFBECu) {
        ctx->pc = 0x2DFBF0u;
        goto label_2dfbf0;
    }
    ctx->pc = 0x2DFBE8u;
    SET_GPR_U32(ctx, 31, 0x2DFBF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFBE8u, 0x2DFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBF0u;
label_2dfbf0:
    // 0x2dfbf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfbf4:
    // 0x2dfbf4: 0xc05cd10  jal         func_173440
label_2dfbf8:
    if (ctx->pc == 0x2DFBF8u) {
        ctx->pc = 0x2DFBFCu;
        goto label_2dfbfc;
    }
    ctx->pc = 0x2DFBF4u;
    SET_GPR_U32(ctx, 31, 0x2DFBFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DFBF4u, 0x2DFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBFCu;
label_2dfbfc:
    // 0x2dfbfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc00:
    // 0x2dfc00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfc00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dfc04:
    // 0x2dfc04: 0xc05cec4  jal         func_173B10
label_2dfc08:
    if (ctx->pc == 0x2DFC08u) {
        ctx->pc = 0x2DFC0Cu;
        goto label_2dfc0c;
    }
    ctx->pc = 0x2DFC04u;
    SET_GPR_U32(ctx, 31, 0x2DFC0Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFC04u, 0x2DFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC0Cu;
label_2dfc0c:
    // 0x2dfc0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc10:
    // 0x2dfc10: 0xc0974dc  jal         func_25D370
label_2dfc14:
    if (ctx->pc == 0x2DFC14u) {
        ctx->pc = 0x2DFC18u;
        goto label_2dfc18;
    }
    ctx->pc = 0x2DFC10u;
    SET_GPR_U32(ctx, 31, 0x2DFC18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFC10u, 0x2DFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC18u;
label_2dfc18:
    // 0x2dfc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc1c:
    // 0x2dfc1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2dfc20:
    // 0x2dfc20: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
label_2dfc24:
    if (ctx->pc == 0x2DFC24u) {
        ctx->pc = 0x2DFC28u;
        goto label_2dfc28;
    }
    ctx->pc = 0x2DFC20u;
    {
        const bool branch_taken_0x2dfc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc20) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFC28u;
label_2dfc28:
    // 0x2dfc28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc2c:
    // 0x2dfc2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dfc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2dfc30:
    // 0x2dfc30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dfc34:
    // 0x2dfc34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dfc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2dfc38:
    // 0x2dfc38: 0x100000dc  b           . + 4 + (0xDC << 2)
label_2dfc3c:
    if (ctx->pc == 0x2DFC3Cu) {
        ctx->pc = 0x2DFC40u;
        goto label_2dfc40;
    }
    ctx->pc = 0x2DFC38u;
    {
        const bool branch_taken_0x2dfc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc38) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFC40u;
label_2dfc40:
    // 0x2dfc40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc44:
    // 0x2dfc44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc48:
    // 0x2dfc48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dfc4c:
    // 0x2dfc4c: 0x24060531  addiu       $a2, $zero, 0x531
    ctx->pc = 0x2dfc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
label_2dfc50:
    // 0x2dfc50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfc54:
    // 0x2dfc54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dfc58:
    // 0x2dfc58: 0xc0965d0  jal         func_259740
label_2dfc5c:
    if (ctx->pc == 0x2DFC5Cu) {
        ctx->pc = 0x2DFC60u;
        goto label_2dfc60;
    }
    ctx->pc = 0x2DFC58u;
    SET_GPR_U32(ctx, 31, 0x2DFC60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DFC58u, 0x2DFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC60u;
label_2dfc60:
    // 0x2dfc60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc64:
    // 0x2dfc64: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2dfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_2dfc68:
    // 0x2dfc68: 0xc0675a4  jal         func_19D690
label_2dfc6c:
    if (ctx->pc == 0x2DFC6Cu) {
        ctx->pc = 0x2DFC70u;
        goto label_2dfc70;
    }
    ctx->pc = 0x2DFC68u;
    SET_GPR_U32(ctx, 31, 0x2DFC70u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DFC68u, 0x2DFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC70u;
label_2dfc70:
    // 0x2dfc70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc74:
    // 0x2dfc74: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dfc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dfc78:
    // 0x2dfc78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dfc7c:
    // 0x2dfc7c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dfc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dfc80:
    // 0x2dfc80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc84:
    // 0x2dfc84: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2dfc88:
    // 0x2dfc88: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2dfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2dfc8c:
    // 0x2dfc8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dfc90:
    // 0x2dfc90: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2dfc94:
    // 0x2dfc94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfc98:
    // 0x2dfc98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2dfc9c:
    // 0x2dfc9c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2dfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2dfca0:
    // 0x2dfca0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dfca4:
    // 0x2dfca4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2dfca8:
    // 0x2dfca8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfcac:
    // 0x2dfcac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dfcb0:
    // 0x2dfcb0: 0xc096b40  jal         func_25AD00
label_2dfcb4:
    if (ctx->pc == 0x2DFCB4u) {
        ctx->pc = 0x2DFCB8u;
        goto label_2dfcb8;
    }
    ctx->pc = 0x2DFCB0u;
    SET_GPR_U32(ctx, 31, 0x2DFCB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFCB0u, 0x2DFCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCB8u;
label_2dfcb8:
    // 0x2dfcb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfcbc:
    // 0x2dfcbc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfcc0:
    // 0x2dfcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfcc4:
    // 0x2dfcc4: 0x0  nop
    ctx->pc = 0x2dfcc4u;
    // NOP
label_2dfcc8:
    // 0x2dfcc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfccc:
    // 0x2dfccc: 0x0  nop
    ctx->pc = 0x2dfcccu;
    // NOP
label_2dfcd0:
    // 0x2dfcd0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2dfcd4:
    if (ctx->pc == 0x2DFCD4u) {
        ctx->pc = 0x2DFCD8u;
        goto label_2dfcd8;
    }
    ctx->pc = 0x2DFCD0u;
    {
        const bool branch_taken_0x2dfcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfcd0) {
            ctx->pc = 0x2DFD08u;
            goto label_2dfd08;
        }
    }
    ctx->pc = 0x2DFCD8u;
label_2dfcd8:
    // 0x2dfcd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfcdc:
    // 0x2dfcdc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfce0:
    // 0x2dfce0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfce4:
    // 0x2dfce4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfce8:
    // 0x2dfce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dfcec:
    // 0x2dfcec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2dfcf0:
    // 0x2dfcf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfcf4:
    // 0x2dfcf4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfcf8:
    // 0x2dfcf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfcfc:
    // 0x2dfcfc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfd00:
    // 0x2dfd00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfd00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dfd04:
    // 0x2dfd04: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dfd08:
    // 0x2dfd08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd0c:
    // 0x2dfd0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dfd10:
    // 0x2dfd10: 0xc05cec4  jal         func_173B10
label_2dfd14:
    if (ctx->pc == 0x2DFD14u) {
        ctx->pc = 0x2DFD18u;
        goto label_2dfd18;
    }
    ctx->pc = 0x2DFD10u;
    SET_GPR_U32(ctx, 31, 0x2DFD18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFD10u, 0x2DFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD18u;
label_2dfd18:
    // 0x2dfd18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd1c:
    // 0x2dfd1c: 0xc0974dc  jal         func_25D370
label_2dfd20:
    if (ctx->pc == 0x2DFD20u) {
        ctx->pc = 0x2DFD24u;
        goto label_2dfd24;
    }
    ctx->pc = 0x2DFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFD1Cu, 0x2DFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD24u;
label_2dfd24:
    // 0x2dfd24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd28:
    // 0x2dfd28: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x2dfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfd2c:
    // 0x2dfd2c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2dfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2dfd30:
    // 0x2dfd30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dfd30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfd34:
    // 0x2dfd34: 0x0  nop
    ctx->pc = 0x2dfd34u;
    // NOP
label_2dfd38:
    // 0x2dfd38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfd38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfd3c:
    // 0x2dfd3c: 0x0  nop
    ctx->pc = 0x2dfd3cu;
    // NOP
label_2dfd40:
    // 0x2dfd40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2dfd44:
    if (ctx->pc == 0x2DFD44u) {
        ctx->pc = 0x2DFD48u;
        goto label_2dfd48;
    }
    ctx->pc = 0x2DFD40u;
    {
        const bool branch_taken_0x2dfd40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfd40) {
            ctx->pc = 0x2DFD68u;
            goto label_2dfd68;
        }
    }
    ctx->pc = 0x2DFD48u;
label_2dfd48:
    // 0x2dfd48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd4c:
    // 0x2dfd4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfd4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2dfd50:
    // 0x2dfd50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2dfd54:
    if (ctx->pc == 0x2DFD54u) {
        ctx->pc = 0x2DFD58u;
        goto label_2dfd58;
    }
    ctx->pc = 0x2DFD50u;
    {
        const bool branch_taken_0x2dfd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd50) {
            ctx->pc = 0x2DFD68u;
            goto label_2dfd68;
        }
    }
    ctx->pc = 0x2DFD58u;
label_2dfd58:
    // 0x2dfd58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd5c:
    // 0x2dfd5c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dfd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2dfd60:
    // 0x2dfd60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dfd64:
    // 0x2dfd64: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dfd64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2dfd68:
    // 0x2dfd68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd6c:
    // 0x2dfd6c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_2dfd70:
    // 0x2dfd70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2dfd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2dfd74:
    // 0x2dfd74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2dfd74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2dfd78:
    // 0x2dfd78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dfd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2dfd7c:
    // 0x2dfd7c: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_2dfd80:
    if (ctx->pc == 0x2DFD80u) {
        ctx->pc = 0x2DFD84u;
        goto label_2dfd84;
    }
    ctx->pc = 0x2DFD7Cu;
    {
        const bool branch_taken_0x2dfd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd7c) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFD84u;
label_2dfd84:
    // 0x2dfd84: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_2dfd88:
    // 0x2dfd88: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2dfd8c:
    // 0x2dfd8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dfd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dfd90:
    // 0x2dfd90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfd94:
    // 0x2dfd94: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2dfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2dfd98:
    // 0x2dfd98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2dfd9c:
    // 0x2dfd9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dfd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dfda0:
    // 0x2dfda0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dfda4:
    // 0x2dfda4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dfda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dfda8:
    // 0x2dfda8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2dfda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dfdac:
    // 0x2dfdac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dfdb0:
    // 0x2dfdb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x2dfdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2dfdb4:
    // 0x2dfdb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dfdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dfdb8:
    // 0x2dfdb8: 0xc086488  jal         func_219220
label_2dfdbc:
    if (ctx->pc == 0x2DFDBCu) {
        ctx->pc = 0x2DFDC0u;
        goto label_2dfdc0;
    }
    ctx->pc = 0x2DFDB8u;
    SET_GPR_U32(ctx, 31, 0x2DFDC0u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2DFDB8u, 0x2DFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDC0u;
label_2dfdc0:
    // 0x2dfdc0: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2dfdc4:
    if (ctx->pc == 0x2DFDC4u) {
        ctx->pc = 0x2DFDC8u;
        goto label_2dfdc8;
    }
    ctx->pc = 0x2DFDC0u;
    {
        const bool branch_taken_0x2dfdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfdc0) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFDC8u;
label_2dfdc8:
    // 0x2dfdc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfdcc:
    // 0x2dfdcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfdd0:
    // 0x2dfdd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dfdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dfdd4:
    // 0x2dfdd4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2dfdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2dfdd8:
    // 0x2dfdd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfddc:
    // 0x2dfddc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dfddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dfde0:
    // 0x2dfde0: 0xc0965d0  jal         func_259740
label_2dfde4:
    if (ctx->pc == 0x2DFDE4u) {
        ctx->pc = 0x2DFDE8u;
        goto label_2dfde8;
    }
    ctx->pc = 0x2DFDE0u;
    SET_GPR_U32(ctx, 31, 0x2DFDE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DFDE0u, 0x2DFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDE8u;
label_2dfde8:
    // 0x2dfde8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfdec:
    // 0x2dfdec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dfdecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dfdf0:
    // 0x2dfdf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dfdf4:
    // 0x2dfdf4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dfdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dfdf8:
    // 0x2dfdf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfdfc:
    // 0x2dfdfc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2dfe00:
    // 0x2dfe00: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2dfe04:
    // 0x2dfe04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dfe08:
    // 0x2dfe08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2dfe0c:
    // 0x2dfe0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe10:
    // 0x2dfe10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2dfe14:
    // 0x2dfe14: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2dfe18:
    // 0x2dfe18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dfe1c:
    // 0x2dfe1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2dfe20:
    // 0x2dfe20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe24:
    // 0x2dfe24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dfe24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_2dfe28:
    // 0x2dfe28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dfe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dfe2c:
    // 0x2dfe2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2dfe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2dfe30:
    // 0x2dfe30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dfe34:
    if (ctx->pc == 0x2DFE34u) {
        ctx->pc = 0x2DFE38u;
        goto label_2dfe38;
    }
    ctx->pc = 0x2DFE30u;
    {
        const bool branch_taken_0x2dfe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe30) {
            ctx->pc = 0x2DFE4Cu;
            goto label_2dfe4c;
        }
    }
    ctx->pc = 0x2DFE38u;
label_2dfe38:
    // 0x2dfe38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2dfe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2dfe3c:
    // 0x2dfe3c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x2dfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_2dfe40:
    // 0x2dfe40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2dfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2dfe44:
    // 0x2dfe44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2dfe48:
    // 0x2dfe48: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x2dfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_2dfe4c:
    // 0x2dfe4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe50:
    // 0x2dfe50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dfe54:
    // 0x2dfe54: 0xc096b40  jal         func_25AD00
label_2dfe58:
    if (ctx->pc == 0x2DFE58u) {
        ctx->pc = 0x2DFE5Cu;
        goto label_2dfe5c;
    }
    ctx->pc = 0x2DFE54u;
    SET_GPR_U32(ctx, 31, 0x2DFE5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFE54u, 0x2DFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE5Cu;
label_2dfe5c:
    // 0x2dfe5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe60:
    // 0x2dfe60: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfe64:
    // 0x2dfe64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfe64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfe68:
    // 0x2dfe68: 0x0  nop
    ctx->pc = 0x2dfe68u;
    // NOP
label_2dfe6c:
    // 0x2dfe6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfe6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfe70:
    // 0x2dfe70: 0x0  nop
    ctx->pc = 0x2dfe70u;
    // NOP
label_2dfe74:
    // 0x2dfe74: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2dfe78:
    if (ctx->pc == 0x2DFE78u) {
        ctx->pc = 0x2DFE7Cu;
        goto label_2dfe7c;
    }
    ctx->pc = 0x2DFE74u;
    {
        const bool branch_taken_0x2dfe74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfe74) {
            ctx->pc = 0x2DFEACu;
            goto label_2dfeac;
        }
    }
    ctx->pc = 0x2DFE7Cu;
label_2dfe7c:
    // 0x2dfe7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe80:
    // 0x2dfe80: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfe84:
    // 0x2dfe84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe88:
    // 0x2dfe88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfe8c:
    // 0x2dfe8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfe8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dfe90:
    // 0x2dfe90: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2dfe94:
    // 0x2dfe94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfe98:
    // 0x2dfe98: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfe9c:
    // 0x2dfe9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfea0:
    // 0x2dfea0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfea4:
    // 0x2dfea4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dfea8:
    // 0x2dfea8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dfeac:
    // 0x2dfeac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfeb0:
    // 0x2dfeb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dfeb4:
    // 0x2dfeb4: 0xc05cec4  jal         func_173B10
label_2dfeb8:
    if (ctx->pc == 0x2DFEB8u) {
        ctx->pc = 0x2DFEBCu;
        goto label_2dfebc;
    }
    ctx->pc = 0x2DFEB4u;
    SET_GPR_U32(ctx, 31, 0x2DFEBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFEB4u, 0x2DFEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEBCu;
label_2dfebc:
    // 0x2dfebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfec0:
    // 0x2dfec0: 0xc0974dc  jal         func_25D370
label_2dfec4:
    if (ctx->pc == 0x2DFEC4u) {
        ctx->pc = 0x2DFEC8u;
        goto label_2dfec8;
    }
    ctx->pc = 0x2DFEC0u;
    SET_GPR_U32(ctx, 31, 0x2DFEC8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFEC0u, 0x2DFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEC8u;
label_2dfec8:
    // 0x2dfec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfecc:
    // 0x2dfecc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dfeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2dfed0:
    // 0x2dfed0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dfed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dfed4:
    // 0x2dfed4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dfed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2dfed8:
    // 0x2dfed8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2dfedc:
    if (ctx->pc == 0x2DFEDCu) {
        ctx->pc = 0x2DFEE0u;
        goto label_2dfee0;
    }
    ctx->pc = 0x2DFED8u;
    {
        const bool branch_taken_0x2dfed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfed8) {
            ctx->pc = 0x2DFEF0u;
            goto label_2dfef0;
        }
    }
    ctx->pc = 0x2DFEE0u;
label_2dfee0:
    // 0x2dfee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfee4:
    // 0x2dfee4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2dfee8:
    // 0x2dfee8: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2dfeec:
    if (ctx->pc == 0x2DFEECu) {
        ctx->pc = 0x2DFEF0u;
        goto label_2dfef0;
    }
    ctx->pc = 0x2DFEE8u;
    {
        const bool branch_taken_0x2dfee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfee8) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFEF0u;
label_2dfef0:
    // 0x2dfef0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dfef4:
    // 0x2dfef4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2dfef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2dfef8:
    // 0x2dfef8: 0x2403fff5  addiu       $v1, $zero, -0xB
    ctx->pc = 0x2dfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
label_2dfefc:
    // 0x2dfefc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dfefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2dff00:
    // 0x2dff00: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2dff00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2dff04:
    // 0x2dff04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff08:
    // 0x2dff08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2dff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2dff0c:
    // 0x2dff0c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2dff10:
    // 0x2dff10: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dff14:
    // 0x2dff14: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2dff18:
    // 0x2dff18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2dff1c:
    // 0x2dff1c: 0x8c24efa8  lw          $a0, -0x1058($at)
    ctx->pc = 0x2dff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_2dff20:
    // 0x2dff20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff24:
    // 0x2dff24: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2dff28:
    if (ctx->pc == 0x2DFF28u) {
        ctx->pc = 0x2DFF2Cu;
        goto label_2dff2c;
    }
    ctx->pc = 0x2DFF24u;
    {
        const bool branch_taken_0x2dff24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dff24) {
            ctx->pc = 0x2DFF34u;
            goto label_2dff34;
        }
    }
    ctx->pc = 0x2DFF2Cu;
label_2dff2c:
    // 0x2dff2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2dff30:
    // 0x2dff30: 0xac30efa8  sw          $s0, -0x1058($at)
    ctx->pc = 0x2dff30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963112), GPR_U32(ctx, 16));
label_2dff34:
    // 0x2dff34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2dff38:
    // 0x2dff38: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2dff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_2dff3c:
    // 0x2dff3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2dff40:
    // 0x2dff40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dff40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2dff44:
    // 0x2dff44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2dff44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2dff48:
    // 0x2dff48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff4c:
    // 0x2dff4c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2dff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2dff50:
    // 0x2dff50: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2dff50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2dff54:
    // 0x2dff54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dff58:
    // 0x2dff58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2dff58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2dff5c:
    // 0x2dff5c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff60:
    // 0x2dff60: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x2dff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
label_2dff64:
    // 0x2dff64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2dff68:
    // 0x2dff68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dff6c:
    // 0x2dff6c: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x2dff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
label_2dff70:
    // 0x2dff70: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2dff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2dff74:
    // 0x2dff74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff78:
    // 0x2dff78: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2dff78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_2dff7c:
    // 0x2dff7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dff80:
    // 0x2dff80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff84:
    // 0x2dff84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dff84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2dff88:
    // 0x2dff88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2dff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2dff8c:
    // 0x2dff8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff90:
    // 0x2dff90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dff90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2dff94:
    // 0x2dff94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dff98:
    // 0x2dff98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dff98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2dff9c:
    // 0x2dff9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dffa0:
    // 0x2dffa0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2dffa4:
    // 0x2dffa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dffa8:
    // 0x2dffa8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dffac:
    // 0x2dffac: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dffacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dffb0:
    // 0x2dffb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dffb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dffb4:
    // 0x2dffb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dffb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dffb8:
    // 0x2dffb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2dffbc:
    // 0x2dffbc: 0x3e00008  jr          $ra
label_2dffc0:
    if (ctx->pc == 0x2DFFC0u) {
        ctx->pc = 0x2DFFC4u;
        goto label_fallthrough_0x2dffbc;
    }
    ctx->pc = 0x2DFFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dffbc:
    ctx->pc = 0x2DFFC4u;
}
