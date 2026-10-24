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

// Function: entry_00109cec
// Address: 0x109cec - 0x109d04
void entry_00109cec_0x109cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109cec_0x109cec");
#endif

    switch (ctx->pc) {
        case 0x109cfcu: goto label_109cfc;
        default: break;
    }

    ctx->pc = 0x109cecu;

    // 0x109cec: 0x17d50005  bne         $fp, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x109CECu;
    {
        const bool branch_taken_0x109cec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CECu;
        // 0x109cf0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cec) {
            ctx->pc = 0x109D04u;
            return;
        }
    }
    ctx->pc = 0x109CF4u;
    // 0x109cf4: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x109CF4u;
    SET_GPR_U32(ctx, 31, 0x109CFCu);
    ctx->pc = 0x109CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CF4u;
    // 0x109cf8: 0x2484c870  addiu       $a0, $a0, -0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x109CF4u, 0x109CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CFCu;
label_109cfc:
    // 0x109cfc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x109CFCu;
    {
        const bool branch_taken_0x109cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CFCu;
        // 0x109d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cfc) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109D04u;
}
