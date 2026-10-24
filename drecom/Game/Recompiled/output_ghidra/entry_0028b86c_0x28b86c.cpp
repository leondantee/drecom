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

// Function: entry_0028b86c
// Address: 0x28b86c - 0x28b8e8
void entry_0028b86c_0x28b86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b86c_0x28b86c");
#endif

    switch (ctx->pc) {
        case 0x28b890u: goto label_28b890;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8dcu: goto label_28b8dc;
        default: break;
    }

    ctx->pc = 0x28b86cu;

    // 0x28b86c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b870: 0x24080069  addiu       $t0, $zero, 0x69
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b874: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b878: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b87c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b87cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b880: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b884: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b888: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B888u;
    SET_GPR_U32(ctx, 31, 0x28B890u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B888u, 0x28B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B890u;
label_28b890:
    // 0x28b890: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b890u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b894: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b898: 0x2408006a  addiu       $t0, $zero, 0x6A
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b89c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b89cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b8a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8a4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b8a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8a8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8ac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b8acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8b0: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B8B0u;
    SET_GPR_U32(ctx, 31, 0x28B8B8u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B8B0u, 0x28B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8B8u;
label_28b8b8:
    // 0x28b8b8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28b8b8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8c0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b8c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8c8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8cc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x28b8ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b8d0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8d4: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B8D4u;
    SET_GPR_U32(ctx, 31, 0x28B8DCu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B8D4u, 0x28B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8DCu;
label_28b8dc:
    // 0x28b8dc: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b8dcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28B8E0u;
    {
        const bool branch_taken_0x28b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8e0) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B8E8u;
}
