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

// Function: entry_001a1dd0
// Address: 0x1a1dd0 - 0x1a1e28
void entry_001a1dd0_0x1a1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1dd0_0x1a1dd0");
#endif

    switch (ctx->pc) {
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e14u: goto label_1a1e14;
        default: break;
    }

    ctx->pc = 0x1a1dd0u;

    // 0x1a1dd0: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1DD0u;
    SET_GPR_U32(ctx, 31, 0x1A1DD8u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1DD0u, 0x1A1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD8u;
label_1a1dd8:
    // 0x1a1dd8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1DD8u;
    {
        const bool branch_taken_0x1a1dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dd8) {
            ctx->pc = 0x1A1DC4u;
            return;
        }
    }
    ctx->pc = 0x1A1DE0u;
    // 0x1a1de0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1de4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1A1DE4u;
    SET_GPR_U32(ctx, 31, 0x1A1DECu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1A1DE4u, 0x1A1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DECu;
label_1a1dec:
    // 0x1a1dec: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x1a1decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1a1df0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1df4: 0x24062d00  addiu       $a2, $zero, 0x2D00
    ctx->pc = 0x1a1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
    // 0x1a1df8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a1df8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a1dfc: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A1DFCu;
    SET_GPR_U32(ctx, 31, 0x1A1E04u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A1DFCu, 0x1A1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E04u;
label_1a1e04:
    // 0x1a1e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e08: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1a1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1e0c: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1A1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E14u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1A1E0Cu, 0x1A1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E14u;
label_1a1e14:
    // 0x1a1e14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1e14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1e1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1E28u;
}
