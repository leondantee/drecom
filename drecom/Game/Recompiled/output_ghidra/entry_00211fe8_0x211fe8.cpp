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

// Function: entry_00211fe8
// Address: 0x211fe8 - 0x212028
void entry_00211fe8_0x211fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211fe8_0x211fe8");
#endif

    switch (ctx->pc) {
        case 0x212020u: goto label_212020;
        default: break;
    }

    ctx->pc = 0x211fe8u;

    // 0x211fe8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x211fec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x211fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x211ff0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x211ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x211ff4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x211ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x211ff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211ffc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x211ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x212000: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x212000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x212004: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x212008: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x212008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21200c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21200cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212010: 0x8e270130  lw          $a3, 0x130($s1)
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x212014: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x212014u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212018: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x212018u;
    SET_GPR_U32(ctx, 31, 0x212020u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x212018u, 0x212020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212020u;
label_212020:
    // 0x212020: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x212020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x212024: 0x0  nop
    ctx->pc = 0x212024u;
    // NOP
    ctx->pc = 0x212028u;
}
