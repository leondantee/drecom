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

// Function: get_next_cam
// Address: 0x16ac50 - 0x16ae4c
void get_next_cam_0x16ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_next_cam_0x16ac50");
#endif

    switch (ctx->pc) {
        case 0x16ac64u: goto label_16ac64;
        case 0x16ade8u: goto label_16ade8;
        case 0x16ae0cu: goto label_16ae0c;
        default: break;
    }

    ctx->pc = 0x16ac50u;

label_16ac50:
    // 0x16ac50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ac54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x16ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x16ac58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x16ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x16ac5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x16ac60: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x16ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_16ac64:
    // 0x16ac64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ac68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ac6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ac70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ac74: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ac78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ac7c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x16ac7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16ac80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16ac80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ac84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ac88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ac8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ac90: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16ac94: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16ac94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ac98: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x16AC98u;
    {
        const bool branch_taken_0x16ac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac98) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16ACA0u;
    // 0x16aca0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16aca4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16aca8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16acac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16acb0: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16acb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16acb8: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x16acb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16acbc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16acbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16acc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16acc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16acc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16accc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16acccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16acd0: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x16ACD0u;
    {
        const bool branch_taken_0x16acd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16acd0) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16ACD8u;
    // 0x16acd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16acdc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x16acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ace0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ace4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ace8: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16acec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16acf0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x16acf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x16acf4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16acf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16acfc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ad00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad04: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16ad08: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16ad08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ad0c: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x16AD0Cu;
    {
        const bool branch_taken_0x16ad0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad0c) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16AD14u;
    // 0x16ad14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad18: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x16ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ad1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ad20: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ad24: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad2c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x16ad2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x16ad30: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16ad30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ad34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ad38: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ad3c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad40: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16ad40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16ad44: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x16AD44u;
    {
        const bool branch_taken_0x16ad44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad44) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16AD4Cu;
    // 0x16ad4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad50: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ad54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ad58: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ad5c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad64: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x16ad64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ad68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16ad68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ad6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ad70: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ad74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad78: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16ad7c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16ad7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ad80: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16AD80u;
    {
        const bool branch_taken_0x16ad80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad80) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16AD88u;
    // 0x16ad88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad8c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ad90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ad94: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ad98: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ada0: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x16ada0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ada4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16ada4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ada8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16adac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16adb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16adb4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16adb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16adb8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x16ADB8u;
    {
        const bool branch_taken_0x16adb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16adb8) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16ADC0u;
    // 0x16adc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16adc4: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16adc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16adc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16ADC8u;
    {
        const bool branch_taken_0x16adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16adc8) {
            ctx->pc = 0x16ADF0u;
            goto label_16adf0;
        }
    }
    ctx->pc = 0x16ADD0u;
    // 0x16add0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16add4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16add8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16add8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16addc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x16addcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ade0: 0xc05ab14  jal         func_16AC50
    ctx->pc = 0x16ADE0u;
    SET_GPR_U32(ctx, 31, 0x16ADE8u);
    ctx->pc = 0x16AC50u;
    goto label_16ac50;
    ctx->pc = 0x16ADE8u;
label_16ade8:
    // 0x16ade8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16ADE8u;
    {
        const bool branch_taken_0x16ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ade8) {
            ctx->pc = 0x16AE10u;
            goto label_16ae10;
        }
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16adf4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16adf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16adfc: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x16adfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16ae00: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ae04: 0xc05ab94  jal         func_16AE50
    ctx->pc = 0x16AE04u;
    SET_GPR_U32(ctx, 31, 0x16AE0Cu);
    ctx->pc = 0x16AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE50u, 0x16AE04u, 0x16AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE0Cu;
label_16ae0c:
    // 0x16ae0c: 0x0  nop
    ctx->pc = 0x16ae0cu;
    // NOP
label_16ae10:
    // 0x16ae10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae14: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ae18: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AE18u;
    {
        const bool branch_taken_0x16ae18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae18) {
            ctx->pc = 0x16AE3Cu;
            goto label_16ae3c;
        }
    }
    ctx->pc = 0x16AE20u;
    // 0x16ae20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae28: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ae2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ae30: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16ae34: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x16AE34u;
    {
        const bool branch_taken_0x16ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae34) {
            ctx->pc = 0x16AC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac64;
        }
    }
    ctx->pc = 0x16AE3Cu;
label_16ae3c:
    // 0x16ae3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x16ae3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE4Cu;
}
