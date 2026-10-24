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

// Function: entry_0036805c
// Address: 0x36805c - 0x3680a4
void entry_0036805c_0x36805c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036805c_0x36805c");
#endif

    ctx->pc = 0x36805cu;

    // 0x36805c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36806c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36807c: 0x34440506  ori         $a0, $v0, 0x506
    ctx->pc = 0x36807cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1286);
    // 0x368080: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x368080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368084: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x368084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368088: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36808c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x36808cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368090: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x368090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368094: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x368094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368098: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x368098u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36809c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x36809Cu;
    SET_GPR_U32(ctx, 31, 0x3680A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x36809Cu, 0x3680A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680A4u;
}
