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

// Function: entry_003332b0
// Address: 0x3332b0 - 0x3332dc
void entry_003332b0_0x3332b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003332b0_0x3332b0");
#endif

    switch (ctx->pc) {
        case 0x3332d0u: goto label_3332d0;
        default: break;
    }

    ctx->pc = 0x3332b0u;

    // 0x3332b0: 0x151c00  sll         $v1, $s5, 16
    ctx->pc = 0x3332b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x3332b4: 0x34760096  ori         $s6, $v1, 0x96
    ctx->pc = 0x3332b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)150);
    // 0x3332b8: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x3332b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x3332bc: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x3332bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x3332c0: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x3332c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x3332c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3332c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3332c8: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x3332C8u;
    SET_GPR_U32(ctx, 31, 0x3332D0u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x3332C8u, 0x3332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332D0u;
label_3332d0:
    // 0x3332d0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x3332d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x3332d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3332d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3332d8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x3332d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x3332dcu;
}
