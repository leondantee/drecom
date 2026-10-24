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

// Function: entry_00213328
// Address: 0x213328 - 0x213340
void entry_00213328_0x213328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213328_0x213328");
#endif

    switch (ctx->pc) {
        case 0x213330u: goto label_213330;
        default: break;
    }

    ctx->pc = 0x213328u;

    // 0x213328: 0xc084c8c  jal         func_213230
    ctx->pc = 0x213328u;
    SET_GPR_U32(ctx, 31, 0x213330u);
    ctx->pc = 0x21332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213328u;
    // 0x21332c: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213230u, 0x213328u, 0x213330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213330u;
label_213330:
    // 0x213330: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213330u;
    {
        const bool branch_taken_0x213330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213330u;
        // 0x213334: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213330) {
            ctx->pc = 0x213340u;
            return;
        }
    }
    ctx->pc = 0x213338u;
    // 0x213338: 0x42000038  ei
    ctx->pc = 0x213338u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21333c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x213340u;
}
