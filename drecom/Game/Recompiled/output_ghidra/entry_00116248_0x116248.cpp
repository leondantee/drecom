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

// Function: entry_00116248
// Address: 0x116248 - 0x116264
void entry_00116248_0x116248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116248_0x116248");
#endif

    switch (ctx->pc) {
        case 0x116260u: goto label_116260;
        default: break;
    }

    ctx->pc = 0x116248u;

    // 0x116248: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x116248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x11624c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11624Cu;
    {
        const bool branch_taken_0x11624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11624Cu;
        // 0x116250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11624c) {
            ctx->pc = 0x116264u;
            return;
        }
    }
    ctx->pc = 0x116254u;
    // 0x116254: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x116254u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116258: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116258u;
    SET_GPR_U32(ctx, 31, 0x116260u);
    ctx->pc = 0x11625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116258u;
    // 0x11625c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116258u, 0x116260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116260u;
label_116260:
    // 0x116260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116264u;
}
