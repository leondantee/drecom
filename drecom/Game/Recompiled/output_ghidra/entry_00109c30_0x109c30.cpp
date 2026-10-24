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

// Function: entry_00109c30
// Address: 0x109c30 - 0x109c44
void entry_00109c30_0x109c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c30_0x109c30");
#endif

    ctx->pc = 0x109c30u;

    // 0x109c30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109c34: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109C34u;
    {
        const bool branch_taken_0x109c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x109C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C34u;
        // 0x109c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c34) {
            ctx->pc = 0x109C44u;
            return;
        }
    }
    ctx->pc = 0x109C3Cu;
    // 0x109c3c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C3Cu;
    SET_GPR_U32(ctx, 31, 0x109C44u);
    ctx->pc = 0x109C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C3Cu;
    // 0x109c40: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C3Cu, 0x109C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C44u;
}
