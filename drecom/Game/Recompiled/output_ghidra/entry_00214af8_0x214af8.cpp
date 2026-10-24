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

// Function: entry_00214af8
// Address: 0x214af8 - 0x214b10
void entry_00214af8_0x214af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214af8_0x214af8");
#endif

    switch (ctx->pc) {
        case 0x214af8u: goto label_214af8;
        case 0x214afcu: goto label_214afc;
        case 0x214b00u: goto label_214b00;
        case 0x214b04u: goto label_214b04;
        case 0x214b08u: goto label_214b08;
        case 0x214b0cu: goto label_214b0c;
        default: break;
    }

    ctx->pc = 0x214af8u;

label_214af8:
    // 0x214af8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_214afc:
    // 0x214afc: 0x8c43aad4  lw          $v1, -0x552C($v0)
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945492)));
label_214b00:
    // 0x214b00: 0x60f809  jalr        $v1
label_214b04:
    if (ctx->pc == 0x214B04u) {
        ctx->pc = 0x214B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B00u;
        // 0x214b04: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B08u;
        goto label_214b08;
    }
    ctx->pc = 0x214B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214B08u);
        ctx->pc = 0x214B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B00u;
        // 0x214b04: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B00u, 0x214B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214B08u;
label_214b08:
    // 0x214b08: 0x10000005  b           . + 4 + (0x5 << 2)
label_214b0c:
    if (ctx->pc == 0x214B0Cu) {
        ctx->pc = 0x214B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B08u;
        // 0x214b0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B10u;
        goto label_fallthrough_0x214b08;
    }
    ctx->pc = 0x214B08u;
    {
        const bool branch_taken_0x214b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B08u;
        // 0x214b0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b08) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214b08:
    ctx->pc = 0x214B10u;
}
