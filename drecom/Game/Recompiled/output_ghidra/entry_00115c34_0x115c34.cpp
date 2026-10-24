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

// Function: entry_00115c34
// Address: 0x115c34 - 0x115c58
void entry_00115c34_0x115c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c34_0x115c34");
#endif

    switch (ctx->pc) {
        case 0x115c3cu: goto label_115c3c;
        default: break;
    }

    ctx->pc = 0x115c34u;

    // 0x115c34: 0xc0465a0  jal         func_119680
    ctx->pc = 0x115C34u;
    SET_GPR_U32(ctx, 31, 0x115C3Cu);
    ctx->pc = 0x115C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C34u;
    // 0x115c38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x115C34u, 0x115C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C3Cu;
label_115c3c:
    // 0x115c3c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x115C3Cu;
    {
        const bool branch_taken_0x115c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C3Cu;
        // 0x115c40: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c3c) {
            ctx->pc = 0x115CF0u;
            return;
        }
    }
    ctx->pc = 0x115C44u;
    // 0x115c44: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x115c48: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x115c48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c50: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x115c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c54: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x115c58u;
}
