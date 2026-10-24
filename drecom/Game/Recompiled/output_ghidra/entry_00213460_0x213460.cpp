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

// Function: entry_00213460
// Address: 0x213460 - 0x213478
void entry_00213460_0x213460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213460_0x213460");
#endif

    switch (ctx->pc) {
        case 0x213468u: goto label_213468;
        default: break;
    }

    ctx->pc = 0x213460u;

    // 0x213460: 0xc084cda  jal         func_213368
    ctx->pc = 0x213460u;
    SET_GPR_U32(ctx, 31, 0x213468u);
    ctx->pc = 0x213464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213460u;
    // 0x213464: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213368u, 0x213460u, 0x213468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213468u;
label_213468:
    // 0x213468: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213468u;
    {
        const bool branch_taken_0x213468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213468u;
        // 0x21346c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213468) {
            ctx->pc = 0x213478u;
            return;
        }
    }
    ctx->pc = 0x213470u;
    // 0x213470: 0x42000038  ei
    ctx->pc = 0x213470u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x213474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x213478u;
}
