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

// Function: entry_00356454
// Address: 0x356454 - 0x3564a4
void entry_00356454_0x356454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356454_0x356454");
#endif

    switch (ctx->pc) {
        case 0x356494u: goto label_356494;
        case 0x3564a0u: goto label_3564a0;
        default: break;
    }

    ctx->pc = 0x356454u;

    // 0x356454: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356458: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35645c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35645cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356460: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356468: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x356468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35646c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x356470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x356470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356474: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x356474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x356478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35647c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35647cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356480: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x356480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356488: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x35648c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35648Cu;
    SET_GPR_U32(ctx, 31, 0x356494u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35648Cu, 0x356494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356494u;
label_356494:
    // 0x356494: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356498: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356498u;
    SET_GPR_U32(ctx, 31, 0x3564A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356498u, 0x3564A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564A0u;
label_3564a0:
    // 0x3564a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3564a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3564a4u;
}
