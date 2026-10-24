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

// Function: entry_00109d58
// Address: 0x109d58 - 0x109d78
void entry_00109d58_0x109d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109d58_0x109d58");
#endif

    switch (ctx->pc) {
        case 0x109d60u: goto label_109d60;
        default: break;
    }

    ctx->pc = 0x109d58u;

label_109d58:
    // 0x109d58: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D58u;
    SET_GPR_U32(ctx, 31, 0x109D60u);
    ctx->pc = 0x109D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D58u;
    // 0x109d5c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D58u, 0x109D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D60u;
label_109d60:
    // 0x109d60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x109d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x109d64: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x109d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x109d68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109D68u;
    {
        const bool branch_taken_0x109d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D68u;
        // 0x109d6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d68) {
            ctx->pc = 0x109D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d58;
        }
    }
    ctx->pc = 0x109D70u;
    // 0x109d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109D70u;
    {
        const bool branch_taken_0x109d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D70u;
        // 0x109d74: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d70) {
            ctx->pc = 0x109D7Cu;
            return;
        }
    }
    ctx->pc = 0x109D78u;
}
