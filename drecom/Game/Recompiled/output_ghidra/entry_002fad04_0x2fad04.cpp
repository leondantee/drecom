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

// Function: entry_002fad04
// Address: 0x2fad04 - 0x2fad74
void entry_002fad04_0x2fad04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fad04_0x2fad04");
#endif

    switch (ctx->pc) {
        case 0x2fad68u: goto label_2fad68;
        default: break;
    }

    ctx->pc = 0x2fad04u;

    // 0x2fad04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad08: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fad0c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x2fad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fad10: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2fad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fad14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fad18: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2fad18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fad1c: 0x34e20300  ori         $v0, $a3, 0x300
    ctx->pc = 0x2fad1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)768);
    // 0x2fad20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fad24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fad24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fad28: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2fad28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fad2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fad30: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fad34: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x2fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fad38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fad38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fad3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fad40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fad44: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fad44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fad48: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fad4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fad50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fad50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fad54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fad54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fad58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fad5c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fad5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fad60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAD60u;
    SET_GPR_U32(ctx, 31, 0x2FAD68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAD60u, 0x2FAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD68u;
label_2fad68:
    // 0x2fad68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fad68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fad6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2FAD74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAD6Cu, 0x2FAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD74u;
}
