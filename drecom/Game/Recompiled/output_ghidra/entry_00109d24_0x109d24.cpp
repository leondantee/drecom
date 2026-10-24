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

// Function: entry_00109d24
// Address: 0x109d24 - 0x109d58
void entry_00109d24_0x109d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109d24_0x109d24");
#endif

    switch (ctx->pc) {
        case 0x109d38u: goto label_109d38;
        case 0x109d44u: goto label_109d44;
        default: break;
    }

    ctx->pc = 0x109d24u;

    // 0x109d24: 0x16350014  bne         $s1, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x109D24u;
    {
        const bool branch_taken_0x109d24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x109D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D24u;
        // 0x109d28: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d24) {
            ctx->pc = 0x109D78u;
            return;
        }
    }
    ctx->pc = 0x109D2Cu;
    // 0x109d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d30: 0xc04241e  jal         func_109078
    ctx->pc = 0x109D30u;
    SET_GPR_U32(ctx, 31, 0x109D38u);
    ctx->pc = 0x109D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D30u;
    // 0x109d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109D30u, 0x109D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D38u;
label_109d38:
    // 0x109d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d3c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109D3Cu;
    SET_GPR_U32(ctx, 31, 0x109D44u);
    ctx->pc = 0x109D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D3Cu;
    // 0x109d40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109D3Cu, 0x109D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D44u;
label_109d44:
    // 0x109d44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d48: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x109D48u;
    {
        const bool branch_taken_0x109d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D48u;
        // 0x109d4c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d48) {
            ctx->pc = 0x109D78u;
            return;
        }
    }
    ctx->pc = 0x109D50u;
    // 0x109d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d54: 0x0  nop
    ctx->pc = 0x109d54u;
    // NOP
    ctx->pc = 0x109d58u;
}
