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

// Function: entry_0011b890
// Address: 0x11b890 - 0x11b8d4
void entry_0011b890_0x11b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b890_0x11b890");
#endif

    switch (ctx->pc) {
        case 0x11b8b0u: goto label_11b8b0;
        default: break;
    }

    ctx->pc = 0x11b890u;

    // 0x11b890: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x11b894: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B894u;
    {
        const bool branch_taken_0x11b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B894u;
        // 0x11b898: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b894) {
            ctx->pc = 0x11B8DCu;
            return;
        }
    }
    ctx->pc = 0x11B89Cu;
    // 0x11b89c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x11b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x11b8a8: 0xc047294  jal         func_11CA50
    ctx->pc = 0x11B8A8u;
    SET_GPR_U32(ctx, 31, 0x11B8B0u);
    ctx->pc = 0x11B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8A8u;
    // 0x11b8ac: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CA50u, 0x11B8A8u, 0x11B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8B0u;
label_11b8b0:
    // 0x11b8b0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x11b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x11b8b4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11b8b8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x11b8bc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x11b8bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11b8c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8C0u;
    {
        const bool branch_taken_0x11b8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C0u;
        // 0x11b8c4: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c0) {
            ctx->pc = 0x11B8D4u;
            return;
        }
    }
    ctx->pc = 0x11B8C8u;
    // 0x11b8c8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11b8cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B8CCu;
    {
        const bool branch_taken_0x11b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8CCu;
        // 0x11b8d0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8cc) {
            ctx->pc = 0x11B938u;
            return;
        }
    }
    ctx->pc = 0x11B8D4u;
}
