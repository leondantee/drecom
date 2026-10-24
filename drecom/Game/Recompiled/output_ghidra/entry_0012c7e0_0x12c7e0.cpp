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

// Function: entry_0012c7e0
// Address: 0x12c7e0 - 0x12c87c
void entry_0012c7e0_0x12c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c7e0_0x12c7e0");
#endif

    switch (ctx->pc) {
        case 0x12c804u: goto label_12c804;
        case 0x12c854u: goto label_12c854;
        case 0x12c864u: goto label_12c864;
        case 0x12c878u: goto label_12c878;
        default: break;
    }

    ctx->pc = 0x12c7e0u;

    // 0x12c7e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c7e4: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12c7e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12c7e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12c7ec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12c7f0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C87Cu;
            return;
        }
    }
    ctx->pc = 0x12C7F8u;
    // 0x12c7f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12c7fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12C7FCu;
    SET_GPR_U32(ctx, 31, 0x12C804u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12C7FCu, 0x12C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C804u;
label_12c804:
    // 0x12c804: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c808: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12c808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c80c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12c810: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12c814: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x12c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x12c818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12c81c: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x12c81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12c820: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x12c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12c824: 0x34430106  ori         $v1, $v0, 0x106
    ctx->pc = 0x12c824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12c828: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c82c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x12c830: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12c830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12c834: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12c838: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x12c838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x12c83c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12c83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c840: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12c844: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12c844u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c848: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c84c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12C84Cu;
    SET_GPR_U32(ctx, 31, 0x12C854u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12C84Cu, 0x12C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C854u;
label_12c854:
    // 0x12c854: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12c858: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12c85c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12C85Cu;
    SET_GPR_U32(ctx, 31, 0x12C864u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C85Cu, 0x12C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C864u;
label_12c864:
    // 0x12c864: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12c864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x12c868: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12c868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x12c86c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12c870: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12C870u;
    SET_GPR_U32(ctx, 31, 0x12C878u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C870u, 0x12C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C878u;
label_12c878:
    // 0x12c878: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12c878u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12c87cu;
}
