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

// Function: R106_pole_se
// Address: 0x27ca20 - 0x27ce7c
void R106_pole_se_0x27ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_pole_se_0x27ca20");
#endif

    switch (ctx->pc) {
        case 0x27ca20u: goto label_27ca20;
        case 0x27ca24u: goto label_27ca24;
        case 0x27ca28u: goto label_27ca28;
        case 0x27ca2cu: goto label_27ca2c;
        case 0x27ca30u: goto label_27ca30;
        case 0x27ca34u: goto label_27ca34;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca3cu: goto label_27ca3c;
        case 0x27ca40u: goto label_27ca40;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca48u: goto label_27ca48;
        case 0x27ca4cu: goto label_27ca4c;
        case 0x27ca50u: goto label_27ca50;
        case 0x27ca54u: goto label_27ca54;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca5cu: goto label_27ca5c;
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce74u: goto label_27ce74;
        case 0x27ce78u: goto label_27ce78;
        default: break;
    }

    ctx->pc = 0x27ca20u;

label_27ca20:
    // 0x27ca20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27ca24:
    // 0x27ca24: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_27ca28:
    // 0x27ca28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27ca2c:
    // 0x27ca2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27ca30:
    // 0x27ca30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27ca34:
    // 0x27ca34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27ca38:
    // 0x27ca38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ca3c:
    // 0x27ca3c: 0x8c32f9ec  lw          $s2, -0x614($at)
    ctx->pc = 0x27ca3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965740)));
label_27ca40:
    // 0x27ca40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_27ca44:
    // 0x27ca44: 0x8c330af0  lw          $s3, 0xAF0($at)
    ctx->pc = 0x27ca44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_27ca48:
    // 0x27ca48: 0x0  nop
    ctx->pc = 0x27ca48u;
    // NOP
label_27ca4c:
    // 0x27ca4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ca50:
    // 0x27ca50: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27ca50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27ca54:
    // 0x27ca54: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27ca54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27ca58:
    // 0x27ca58: 0x2c81000d  sltiu       $at, $a0, 0xD
    ctx->pc = 0x27ca58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_27ca5c:
    // 0x27ca5c: 0x102000f8  beqz        $at, . + 4 + (0xF8 << 2)
label_27ca60:
    if (ctx->pc == 0x27CA60u) {
        ctx->pc = 0x27CA64u;
        goto label_27ca64;
    }
    ctx->pc = 0x27CA5Cu;
    {
        const bool branch_taken_0x27ca5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca5c) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CA64u;
label_27ca64:
    // 0x27ca64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27ca68:
    // 0x27ca68: 0x244315e0  addiu       $v1, $v0, 0x15E0
    ctx->pc = 0x27ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
label_27ca6c:
    // 0x27ca6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27ca70:
    // 0x27ca70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ca74:
    // 0x27ca74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27ca78:
    // 0x27ca78: 0x400008  jr          $v0
label_27ca7c:
    if (ctx->pc == 0x27CA7Cu) {
        ctx->pc = 0x27CA80u;
        goto label_27ca80;
    }
    ctx->pc = 0x27CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CA80u;
label_27ca80:
    // 0x27ca80: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27ca80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27ca84:
    // 0x27ca84: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27ca84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27ca88:
    // 0x27ca88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ca8c:
    // 0x27ca8c: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27ca8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27ca90:
    // 0x27ca90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27ca94:
    // 0x27ca94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ca98:
    // 0x27ca98: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27ca9c:
    // 0x27ca9c: 0x0  nop
    ctx->pc = 0x27ca9cu;
    // NOP
label_27caa0:
    // 0x27caa0: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_27caa4:
    if (ctx->pc == 0x27CAA4u) {
        ctx->pc = 0x27CAA8u;
        goto label_27caa8;
    }
    ctx->pc = 0x27CAA0u;
    {
        const bool branch_taken_0x27caa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27caa0) {
            ctx->pc = 0x27CAFCu;
            goto label_27cafc;
        }
    }
    ctx->pc = 0x27CAA8u;
label_27caa8:
    // 0x27caa8: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_27caac:
    if (ctx->pc == 0x27CAACu) {
        ctx->pc = 0x27CAB0u;
        goto label_27cab0;
    }
    ctx->pc = 0x27CAA8u;
    {
        const bool branch_taken_0x27caa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27caa8) {
            ctx->pc = 0x27CAD4u;
            goto label_27cad4;
        }
    }
    ctx->pc = 0x27CAB0u;
