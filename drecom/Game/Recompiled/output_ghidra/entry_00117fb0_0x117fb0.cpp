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

// Function: entry_00117fb0
// Address: 0x117fb0 - 0x117fdc
void entry_00117fb0_0x117fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117fb0_0x117fb0");
#endif

    switch (ctx->pc) {
        case 0x117fbcu: goto label_117fbc;
        default: break;
    }

    ctx->pc = 0x117fb0u;

    // 0x117fb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x117fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fb4: 0xc046a16  jal         func_11A858
    ctx->pc = 0x117FB4u;
    SET_GPR_U32(ctx, 31, 0x117FBCu);
    ctx->pc = 0x117FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FB4u;
    // 0x117fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A858u, 0x117FB4u, 0x117FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FBCu;
label_117fbc:
    // 0x117fbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fc0: 0x1230005c  beq         $s1, $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x117FC0u;
    {
        const bool branch_taken_0x117fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x117FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FC0u;
        // 0x117fc4: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fc0) {
            ctx->pc = 0x118134u;
            return;
        }
    }
    ctx->pc = 0x117FC8u;
    // 0x117fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117FC8u;
    {
        const bool branch_taken_0x117fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FC8u;
        // 0x117fcc: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fc8) {
            ctx->pc = 0x117FDCu;
            return;
        }
    }
    ctx->pc = 0x117FD0u;
    // 0x117fd0: 0x24844928  addiu       $a0, $a0, 0x4928
    ctx->pc = 0x117fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18728));
    // 0x117fd4: 0x16840058  bne         $s4, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x117FD4u;
    {
        const bool branch_taken_0x117fd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x117FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FD4u;
        // 0x117fd8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fd4) {
            ctx->pc = 0x118138u;
            return;
        }
    }
    ctx->pc = 0x117FDCu;
}
