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

// Function: entry_0011b410
// Address: 0x11b410 - 0x11b440
void entry_0011b410_0x11b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b410_0x11b410");
#endif

    switch (ctx->pc) {
        case 0x11b438u: goto label_11b438;
        default: break;
    }

    ctx->pc = 0x11b410u;

    // 0x11b410: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b414: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B414u;
    {
        const bool branch_taken_0x11b414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B414u;
        // 0x11b418: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b414) {
            ctx->pc = 0x11B440u;
            return;
        }
    }
    ctx->pc = 0x11B41Cu;
    // 0x11b41c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x11b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b420: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x11b424: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B424u;
    {
        const bool branch_taken_0x11b424 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B424u;
        // 0x11b428: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b424) {
            ctx->pc = 0x11B440u;
            return;
        }
    }
    ctx->pc = 0x11B42Cu;
    // 0x11b42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b430: 0xc046c96  jal         func_11B258
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x11B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B430u;
    // 0x11b434: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B258u, 0x11B430u, 0x11B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x11B438u;
    {
        const bool branch_taken_0x11b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B438u;
        // 0x11b43c: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b438) {
            ctx->pc = 0x11C874u;
            return;
        }
    }
    ctx->pc = 0x11B440u;
}
