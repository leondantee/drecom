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

// Function: entry_00116a10
// Address: 0x116a10 - 0x116a2c
void entry_00116a10_0x116a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a10_0x116a10");
#endif

    switch (ctx->pc) {
        case 0x116a28u: goto label_116a28;
        default: break;
    }

    ctx->pc = 0x116a10u;

    // 0x116a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116a14: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116A14u;
    {
        const bool branch_taken_0x116a14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x116A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A14u;
        // 0x116a18: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a14) {
            ctx->pc = 0x116A2Cu;
            return;
        }
    }
    ctx->pc = 0x116A1Cu;
    // 0x116a1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x116a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a20: 0xc046542  jal         func_119508
    ctx->pc = 0x116A20u;
    SET_GPR_U32(ctx, 31, 0x116A28u);
    ctx->pc = 0x116A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A20u;
    // 0x116a24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116A20u, 0x116A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x116a2cu;
}
