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

// Function: entry_002fa074
// Address: 0x2fa074 - 0x2fa120
void entry_002fa074_0x2fa074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa074_0x2fa074");
#endif

    switch (ctx->pc) {
        case 0x2fa0bcu: goto label_2fa0bc;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa114u: goto label_2fa114;
        default: break;
    }

    ctx->pc = 0x2fa074u;

    // 0x2fa074: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2fa074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa078: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x2fa078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fa07c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2fa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2fa080: 0x14a3004c  bne         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2FA080u;
    {
        const bool branch_taken_0x2fa080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa080) {
            ctx->pc = 0x2FA1B4u;
            return;
        }
    }
    ctx->pc = 0x2FA088u;
    // 0x2fa088: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2fa088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa08c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2fa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2fa090: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FA090u;
    {
        const bool branch_taken_0x2fa090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa090) {
            ctx->pc = 0x2FA120u;
            return;
        }
    }
    ctx->pc = 0x2FA098u;
    // 0x2fa098: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa09c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fa09cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0a0: 0x24670340  addiu       $a3, $v1, 0x340
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x2fa0a4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2fa0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fa0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fa0ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fa0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0b0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0b4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA0B4u;
    SET_GPR_U32(ctx, 31, 0x2FA0BCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA0B4u, 0x2FA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0BCu;
label_2fa0bc:
    // 0x2fa0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa0c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa0c4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0c8: 0x24670380  addiu       $a3, $v1, 0x380
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x2fa0cc: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0d0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa0d4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fa0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0d8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fa0d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa0dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0e0: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA0E0u;
    SET_GPR_U32(ctx, 31, 0x2FA0E8u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA0E0u, 0x2FA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0E8u;
label_2fa0e8:
    // 0x2fa0e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fa0e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa0ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa0f0: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0f4: 0x24c703c0  addiu       $a3, $a2, 0x3C0
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x2fa0f8: 0x2409001d  addiu       $t1, $zero, 0x1D
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0fc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa100: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa104: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa108: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa10c: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA10Cu;
    SET_GPR_U32(ctx, 31, 0x2FA114u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA10Cu, 0x2FA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA114u;
label_2fa114:
    // 0x2fa114: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fa114u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa118: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA118u;
    {
        const bool branch_taken_0x2fa118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa118) {
            ctx->pc = 0x2FA1B4u;
            return;
        }
    }
    ctx->pc = 0x2FA120u;
}
