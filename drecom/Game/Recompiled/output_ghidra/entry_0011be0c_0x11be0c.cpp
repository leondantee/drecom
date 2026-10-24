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

// Function: entry_0011be0c
// Address: 0x11be0c - 0x11be24
void entry_0011be0c_0x11be0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011be0c_0x11be0c");
#endif

    switch (ctx->pc) {
        case 0x11be14u: goto label_11be14;
        default: break;
    }

    ctx->pc = 0x11be0cu;

    // 0x11be0c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BE0Cu;
    SET_GPR_U32(ctx, 31, 0x11BE14u);
    ctx->pc = 0x11BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE0Cu;
    // 0x11be10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BE0Cu, 0x11BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE14u;
label_11be14:
    // 0x11be14: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x11BE14u;
    {
        const bool branch_taken_0x11be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE14u;
        // 0x11be18: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be14) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BE1Cu;
    // 0x11be1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BE1Cu;
    {
        const bool branch_taken_0x11be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE1Cu;
        // 0x11be20: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be1c) {
            ctx->pc = 0x11BE28u;
            return;
        }
    }
    ctx->pc = 0x11BE24u;
}
