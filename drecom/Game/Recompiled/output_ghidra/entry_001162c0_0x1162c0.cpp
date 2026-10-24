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

// Function: entry_001162c0
// Address: 0x1162c0 - 0x1162dc
void entry_001162c0_0x1162c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162c0_0x1162c0");
#endif

    switch (ctx->pc) {
        case 0x1162d8u: goto label_1162d8;
        default: break;
    }

    ctx->pc = 0x1162c0u;

    // 0x1162c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1162c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1162c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1162C4u;
    {
        const bool branch_taken_0x1162c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162C4u;
        // 0x1162c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162c4) {
            ctx->pc = 0x1162DCu;
            return;
        }
    }
    ctx->pc = 0x1162CCu;
    // 0x1162cc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1162ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1162d0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1162D0u;
    SET_GPR_U32(ctx, 31, 0x1162D8u);
    ctx->pc = 0x1162D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162D0u;
    // 0x1162d4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1162D0u, 0x1162D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D8u;
label_1162d8:
    // 0x1162d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1162d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1162dcu;
}
