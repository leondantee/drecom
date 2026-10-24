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

// Function: entry_00106344
// Address: 0x106344 - 0x10635c
void entry_00106344_0x106344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106344_0x106344");
#endif

    switch (ctx->pc) {
        case 0x106358u: goto label_106358;
        default: break;
    }

    ctx->pc = 0x106344u;

    // 0x106344: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106344u;
    {
        const bool branch_taken_0x106344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106344u;
        // 0x106348: 0x266241f8  addiu       $v0, $s3, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106344) {
            ctx->pc = 0x10635Cu;
            return;
        }
    }
    ctx->pc = 0x10634Cu;
    // 0x10634c: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x106350: 0xc0412c6  jal         func_104B18
    ctx->pc = 0x106350u;
    SET_GPR_U32(ctx, 31, 0x106358u);
    ctx->pc = 0x106354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106350u;
    // 0x106354: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B18u, 0x106350u, 0x106358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106358u;
label_106358:
    // 0x106358: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x10635cu;
}
