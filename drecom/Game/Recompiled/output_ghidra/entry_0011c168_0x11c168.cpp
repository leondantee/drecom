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

// Function: entry_0011c168
// Address: 0x11c168 - 0x11c1bc
void entry_0011c168_0x11c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c168_0x11c168");
#endif

    switch (ctx->pc) {
        case 0x11c1b4u: goto label_11c1b4;
        default: break;
    }

    ctx->pc = 0x11c168u;

    // 0x11c168: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x11C168u;
    {
        const bool branch_taken_0x11c168 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x11C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C168u;
        // 0x11c16c: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c168) {
            ctx->pc = 0x11C2F8u;
            return;
        }
    }
    ctx->pc = 0x11C170u;
    // 0x11c170: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c174: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c178: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x11c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x11c17c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c184: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c18c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c198: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c198u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c19c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c1a0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C1A0u;
    {
        const bool branch_taken_0x11c1a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A0u;
        // 0x11c1a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1a0) {
            ctx->pc = 0x11C1BCu;
            return;
        }
    }
    ctx->pc = 0x11C1A8u;
    // 0x11c1a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c1ac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C1ACu;
    SET_GPR_U32(ctx, 31, 0x11C1B4u);
    ctx->pc = 0x11C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1ACu;
    // 0x11c1b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C1ACu, 0x11C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1B4u;
label_11c1b4:
    // 0x11c1b4: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x11C1B4u;
    {
        const bool branch_taken_0x11c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B4u;
        // 0x11c1b8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b4) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C1BCu;
}