label_27cab0:
    // 0x27cab0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cab4:
    // 0x27cab4: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x27cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
label_27cab8:
    // 0x27cab8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cabc:
    // 0x27cabc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cac0:
    // 0x27cac0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cac4:
    // 0x27cac4: 0xc067c24  jal         func_19F090
label_27cac8:
    if (ctx->pc == 0x27CAC8u) {
        ctx->pc = 0x27CACCu;
        goto label_27cacc;
    }
    ctx->pc = 0x27CAC4u;
    SET_GPR_U32(ctx, 31, 0x27CACCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CAC4u, 0x27CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CACCu;
label_27cacc:
    // 0x27cacc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27cad0:
    if (ctx->pc == 0x27CAD0u) {
        ctx->pc = 0x27CAD4u;
        goto label_27cad4;
    }
    ctx->pc = 0x27CACCu;
    {
        const bool branch_taken_0x27cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cacc) {
            ctx->pc = 0x27CAF0u;
            goto label_27caf0;
        }
    }
    ctx->pc = 0x27CAD4u;
label_27cad4:
    // 0x27cad4: 0x24040418  addiu       $a0, $zero, 0x418
    ctx->pc = 0x27cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
label_27cad8:
    // 0x27cad8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cadc:
    // 0x27cadc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cae0:
    // 0x27cae0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cae4:
    // 0x27cae4: 0xc067c24  jal         func_19F090
label_27cae8:
    if (ctx->pc == 0x27CAE8u) {
        ctx->pc = 0x27CAECu;
        goto label_27caec;
    }
    ctx->pc = 0x27CAE4u;
    SET_GPR_U32(ctx, 31, 0x27CAECu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CAE4u, 0x27CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAECu;
label_27caec:
    // 0x27caec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27caecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27caf0:
    // 0x27caf0: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27caf4:
    // 0x27caf4: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_27caf8:
    if (ctx->pc == 0x27CAF8u) {
        ctx->pc = 0x27CAFCu;
        goto label_27cafc;
    }
    ctx->pc = 0x27CAF4u;
    {
        const bool branch_taken_0x27caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27caf4) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CAFCu;
label_27cafc:
    // 0x27cafc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27cb00:
    // 0x27cb00: 0x100000cf  b           . + 4 + (0xCF << 2)
label_27cb04:
    if (ctx->pc == 0x27CB04u) {
        ctx->pc = 0x27CB08u;
        goto label_27cb08;
    }
    ctx->pc = 0x27CB00u;
    {
        const bool branch_taken_0x27cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb00) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CB08u;
label_27cb08:
    // 0x27cb08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cb08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cb0c:
    // 0x27cb0c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27cb0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cb10:
    // 0x27cb10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cb14:
    // 0x27cb14: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cb18:
    // 0x27cb18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cb1c:
    // 0x27cb1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cb20:
    // 0x27cb20: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cb20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cb24:
    // 0x27cb24: 0x0  nop
    ctx->pc = 0x27cb24u;
    // NOP
label_27cb28:
    // 0x27cb28: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_27cb2c:
    if (ctx->pc == 0x27CB2Cu) {
        ctx->pc = 0x27CB30u;
        goto label_27cb30;
    }
    ctx->pc = 0x27CB28u;
    {
        const bool branch_taken_0x27cb28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb28) {
            ctx->pc = 0x27CBE4u;
            goto label_27cbe4;
        }
    }
    ctx->pc = 0x27CB30u;
label_27cb30:
    // 0x27cb30: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
label_27cb34:
    if (ctx->pc == 0x27CB34u) {
        ctx->pc = 0x27CB38u;
        goto label_27cb38;
    }
    ctx->pc = 0x27CB30u;
    {
        const bool branch_taken_0x27cb30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb30) {
            ctx->pc = 0x27CB8Cu;
            goto label_27cb8c;
        }
    }
    ctx->pc = 0x27CB38u;
label_27cb38:
    // 0x27cb38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cb3c:
    // 0x27cb3c: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x27cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
label_27cb40:
    // 0x27cb40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cb44:
    // 0x27cb44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb48:
    // 0x27cb48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb4c:
    // 0x27cb4c: 0xc067c24  jal         func_19F090
