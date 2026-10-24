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

// Function: entry_00109d14
// Address: 0x109d14 - 0x109d24
void entry_00109d14_0x109d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109d14_0x109d14");
#endif

    ctx->pc = 0x109d14u;

    // 0x109d14: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x109D14u;
    {
        const bool branch_taken_0x109d14 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x109D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D14u;
        // 0x109d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d14) {
            ctx->pc = 0x109D24u;
            return;
        }
    }
    ctx->pc = 0x109D1Cu;
    // 0x109d1c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D1Cu;
    SET_GPR_U32(ctx, 31, 0x109D24u);
    ctx->pc = 0x109D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D1Cu;
    // 0x109d20: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D1Cu, 0x109D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D24u;
}
