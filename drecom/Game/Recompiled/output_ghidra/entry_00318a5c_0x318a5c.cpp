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

// Function: entry_00318a5c
// Address: 0x318a5c - 0x318ab8
void entry_00318a5c_0x318a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318a5c_0x318a5c");
#endif

    switch (ctx->pc) {
        case 0x318a7cu: goto label_318a7c;
        default: break;
    }

    ctx->pc = 0x318a5cu;

    // 0x318a5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x318a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x318a64: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x318a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x318a68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318a6c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x318a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x318a70: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x318a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x318a74: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x318A74u;
    SET_GPR_U32(ctx, 31, 0x318A7Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x318A74u, 0x318A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A7Cu;
label_318a7c:
    // 0x318a7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318A7Cu;
    {
        const bool branch_taken_0x318a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a7c) {
            ctx->pc = 0x318AB8u;
            return;
        }
    }
    ctx->pc = 0x318A84u;
    // 0x318a84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318a88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318a90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318aa0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318aa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318aa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318aac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x318ab0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x318AB0u;
    {
        const bool branch_taken_0x318ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ab0) {
            ctx->pc = 0x318BE0u;
            return;
        }
    }
    ctx->pc = 0x318AB8u;
}
