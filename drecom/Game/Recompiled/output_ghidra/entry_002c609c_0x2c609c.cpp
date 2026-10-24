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

// Function: entry_002c609c
// Address: 0x2c609c - 0x2c6164
void entry_002c609c_0x2c609c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c609c_0x2c609c");
#endif

    switch (ctx->pc) {
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c6120u: goto label_2c6120;
        default: break;
    }

    ctx->pc = 0x2c609cu;

    // 0x2c609c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c60a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c60a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C60A4u;
    SET_GPR_U32(ctx, 31, 0x2C60ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C60A4u, 0x2C60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60ACu;
label_2c60ac:
    // 0x2c60ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60b0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2C60B0u;
    SET_GPR_U32(ctx, 31, 0x2C60B8u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2C60B0u, 0x2C60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60B8u;
label_2c60b8:
    // 0x2c60b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c60bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c60c0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C60C0u;
    SET_GPR_U32(ctx, 31, 0x2C60C8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C60C0u, 0x2C60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60C8u;
label_2c60c8:
    // 0x2c60c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60cc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C60CCu;
    SET_GPR_U32(ctx, 31, 0x2C60D4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C60CCu, 0x2C60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60D4u;
label_2c60d4:
    // 0x2c60d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60d8: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2c60d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2c60dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c60e0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2c60e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c60e4: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C60E4u;
    {
        const bool branch_taken_0x2c60e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c60e4) {
            ctx->pc = 0x2C6284u;
            return;
        }
    }
    ctx->pc = 0x2C60ECu;
    // 0x2c60ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60f4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c60f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c60f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c60fc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c60fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6100: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6104: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c610c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c610cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6114: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6118: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6118u;
    SET_GPR_U32(ctx, 31, 0x2C6120u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6118u, 0x2C6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6120u;
label_2c6120:
    // 0x2c6120: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6124: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c6128: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c612c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C612Cu;
    {
        const bool branch_taken_0x2c612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c612c) {
            ctx->pc = 0x2C6164u;
            return;
        }
    }
    ctx->pc = 0x2C6134u;
    // 0x2c6134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6138: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c613c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c613cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6144: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6148: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c614c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6150: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6158: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c615c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c6164u;
}
