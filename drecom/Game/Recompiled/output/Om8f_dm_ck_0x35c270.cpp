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

// Function: Om8f_dm_ck
// Address: 0x35c270 - 0x35c310
void Om8f_dm_ck_0x35c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_dm_ck_0x35c270");
#endif

    ctx->pc = 0x35c270u;

    // 0x35c270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c274: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35c274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35c278: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c27c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35c27cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35c280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C280u;
    {
        const bool branch_taken_0x35c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c280) {
            ctx->pc = 0x35C294u;
            goto label_35c294;
        }
    }
    ctx->pc = 0x35C288u;
    // 0x35c288: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35c288u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c28c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x35C28Cu;
    {
        const bool branch_taken_0x35c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c28c) {
            ctx->pc = 0x35C304u;
            goto label_35c304;
        }
    }
    ctx->pc = 0x35C294u;
label_35c294:
    // 0x35c294: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c298: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35c298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35c29c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C29Cu;
    {
        const bool branch_taken_0x35c29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c29c) {
            ctx->pc = 0x35C2B0u;
            goto label_35c2b0;
        }
    }
    ctx->pc = 0x35C2A4u;
    // 0x35c2a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35c2a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c2a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35C2A8u;
    {
        const bool branch_taken_0x35c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c2a8) {
            ctx->pc = 0x35C304u;
            goto label_35c304;
        }
    }
    ctx->pc = 0x35C2B0u;
label_35c2b0:
    // 0x35c2b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c2b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2b8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35c2bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c2c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35c2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35c2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c2cc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35c2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35c2d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35c2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35c2ec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c2f0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35c2f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35c2f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c2fc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35c300: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35c300u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35c304:
    // 0x35c304: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35c304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c308: 0x3e00008  jr          $ra
    ctx->pc = 0x35C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C310u;
}
