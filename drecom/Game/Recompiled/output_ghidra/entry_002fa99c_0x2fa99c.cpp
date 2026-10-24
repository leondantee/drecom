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

// Function: entry_002fa99c
// Address: 0x2fa99c - 0x2faa08
void entry_002fa99c_0x2fa99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa99c_0x2fa99c");
#endif

    switch (ctx->pc) {
        case 0x2fa9fcu: goto label_2fa9fc;
        default: break;
    }

    ctx->pc = 0x2fa99cu;

    // 0x2fa99c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa9a0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fa9a4: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fa9a8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9ac: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa9b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2fa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fa9b4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fa9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fa9b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2fa9bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fa9c0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2fa9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2fa9c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa9c8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa9cc: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x2fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fa9d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa9d8: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fa9d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa9dc: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x2fa9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x2fa9e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa9e4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fa9e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa9e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa9e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa9ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa9ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa9f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa9f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA9F4u;
    SET_GPR_U32(ctx, 31, 0x2FA9FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA9F4u, 0x2FA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9FCu;
label_2fa9fc:
    // 0x2fa9fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa9fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2faa00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAA00u;
    SET_GPR_U32(ctx, 31, 0x2FAA08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAA00u, 0x2FAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA08u;
}
