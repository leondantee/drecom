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

// Function: entry_002799a8
// Address: 0x2799a8 - 0x2799e8
void entry_002799a8_0x2799a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002799a8_0x2799a8");
#endif

    switch (ctx->pc) {
        case 0x2799e4u: goto label_2799e4;
        default: break;
    }

    ctx->pc = 0x2799a8u;

    // 0x2799a8: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2799a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2799ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2799acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2799b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2799b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2799b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2799b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2799b8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2799b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2799bc: 0x3444001b  ori         $a0, $v0, 0x1B
    ctx->pc = 0x2799bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x2799c0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2799c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2799c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2799c8: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2799cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2799ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2799d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2799d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2799d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2799d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2799DCu;
    SET_GPR_U32(ctx, 31, 0x2799E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2799DCu, 0x2799E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799E4u;
label_2799e4:
    // 0x2799e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2799e8u;
}
