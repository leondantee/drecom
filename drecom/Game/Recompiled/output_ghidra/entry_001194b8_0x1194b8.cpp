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

// Function: entry_001194b8
// Address: 0x1194b8 - 0x1194dc
void entry_001194b8_0x1194b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194b8_0x1194b8");
#endif

    switch (ctx->pc) {
        case 0x1194ccu: goto label_1194cc;
        default: break;
    }

    ctx->pc = 0x1194b8u;

    // 0x1194b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1194B8u;
    {
        const bool branch_taken_0x1194b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B8u;
        // 0x1194bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194b8) {
            ctx->pc = 0x1194DCu;
            return;
        }
    }
    ctx->pc = 0x1194C0u;
    // 0x1194c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1194c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194c4: 0xc046476  jal         func_1191D8
    ctx->pc = 0x1194C4u;
    SET_GPR_U32(ctx, 31, 0x1194CCu);
    ctx->pc = 0x1194C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194C4u;
    // 0x1194c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x1194C4u, 0x1194CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194CCu;
label_1194cc:
    // 0x1194cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1194ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1194d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194d4: 0xc046372  jal         func_118DC8
    ctx->pc = 0x1194D4u;
    SET_GPR_U32(ctx, 31, 0x1194DCu);
    ctx->pc = 0x1194D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194D4u;
    // 0x1194d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x1194D4u, 0x1194DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194DCu;
}
