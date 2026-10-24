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

// Function: entry_00214a14
// Address: 0x214a14 - 0x214a2c
void entry_00214a14_0x214a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214a14_0x214a14");
#endif

    switch (ctx->pc) {
        case 0x214a1cu: goto label_214a1c;
        case 0x214a24u: goto label_214a24;
        default: break;
    }

    ctx->pc = 0x214a14u;

    // 0x214a14: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x214A14u;
    SET_GPR_U32(ctx, 31, 0x214A1Cu);
    ctx->pc = 0x214A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A14u;
    // 0x214a18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x214A14u, 0x214A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A1Cu;
label_214a1c:
    // 0x214a1c: 0xc085108  jal         func_214420
    ctx->pc = 0x214A1Cu;
    SET_GPR_U32(ctx, 31, 0x214A24u);
    ctx->pc = 0x214A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A1Cu;
    // 0x214a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214420u, 0x214A1Cu, 0x214A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A24u;
label_214a24:
    // 0x214a24: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x214A24u;
    {
        const bool branch_taken_0x214a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A24u;
        // 0x214a28: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a24) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
    ctx->pc = 0x214A2Cu;
}
