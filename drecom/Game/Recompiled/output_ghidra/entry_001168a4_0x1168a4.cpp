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

// Function: entry_001168a4
// Address: 0x1168a4 - 0x1168c8
void entry_001168a4_0x1168a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001168a4_0x1168a4");
#endif

    switch (ctx->pc) {
        case 0x1168c0u: goto label_1168c0;
        default: break;
    }

    ctx->pc = 0x1168a4u;

    // 0x1168a4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1168a8: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1168ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1168ACu;
    {
        const bool branch_taken_0x1168ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168ACu;
        // 0x1168b0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168ac) {
            ctx->pc = 0x1168D8u;
            return;
        }
    }
    ctx->pc = 0x1168B4u;
    // 0x1168b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1168b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168b8: 0xc046502  jal         func_119408
    ctx->pc = 0x1168B8u;
    SET_GPR_U32(ctx, 31, 0x1168C0u);
    ctx->pc = 0x1168BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168B8u;
    // 0x1168bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168B8u, 0x1168C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168C0u;
label_1168c0:
    // 0x1168c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1168C0u;
    {
        const bool branch_taken_0x1168c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168C0u;
        // 0x1168c4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168c0) {
            ctx->pc = 0x1168D8u;
            return;
        }
    }
    ctx->pc = 0x1168C8u;
}
