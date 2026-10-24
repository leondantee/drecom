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

// Function: entry_0011c984
// Address: 0x11c984 - 0x11c9b8
void entry_0011c984_0x11c984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c984_0x11c984");
#endif

    switch (ctx->pc) {
        case 0x11c9a8u: goto label_11c9a8;
        default: break;
    }

    ctx->pc = 0x11c984u;

    // 0x11c984: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11C984u;
    {
        const bool branch_taken_0x11c984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C984u;
        // 0x11c988: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c984) {
            ctx->pc = 0x11C9C0u;
            return;
        }
    }
    ctx->pc = 0x11C98Cu;
    // 0x11c98c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c990: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11c994: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C994u;
    {
        const bool branch_taken_0x11c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c994) {
            ctx->pc = 0x11C998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C994u;
            // 0x11c998: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9BCu;
            return;
        }
    }
    ctx->pc = 0x11C99Cu;
    // 0x11c99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9a0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C9A0u;
    SET_GPR_U32(ctx, 31, 0x11C9A8u);
    ctx->pc = 0x11C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9A0u;
    // 0x11c9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C9A0u, 0x11C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9A8u;
label_11c9a8:
    // 0x11c9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9A8u;
    {
        const bool branch_taken_0x11c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A8u;
        // 0x11c9ac: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9a8) {
            ctx->pc = 0x11C9B8u;
            return;
        }
    }
    ctx->pc = 0x11C9B0u;
    // 0x11c9b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c9b4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x11c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11c9b8u;
}
