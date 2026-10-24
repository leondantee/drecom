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

// Function: entry_0028b320
// Address: 0x28b320 - 0x28b394
void entry_0028b320_0x28b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b320_0x28b320");
#endif

    switch (ctx->pc) {
        case 0x28b340u: goto label_28b340;
        case 0x28b364u: goto label_28b364;
        case 0x28b390u: goto label_28b390;
        default: break;
    }

    ctx->pc = 0x28b320u;

    // 0x28b320: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b324: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b328: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b32c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x28b32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b330: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x28b330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b334: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b338: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B338u;
    SET_GPR_U32(ctx, 31, 0x28B340u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B338u, 0x28B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B340u;
label_28b340:
    // 0x28b340: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x28b340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b344: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x28b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b348: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28b348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28b34c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b350: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x28b350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b354: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b358: 0x71603e28  paddub      $a3, $t3, $zero
    ctx->pc = 0x28b358u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b35c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B35Cu;
    SET_GPR_U32(ctx, 31, 0x28B364u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B35Cu, 0x28B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B364u;
label_28b364:
    // 0x28b364: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b368: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b36c: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x28b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b370: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b374: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b378: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x28b378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b37c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b380: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b384: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b384u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b388: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B388u;
    SET_GPR_U32(ctx, 31, 0x28B390u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B388u, 0x28B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B390u;
label_28b390:
    // 0x28b390: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28b390u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28b394u;
}