label_27cb50:
    if (ctx->pc == 0x27CB50u) {
        ctx->pc = 0x27CB54u;
        goto label_27cb54;
    }
    ctx->pc = 0x27CB4Cu;
    SET_GPR_U32(ctx, 31, 0x27CB54u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB4Cu, 0x27CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB54u;
label_27cb54:
    // 0x27cb54: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x27cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
label_27cb58:
    // 0x27cb58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cb5c:
    // 0x27cb5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb60:
    // 0x27cb60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb64:
    // 0x27cb64: 0xc067c24  jal         func_19F090
label_27cb68:
    if (ctx->pc == 0x27CB68u) {
        ctx->pc = 0x27CB6Cu;
        goto label_27cb6c;
    }
    ctx->pc = 0x27CB64u;
    SET_GPR_U32(ctx, 31, 0x27CB6Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB64u, 0x27CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB6Cu;
label_27cb6c:
    // 0x27cb6c: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
label_27cb70:
    // 0x27cb70: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cb74:
    // 0x27cb74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb78:
    // 0x27cb78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb7c:
    // 0x27cb7c: 0xc067c24  jal         func_19F090
label_27cb80:
    if (ctx->pc == 0x27CB80u) {
        ctx->pc = 0x27CB84u;
        goto label_27cb84;
    }
    ctx->pc = 0x27CB7Cu;
    SET_GPR_U32(ctx, 31, 0x27CB84u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB7Cu, 0x27CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB84u;
label_27cb84:
    // 0x27cb84: 0x10000014  b           . + 4 + (0x14 << 2)
label_27cb88:
    if (ctx->pc == 0x27CB88u) {
        ctx->pc = 0x27CB8Cu;
        goto label_27cb8c;
    }
    ctx->pc = 0x27CB84u;
    {
        const bool branch_taken_0x27cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb84) {
            ctx->pc = 0x27CBD8u;
            goto label_27cbd8;
        }
    }
    ctx->pc = 0x27CB8Cu;
label_27cb8c:
    // 0x27cb8c: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
label_27cb90:
    // 0x27cb90: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cb94:
    // 0x27cb94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb98:
    // 0x27cb98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cb9c:
    // 0x27cb9c: 0xc067c24  jal         func_19F090
label_27cba0:
    if (ctx->pc == 0x27CBA0u) {
        ctx->pc = 0x27CBA4u;
        goto label_27cba4;
    }
    ctx->pc = 0x27CB9Cu;
    SET_GPR_U32(ctx, 31, 0x27CBA4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB9Cu, 0x27CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBA4u;
label_27cba4:
    // 0x27cba4: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_27cba8:
    // 0x27cba8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cbac:
    // 0x27cbac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cbb0:
    // 0x27cbb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cbb4:
    // 0x27cbb4: 0xc067c24  jal         func_19F090
label_27cbb8:
    if (ctx->pc == 0x27CBB8u) {
        ctx->pc = 0x27CBBCu;
        goto label_27cbbc;
    }
    ctx->pc = 0x27CBB4u;
    SET_GPR_U32(ctx, 31, 0x27CBBCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CBB4u, 0x27CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x27cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
label_27cbc0:
    // 0x27cbc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cbc4:
    // 0x27cbc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cbc8:
    // 0x27cbc8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cbcc:
    // 0x27cbcc: 0xc067c24  jal         func_19F090
label_27cbd0:
    if (ctx->pc == 0x27CBD0u) {
        ctx->pc = 0x27CBD4u;
        goto label_27cbd4;
    }
    ctx->pc = 0x27CBCCu;
    SET_GPR_U32(ctx, 31, 0x27CBD4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CBCCu, 0x27CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBD4u;
label_27cbd4:
    // 0x27cbd4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cbd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cbd8:
    // 0x27cbd8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27cbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27cbdc:
    // 0x27cbdc: 0x10000098  b           . + 4 + (0x98 << 2)
label_27cbe0:
    if (ctx->pc == 0x27CBE0u) {
        ctx->pc = 0x27CBE4u;
        goto label_27cbe4;
    }
    ctx->pc = 0x27CBDCu;
    {
        const bool branch_taken_0x27cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbdc) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CBE4u;
label_27cbe4:
    // 0x27cbe4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27cbe8:
    // 0x27cbe8: 0x10000095  b           . + 4 + (0x95 << 2)
label_27cbec:
    if (ctx->pc == 0x27CBECu) {
        ctx->pc = 0x27CBF0u;
        goto label_27cbf0;
    }
    ctx->pc = 0x27CBE8u;
    {
        const bool branch_taken_0x27cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbe8) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CBF0u;
label_27cbf0:
    // 0x27cbf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cbf4:
    // 0x27cbf4: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cbf8:
    // 0x27cbf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cbfc:
    // 0x27cbfc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cc00:
    // 0x27cc00: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cc00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cc04:
    // 0x27cc04: 0x0  nop
    ctx->pc = 0x27cc04u;
    // NOP
label_27cc08:
    // 0x27cc08: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x27cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_27cc0c:
    // 0x27cc0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cc10:
    // 0x27cc10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc14:
    // 0x27cc14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc18:
    // 0x27cc18: 0xc067c24  jal         func_19F090
label_27cc1c:
    if (ctx->pc == 0x27CC1Cu) {
        ctx->pc = 0x27CC20u;
        goto label_27cc20;
    }
    ctx->pc = 0x27CC18u;
    SET_GPR_U32(ctx, 31, 0x27CC20u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC18u, 0x27CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
label_27cc24:
    // 0x27cc24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cc28:
    // 0x27cc28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc2c:
    // 0x27cc2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc30:
    // 0x27cc30: 0xc067c24  jal         func_19F090
label_27cc34:
    if (ctx->pc == 0x27CC34u) {
        ctx->pc = 0x27CC38u;
        goto label_27cc38;
    }
    ctx->pc = 0x27CC30u;
    SET_GPR_U32(ctx, 31, 0x27CC38u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC30u, 0x27CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC38u;
label_27cc38:
    // 0x27cc38: 0x24040414  addiu       $a0, $zero, 0x414
    ctx->pc = 0x27cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_27cc3c:
    // 0x27cc3c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cc40:
    // 0x27cc40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc44:
    // 0x27cc44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cc48:
    // 0x27cc48: 0xc067c24  jal         func_19F090
label_27cc4c:
    if (ctx->pc == 0x27CC4Cu) {
        ctx->pc = 0x27CC50u;
        goto label_27cc50;
    }
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cc54:
    // 0x27cc54: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cc58:
    // 0x27cc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cc5c:
    // 0x27cc5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cc60:
    // 0x27cc60: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cc60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cc64:
    // 0x27cc64: 0x10000076  b           . + 4 + (0x76 << 2)
label_27cc68:
    if (ctx->pc == 0x27CC68u) {
        ctx->pc = 0x27CC6Cu;
        goto label_27cc6c;
    }
    ctx->pc = 0x27CC64u;
    {
        const bool branch_taken_0x27cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc64) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CC6Cu;
label_27cc6c:
    // 0x27cc6c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cc6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cc70:
    // 0x27cc70: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27cc70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cc74:
    // 0x27cc74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cc78:
    // 0x27cc78: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cc7c:
    // 0x27cc7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cc80:
    // 0x27cc80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cc84:
    // 0x27cc84: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cc84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cc88:
    // 0x27cc88: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_27cc8c:
    if (ctx->pc == 0x27CC8Cu) {
        ctx->pc = 0x27CC90u;
        goto label_27cc90;
    }
    ctx->pc = 0x27CC88u;
    {
        const bool branch_taken_0x27cc88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc88) {
            ctx->pc = 0x27CCE4u;
            goto label_27cce4;
        }
    }
    ctx->pc = 0x27CC90u;
label_27cc90:
    // 0x27cc90: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_27cc94:
    if (ctx->pc == 0x27CC94u) {
        ctx->pc = 0x27CC98u;
        goto label_27cc98;
    }
    ctx->pc = 0x27CC90u;
    {
        const bool branch_taken_0x27cc90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc90) {
            ctx->pc = 0x27CCBCu;
            goto label_27ccbc;
        }
    }
    ctx->pc = 0x27CC98u;
label_27cc98:
    // 0x27cc98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cc9c:
    // 0x27cc9c: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x27cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
label_27cca0:
    // 0x27cca0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cca4:
    // 0x27cca4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cca8:
    // 0x27cca8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ccac:
    // 0x27ccac: 0xc067c24  jal         func_19F090
label_27ccb0:
    if (ctx->pc == 0x27CCB0u) {
        ctx->pc = 0x27CCB4u;
        goto label_27ccb4;
    }
    ctx->pc = 0x27CCACu;
    SET_GPR_U32(ctx, 31, 0x27CCB4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CCACu, 0x27CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCB4u;
label_27ccb4:
    // 0x27ccb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_27ccb8:
    if (ctx->pc == 0x27CCB8u) {
        ctx->pc = 0x27CCBCu;
        goto label_27ccbc;
    }
    ctx->pc = 0x27CCB4u;
    {
        const bool branch_taken_0x27ccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccb4) {
            ctx->pc = 0x27CCD8u;
            goto label_27ccd8;
        }
    }
    ctx->pc = 0x27CCBCu;
label_27ccbc:
    // 0x27ccbc: 0x24040418  addiu       $a0, $zero, 0x418
    ctx->pc = 0x27ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
label_27ccc0:
    // 0x27ccc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27ccc4:
    // 0x27ccc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ccc8:
    // 0x27ccc8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ccc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cccc:
    // 0x27cccc: 0xc067c24  jal         func_19F090
label_27ccd0:
    if (ctx->pc == 0x27CCD0u) {
        ctx->pc = 0x27CCD4u;
        goto label_27ccd4;
    }
    ctx->pc = 0x27CCCCu;
    SET_GPR_U32(ctx, 31, 0x27CCD4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CCCCu, 0x27CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCD4u;
label_27ccd4:
    // 0x27ccd4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27ccd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27ccd8:
    // 0x27ccd8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27ccd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27ccdc:
    // 0x27ccdc: 0x10000058  b           . + 4 + (0x58 << 2)
label_27cce0:
    if (ctx->pc == 0x27CCE0u) {
        ctx->pc = 0x27CCE4u;
        goto label_27cce4;
    }
    ctx->pc = 0x27CCDCu;
    {
        const bool branch_taken_0x27ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccdc) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CCE4u;
label_27cce4:
    // 0x27cce4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27cce8:
    // 0x27cce8: 0x10000055  b           . + 4 + (0x55 << 2)
label_27ccec:
    if (ctx->pc == 0x27CCECu) {
        ctx->pc = 0x27CCF0u;
        goto label_27ccf0;
    }
    ctx->pc = 0x27CCE8u;
    {
        const bool branch_taken_0x27cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cce8) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CCF0u;
label_27ccf0:
    // 0x27ccf0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27ccf0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27ccf4:
    // 0x27ccf4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27ccf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27ccf8:
    // 0x27ccf8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ccf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ccfc:
    // 0x27ccfc: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27ccfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cd00:
    // 0x27cd00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cd04:
    // 0x27cd04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cd08:
    // 0x27cd08: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cd08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cd0c:
    // 0x27cd0c: 0x0  nop
    ctx->pc = 0x27cd0cu;
    // NOP
label_27cd10:
    // 0x27cd10: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_27cd14:
    if (ctx->pc == 0x27CD14u) {
        ctx->pc = 0x27CD18u;
        goto label_27cd18;
    }
    ctx->pc = 0x27CD10u;
    {
        const bool branch_taken_0x27cd10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cd10) {
            ctx->pc = 0x27CDCCu;
            goto label_27cdcc;
        }
    }
    ctx->pc = 0x27CD18u;
label_27cd18:
    // 0x27cd18: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
label_27cd1c:
    if (ctx->pc == 0x27CD1Cu) {
        ctx->pc = 0x27CD20u;
        goto label_27cd20;
    }
    ctx->pc = 0x27CD18u;
    {
        const bool branch_taken_0x27cd18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cd18) {
            ctx->pc = 0x27CD74u;
            goto label_27cd74;
        }
    }
    ctx->pc = 0x27CD20u;
label_27cd20:
    // 0x27cd20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd24:
    // 0x27cd24: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x27cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
label_27cd28:
    // 0x27cd28: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cd2c:
    // 0x27cd2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd30:
    // 0x27cd30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd34:
    // 0x27cd34: 0xc067c24  jal         func_19F090
label_27cd38:
    if (ctx->pc == 0x27CD38u) {
        ctx->pc = 0x27CD3Cu;
        goto label_27cd3c;
    }
    ctx->pc = 0x27CD34u;
    SET_GPR_U32(ctx, 31, 0x27CD3Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD34u, 0x27CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD3Cu;
label_27cd3c:
    // 0x27cd3c: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
label_27cd40:
    // 0x27cd40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cd44:
    // 0x27cd44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd48:
    // 0x27cd48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd4c:
    // 0x27cd4c: 0xc067c24  jal         func_19F090
label_27cd50:
    if (ctx->pc == 0x27CD50u) {
        ctx->pc = 0x27CD54u;
        goto label_27cd54;
    }
    ctx->pc = 0x27CD4Cu;
    SET_GPR_U32(ctx, 31, 0x27CD54u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD4Cu, 0x27CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD54u;
label_27cd54:
    // 0x27cd54: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x27cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
label_27cd58:
    // 0x27cd58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cd5c:
    // 0x27cd5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd60:
    // 0x27cd60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd64:
    // 0x27cd64: 0xc067c24  jal         func_19F090
label_27cd68:
    if (ctx->pc == 0x27CD68u) {
        ctx->pc = 0x27CD6Cu;
        goto label_27cd6c;
    }
    ctx->pc = 0x27CD64u;
    SET_GPR_U32(ctx, 31, 0x27CD6Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD64u, 0x27CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD6Cu;
label_27cd6c:
    // 0x27cd6c: 0x10000014  b           . + 4 + (0x14 << 2)
label_27cd70:
    if (ctx->pc == 0x27CD70u) {
        ctx->pc = 0x27CD74u;
        goto label_27cd74;
    }
    ctx->pc = 0x27CD6Cu;
    {
        const bool branch_taken_0x27cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd6c) {
            ctx->pc = 0x27CDC0u;
            goto label_27cdc0;
        }
    }
    ctx->pc = 0x27CD74u;
label_27cd74:
    // 0x27cd74: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x27cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
label_27cd78:
    // 0x27cd78: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cd7c:
    // 0x27cd7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd80:
    // 0x27cd80: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd84:
    // 0x27cd84: 0xc067c24  jal         func_19F090
label_27cd88:
    if (ctx->pc == 0x27CD88u) {
        ctx->pc = 0x27CD8Cu;
        goto label_27cd8c;
    }
    ctx->pc = 0x27CD84u;
    SET_GPR_U32(ctx, 31, 0x27CD8Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD84u, 0x27CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD8Cu;
label_27cd8c:
    // 0x27cd8c: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_27cd90:
    // 0x27cd90: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cd94:
    // 0x27cd94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd98:
    // 0x27cd98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd9c:
    // 0x27cd9c: 0xc067c24  jal         func_19F090
label_27cda0:
    if (ctx->pc == 0x27CDA0u) {
        ctx->pc = 0x27CDA4u;
        goto label_27cda4;
    }
    ctx->pc = 0x27CD9Cu;
    SET_GPR_U32(ctx, 31, 0x27CDA4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD9Cu, 0x27CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDA4u;
label_27cda4:
    // 0x27cda4: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x27cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
label_27cda8:
    // 0x27cda8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cdac:
    // 0x27cdac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cdb0:
    // 0x27cdb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cdb4:
    // 0x27cdb4: 0xc067c24  jal         func_19F090
label_27cdb8:
    if (ctx->pc == 0x27CDB8u) {
        ctx->pc = 0x27CDBCu;
        goto label_27cdbc;
    }
    ctx->pc = 0x27CDB4u;
    SET_GPR_U32(ctx, 31, 0x27CDBCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CDB4u, 0x27CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDBCu;
label_27cdbc:
    // 0x27cdbc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cdbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27cdc0:
    // 0x27cdc0: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27cdc4:
    // 0x27cdc4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_27cdc8:
    if (ctx->pc == 0x27CDC8u) {
        ctx->pc = 0x27CDCCu;
        goto label_27cdcc;
    }
    ctx->pc = 0x27CDC4u;
    {
        const bool branch_taken_0x27cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdc4) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CDCCu;
label_27cdcc:
    // 0x27cdcc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27cdd0:
    // 0x27cdd0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_27cdd4:
    if (ctx->pc == 0x27CDD4u) {
        ctx->pc = 0x27CDD8u;
        goto label_27cdd8;
    }
    ctx->pc = 0x27CDD0u;
    {
        const bool branch_taken_0x27cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdd0) {
            ctx->pc = 0x27CE40u;
            goto label_27ce40;
        }
    }
    ctx->pc = 0x27CDD8u;
label_27cdd8:
    // 0x27cdd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cddc:
    // 0x27cddc: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27cde0:
    // 0x27cde0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27cde4:
    // 0x27cde4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27cde8:
    // 0x27cde8: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cde8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6988), (uint8_t)GPR_U32(ctx, 2));
label_27cdec:
    // 0x27cdec: 0x0  nop
    ctx->pc = 0x27cdecu;
    // NOP
label_27cdf0:
    // 0x27cdf0: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x27cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_27cdf4:
    // 0x27cdf4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27cdf8:
    // 0x27cdf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cdfc:
    // 0x27cdfc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ce00:
    // 0x27ce00: 0xc067c24  jal         func_19F090
label_27ce04:
    if (ctx->pc == 0x27CE04u) {
        ctx->pc = 0x27CE08u;
        goto label_27ce08;
    }
    ctx->pc = 0x27CE00u;
    SET_GPR_U32(ctx, 31, 0x27CE08u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE00u, 0x27CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE08u;
label_27ce08:
    // 0x27ce08: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x27ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
label_27ce0c:
    // 0x27ce0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27ce10:
    // 0x27ce10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ce14:
    // 0x27ce14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ce14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ce18:
    // 0x27ce18: 0xc067c24  jal         func_19F090
label_27ce1c:
    if (ctx->pc == 0x27CE1Cu) {
        ctx->pc = 0x27CE20u;
        goto label_27ce20;
    }
    ctx->pc = 0x27CE18u;
    SET_GPR_U32(ctx, 31, 0x27CE20u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE18u, 0x27CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE20u;
label_27ce20:
    // 0x27ce20: 0x24040414  addiu       $a0, $zero, 0x414
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_27ce24:
    // 0x27ce24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27ce28:
    // 0x27ce28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ce2c:
    // 0x27ce2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ce30:
    // 0x27ce30: 0xc067c24  jal         func_19F090
label_27ce34:
    if (ctx->pc == 0x27CE34u) {
        ctx->pc = 0x27CE38u;
        goto label_27ce38;
    }
    ctx->pc = 0x27CE30u;
    SET_GPR_U32(ctx, 31, 0x27CE38u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CE30u, 0x27CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE38u;
label_27ce38:
    // 0x27ce38: 0x10000006  b           . + 4 + (0x6 << 2)
label_27ce3c:
    if (ctx->pc == 0x27CE3Cu) {
        ctx->pc = 0x27CE40u;
        goto label_27ce40;
    }
    ctx->pc = 0x27CE38u;
    {
        const bool branch_taken_0x27ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce38) {
            ctx->pc = 0x27CE54u;
            goto label_27ce54;
        }
    }
    ctx->pc = 0x27CE40u;
label_27ce40:
    // 0x27ce40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ce44:
    // 0x27ce44: 0xc084964  jal         func_212590
label_27ce48:
    if (ctx->pc == 0x27CE48u) {
        ctx->pc = 0x27CE4Cu;
        goto label_27ce4c;
    }
    ctx->pc = 0x27CE44u;
    SET_GPR_U32(ctx, 31, 0x27CE4Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27CE44u, 0x27CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE4Cu;
label_27ce4c:
    // 0x27ce4c: 0x1000feff  b           . + 4 + (-0x101 << 2)
label_27ce50:
    if (ctx->pc == 0x27CE50u) {
        ctx->pc = 0x27CE54u;
        goto label_27ce54;
    }
    ctx->pc = 0x27CE4Cu;
    {
        const bool branch_taken_0x27ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce4c) {
            ctx->pc = 0x27CA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ca4c;
        }
    }
    ctx->pc = 0x27CE54u;
label_27ce54:
    // 0x27ce54: 0xc084934  jal         func_2124D0
label_27ce58:
    if (ctx->pc == 0x27CE58u) {
        ctx->pc = 0x27CE5Cu;
        goto label_27ce5c;
    }
    ctx->pc = 0x27CE54u;
    SET_GPR_U32(ctx, 31, 0x27CE5Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27CE54u, 0x27CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE5Cu;
label_27ce5c:
    // 0x27ce5c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27ce5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ce60:
    // 0x27ce60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ce60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ce64:
    // 0x27ce64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ce64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ce68:
    // 0x27ce68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ce68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ce6c:
    // 0x27ce6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27ce70:
    // 0x27ce70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27ce74:
    // 0x27ce74: 0x3e00008  jr          $ra
label_27ce78:
    if (ctx->pc == 0x27CE78u) {
        ctx->pc = 0x27CE7Cu;
        goto label_fallthrough_0x27ce74;
    }
    ctx->pc = 0x27CE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27ce74:
    ctx->pc = 0x27CE7Cu;
}
