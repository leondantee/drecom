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

// Function: caseD_1
// Address: 0x12b354 - 0x12b3c8
void caseD_1_0x12b354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x12b354");
#endif

    switch (ctx->pc) {
        case 0x12b378u: goto label_12b378;
        case 0x12b384u: goto label_12b384;
        case 0x12b394u: goto label_12b394;
        case 0x12b3a0u: goto label_12b3a0;
        default: break;
    }

    ctx->pc = 0x12b354u;

    // 0x12b354: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b358: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b35c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12b360: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12b364: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12b364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12b368: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b370: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B370u;
    SET_GPR_U32(ctx, 31, 0x12B378u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B370u, 0x12B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B378u;
label_12b378:
    // 0x12b378: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b37c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12B37Cu;
    SET_GPR_U32(ctx, 31, 0x12B384u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B37Cu, 0x12B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B384u;
label_12b384:
    // 0x12b384: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b38c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B38Cu;
    SET_GPR_U32(ctx, 31, 0x12B394u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B38Cu, 0x12B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B394u;
label_12b394:
    // 0x12b394: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b398: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12B398u;
    SET_GPR_U32(ctx, 31, 0x12B3A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B398u, 0x12B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A0u;
label_12b3a0:
    // 0x12b3a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b3a8: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x12B3A8u;
    {
        const bool branch_taken_0x12b3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3a8) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B3B0u;
    // 0x12b3b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12b3b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12b3b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b3bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12b3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12b3c0: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x12B3C0u;
    {
        const bool branch_taken_0x12b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3c0) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B3C8u;
}
