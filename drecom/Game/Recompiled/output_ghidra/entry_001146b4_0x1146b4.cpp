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

// Function: entry_001146b4
// Address: 0x1146b4 - 0x1146e4
void entry_001146b4_0x1146b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146b4_0x1146b4");
#endif

    switch (ctx->pc) {
        case 0x1146bcu: goto label_1146bc;
        default: break;
    }

    ctx->pc = 0x1146b4u;

    // 0x1146b4: 0xc04440e  jal         func_111038
    ctx->pc = 0x1146B4u;
    SET_GPR_U32(ctx, 31, 0x1146BCu);
    ctx->pc = 0x1146B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146B4u;
    // 0x1146b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111038u, 0x1146B4u, 0x1146BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1146bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1146c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1146c4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1146C4u;
    {
        const bool branch_taken_0x1146c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146C4u;
        // 0x1146c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146c4) {
            ctx->pc = 0x114704u;
            return;
        }
    }
    ctx->pc = 0x1146CCu;
    // 0x1146cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1146CCu;
    {
        const bool branch_taken_0x1146cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146CCu;
        // 0x1146d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146cc) {
            ctx->pc = 0x1146E4u;
            return;
        }
    }
    ctx->pc = 0x1146D4u;
    // 0x1146d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1146D4u;
    {
        const bool branch_taken_0x1146d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146d4) {
            ctx->pc = 0x1146F4u;
            return;
        }
    }
    ctx->pc = 0x1146DCu;
    // 0x1146dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1146DCu;
    {
        const bool branch_taken_0x1146dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146DCu;
        // 0x1146e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146dc) {
            ctx->pc = 0x114744u;
            return;
        }
    }
    ctx->pc = 0x1146E4u;
}
