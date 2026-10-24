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

// Function: entry_0031d7a8
// Address: 0x31d7a8 - 0x31d830
void entry_0031d7a8_0x31d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d7a8_0x31d7a8");
#endif

    switch (ctx->pc) {
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d828u: goto label_31d828;
        default: break;
    }

    ctx->pc = 0x31d7a8u;

    // 0x31d7a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d7ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31d7b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31d7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31d7b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31d7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31d7b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31d7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d7bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31d7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31d7c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31d7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d7c4: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31d7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31d7c8: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31d7cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d7ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d7d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d7d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D7D4u;
    SET_GPR_U32(ctx, 31, 0x31D7DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D7D4u, 0x31D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7DCu;
label_31d7dc:
    // 0x31d7dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d7dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d7e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D7E0u;
    SET_GPR_U32(ctx, 31, 0x31D7E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D7E0u, 0x31D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7E8u;
label_31d7e8:
    // 0x31d7e8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d7ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d7f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d7f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d7f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d7fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d804: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d808: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31d80c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d80cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d810: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d814: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D814u;
    SET_GPR_U32(ctx, 31, 0x31D81Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D814u, 0x31D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D81Cu;
label_31d81c:
    // 0x31d81c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d820: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D820u;
    SET_GPR_U32(ctx, 31, 0x31D828u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D820u, 0x31D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D828u;
label_31d828:
    // 0x31d828: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31D828u;
    {
        const bool branch_taken_0x31d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d828) {
            ctx->pc = 0x31D8B0u;
            return;
        }
    }
    ctx->pc = 0x31D830u;
}
