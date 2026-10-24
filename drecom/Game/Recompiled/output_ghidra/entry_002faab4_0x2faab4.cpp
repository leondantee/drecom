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

// Function: entry_002faab4
// Address: 0x2faab4 - 0x2fab24
void entry_002faab4_0x2faab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002faab4_0x2faab4");
#endif

    switch (ctx->pc) {
        case 0x2fab18u: goto label_2fab18;
        default: break;
    }

    ctx->pc = 0x2faab4u;

    // 0x2faab4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faab8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2faab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2faabc: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2faabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2faac0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2faac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2faac4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2faac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2faacc: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2faad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faad4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2faad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2faad8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2faad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2faadc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2faadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2faae0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2faae4: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2faae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2faae8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2faae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2faaec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2faaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2faaf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2faaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faaf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2faaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2faaf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faafc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2faafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fab00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fab00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fab04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fab04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fab08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fab0c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x2fab0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fab10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAB10u;
    SET_GPR_U32(ctx, 31, 0x2FAB18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAB10u, 0x2FAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB18u;
label_2fab18:
    // 0x2fab18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fab18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fab1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FAB24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAB1Cu, 0x2FAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB24u;
}
