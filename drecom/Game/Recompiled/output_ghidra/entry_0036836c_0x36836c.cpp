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

// Function: entry_0036836c
// Address: 0x36836c - 0x3683b4
void entry_0036836c_0x36836c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036836c_0x36836c");
#endif

    ctx->pc = 0x36836cu;

    // 0x36836c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368370: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368374: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368378: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36837c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36838c: 0x34440306  ori         $a0, $v0, 0x306
    ctx->pc = 0x36838cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)774);
    // 0x368390: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x368390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368394: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x368394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368398: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36839c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3683a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3683a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3683a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3683a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3683a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3683a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3683ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3683ACu;
    SET_GPR_U32(ctx, 31, 0x3683B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3683ACu, 0x3683B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3683B4u;
}
