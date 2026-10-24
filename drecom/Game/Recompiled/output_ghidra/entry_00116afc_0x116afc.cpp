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

// Function: entry_00116afc
// Address: 0x116afc - 0x116b1c
void entry_00116afc_0x116afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116afc_0x116afc");
#endif

    switch (ctx->pc) {
        case 0x116b18u: goto label_116b18;
        default: break;
    }

    ctx->pc = 0x116afcu;

    // 0x116afc: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x116AFCu;
    {
        const bool branch_taken_0x116afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AFCu;
        // 0x116b00: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116afc) {
            ctx->pc = 0x116D54u;
            return;
        }
    }
    ctx->pc = 0x116B04u;
    // 0x116b04: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116B04u;
    {
        const bool branch_taken_0x116b04 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B04u;
        // 0x116b08: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b04) {
            ctx->pc = 0x116B1Cu;
            return;
        }
    }
    ctx->pc = 0x116B0Cu;
    // 0x116b0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b10: 0xc046542  jal         func_119508
    ctx->pc = 0x116B10u;
    SET_GPR_U32(ctx, 31, 0x116B18u);
    ctx->pc = 0x116B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B10u;
    // 0x116b14: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116B10u, 0x116B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B18u;
label_116b18:
    // 0x116b18: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x116b1cu;
}
