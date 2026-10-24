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

// Function: entry_00119490
// Address: 0x119490 - 0x1194b4
void entry_00119490_0x119490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119490_0x119490");
#endif

    switch (ctx->pc) {
        case 0x1194a8u: goto label_1194a8;
        default: break;
    }

    ctx->pc = 0x119490u;

    // 0x119490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x119490u;
    {
        const bool branch_taken_0x119490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119490) {
            ctx->pc = 0x119494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119490u;
            // 0x119494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1194B4u;
            return;
        }
    }
    ctx->pc = 0x119498u;
    // 0x119498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11949c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194a0: 0xc046476  jal         func_1191D8
    ctx->pc = 0x1194A0u;
    SET_GPR_U32(ctx, 31, 0x1194A8u);
    ctx->pc = 0x1194A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194A0u;
    // 0x1194a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x1194A0u, 0x1194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194A8u;
label_1194a8:
    // 0x1194a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1194a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1194ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1194acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1194b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1194b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1194b4u;
}
