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

// Function: entry_001a1d48
// Address: 0x1a1d48 - 0x1a1d8c
void entry_001a1d48_0x1a1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d48_0x1a1d48");
#endif

    switch (ctx->pc) {
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d84u: goto label_1a1d84;
        default: break;
    }

    ctx->pc = 0x1a1d48u;

    // 0x1a1d48: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1D48u;
    SET_GPR_U32(ctx, 31, 0x1A1D50u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1D48u, 0x1A1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D50u;
label_1a1d50:
    // 0x1a1d50: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1D50u;
    {
        const bool branch_taken_0x1a1d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d50) {
            ctx->pc = 0x1A1D3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D58u;
    // 0x1a1d58: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a1d5c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1d60: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x1a1d64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1d64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1d68: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A1D68u;
    SET_GPR_U32(ctx, 31, 0x1A1D70u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A1D68u, 0x1A1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D70u;
label_1a1d70:
    // 0x1a1d70: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a1d74: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1d78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1d7c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D84u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1D7Cu, 0x1A1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D84u;
label_1a1d84:
    // 0x1a1d84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D84u;
    {
        const bool branch_taken_0x1a1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d84) {
            ctx->pc = 0x1A1D98u;
            return;
        }
    }
    ctx->pc = 0x1A1D8Cu;
}
