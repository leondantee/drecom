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

// Function: entry_00106c18
// Address: 0x106c18 - 0x106c40
void entry_00106c18_0x106c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c18_0x106c18");
#endif

    switch (ctx->pc) {
        case 0x106c2cu: goto label_106c2c;
        case 0x106c3cu: goto label_106c3c;
        default: break;
    }

    ctx->pc = 0x106c18u;

    // 0x106c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x106c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c24: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x106C24u;
    SET_GPR_U32(ctx, 31, 0x106C2Cu);
    ctx->pc = 0x106C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C24u;
    // 0x106c28: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x106C24u, 0x106C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C2Cu;
label_106c2c:
    // 0x106c2c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C2Cu;
    {
        const bool branch_taken_0x106c2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c2c) {
            ctx->pc = 0x106C40u;
            return;
        }
    }
    ctx->pc = 0x106C34u;
    // 0x106c34: 0xc041728  jal         func_105CA0
    ctx->pc = 0x106C34u;
    SET_GPR_U32(ctx, 31, 0x106C3Cu);
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x106C34u, 0x106C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C3Cu;
label_106c3c:
    // 0x106c3c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x106c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x106c40u;
}
