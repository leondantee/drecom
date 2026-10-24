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

// Function: entry_003563c4
// Address: 0x3563c4 - 0x356418
void entry_003563c4_0x3563c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003563c4_0x3563c4");
#endif

    switch (ctx->pc) {
        case 0x356404u: goto label_356404;
        case 0x356410u: goto label_356410;
        default: break;
    }

    ctx->pc = 0x3563c4u;

    // 0x3563c4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3563c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3563c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3563c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3563cc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3563d0: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x3563d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3563d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3563d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3563d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3563dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3563dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3563e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3563e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3563e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3563e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3563e8: 0x3475ffff  ori         $s5, $v1, 0xFFFF
    ctx->pc = 0x3563e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3563ec: 0x953824  and         $a3, $a0, $s5
    ctx->pc = 0x3563ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x3563f0: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x3563f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x3563f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3563f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3563f8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3563f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3563fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3563FCu;
    SET_GPR_U32(ctx, 31, 0x356404u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3563FCu, 0x356404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356404u;
label_356404:
    // 0x356404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356408: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356408u;
    SET_GPR_U32(ctx, 31, 0x356410u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356408u, 0x356410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356410u;
label_356410:
    // 0x356410: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356410u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356414: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x356414u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x356418u;
}
