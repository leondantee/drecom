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

// Function: entry_00216cf8
// Address: 0x216cf8 - 0x216d18
void entry_00216cf8_0x216cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216cf8_0x216cf8");
#endif

    switch (ctx->pc) {
        case 0x216d14u: goto label_216d14;
        default: break;
    }

    ctx->pc = 0x216cf8u;

    // 0x216cf8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x216cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x216cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216CFCu;
    {
        const bool branch_taken_0x216cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CFCu;
        // 0x216d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cfc) {
            ctx->pc = 0x216D18u;
            return;
        }
    }
    ctx->pc = 0x216D04u;
    // 0x216d04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x216d08: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x216d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x216d0c: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216D0Cu;
    SET_GPR_U32(ctx, 31, 0x216D14u);
    ctx->pc = 0x216D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D0Cu;
    // 0x216d10: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216D0Cu, 0x216D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D14u;
label_216d14:
    // 0x216d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216d18u;
}
