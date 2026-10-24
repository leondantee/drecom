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

// Function: entry_003564e0
// Address: 0x3564e0 - 0x356530
void entry_003564e0_0x3564e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003564e0_0x3564e0");
#endif

    switch (ctx->pc) {
        case 0x356520u: goto label_356520;
        case 0x35652cu: goto label_35652c;
        default: break;
    }

    ctx->pc = 0x3564e0u;

    // 0x3564e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3564e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3564e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3564e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3564e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3564ec: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3564ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3564f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3564f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3564f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3564f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3564f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3564fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3564fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356500: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x356500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x356504: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x356504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356508: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x356508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35650c: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x35650cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356510: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356514: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356518: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356518u;
    SET_GPR_U32(ctx, 31, 0x356520u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356518u, 0x356520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356524: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356524u;
    SET_GPR_U32(ctx, 31, 0x35652Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356524u, 0x35652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35652Cu;
label_35652c:
    // 0x35652c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35652cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x356530u;
}
