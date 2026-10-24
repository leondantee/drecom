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

// Function: entry_0011c940
// Address: 0x11c940 - 0x11c978
void entry_0011c940_0x11c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c940_0x11c940");
#endif

    switch (ctx->pc) {
        case 0x11c960u: goto label_11c960;
        default: break;
    }

    ctx->pc = 0x11c940u;

    // 0x11c940: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11c940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c944: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c94c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x11c94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c950: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x11c950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c954: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0xc045748  jal         func_115D20
    ctx->pc = 0x11C958u;
    SET_GPR_U32(ctx, 31, 0x11C960u);
    ctx->pc = 0x11C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C958u;
    // 0x11c95c: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115D20u, 0x11C958u, 0x11C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11c960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c964: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x11c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x11c968: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C968u;
    {
        const bool branch_taken_0x11c968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C968u;
        // 0x11c96c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c968) {
            ctx->pc = 0x11C978u;
            return;
        }
    }
    ctx->pc = 0x11C970u;
    // 0x11c970: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C970u;
    {
        const bool branch_taken_0x11c970 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C970u;
        // 0x11c974: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c970) {
            ctx->pc = 0x11C984u;
            return;
        }
    }
    ctx->pc = 0x11C978u;
}
