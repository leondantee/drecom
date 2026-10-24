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

// Function: entry_0024c42c
// Address: 0x24c42c - 0x24c480
void entry_0024c42c_0x24c42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c42c_0x24c42c");
#endif

    switch (ctx->pc) {
        case 0x24c458u: goto label_24c458;
        case 0x24c464u: goto label_24c464;
        case 0x24c47cu: goto label_24c47c;
        default: break;
    }

    ctx->pc = 0x24c42cu;

    // 0x24c42c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c430: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c434: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c438: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24C438u;
    {
        const bool branch_taken_0x24c438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c438) {
            ctx->pc = 0x24C488u;
            return;
        }
    }
    ctx->pc = 0x24C440u;
    // 0x24c440: 0x3404a302  ori         $a0, $zero, 0xA302
    ctx->pc = 0x24c440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41730);
    // 0x24c444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c448: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c44c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c44cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c450: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C450u;
    SET_GPR_U32(ctx, 31, 0x24C458u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C450u, 0x24C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C458u;
label_24c458:
    // 0x24c458: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c45c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C45Cu;
    SET_GPR_U32(ctx, 31, 0x24C464u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C45Cu, 0x24C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C464u;
label_24c464:
    // 0x24c464: 0x3404a201  ori         $a0, $zero, 0xA201
    ctx->pc = 0x24c464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41473);
    // 0x24c468: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c46c: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C474u;
    SET_GPR_U32(ctx, 31, 0x24C47Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C474u, 0x24C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C47Cu;
label_24c47c:
    // 0x24c47c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c47cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24c480u;
}
