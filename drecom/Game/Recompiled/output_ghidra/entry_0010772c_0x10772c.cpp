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

// Function: entry_0010772c
// Address: 0x10772c - 0x107760
void entry_0010772c_0x10772c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010772c_0x10772c");
#endif

    switch (ctx->pc) {
        case 0x107734u: goto label_107734;
        default: break;
    }

    ctx->pc = 0x10772cu;

    // 0x10772c: 0xc041c0a  jal         func_107028
    ctx->pc = 0x10772Cu;
    SET_GPR_U32(ctx, 31, 0x107734u);
    ctx->pc = 0x107730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10772Cu;
    // 0x107730: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x10772Cu, 0x107734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107734u;
label_107734:
    // 0x107734: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107738: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10773c: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x107740: 0x240601b5  addiu       $a2, $zero, 0x1B5
    ctx->pc = 0x107740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x107744: 0x1062ffe4  beq         $v1, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x107744u;
    {
        const bool branch_taken_0x107744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107744) {
            ctx->pc = 0x1076D8u;
            return;
        }
    }
    ctx->pc = 0x10774Cu;
    // 0x10774c: 0x1065ffe0  beq         $v1, $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x10774Cu;
    {
        const bool branch_taken_0x10774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x107750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10774Cu;
        // 0x107750: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10774c) {
            ctx->pc = 0x1076D0u;
            return;
        }
    }
    ctx->pc = 0x107754u;
    // 0x107754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107758: 0x3e00008  jr          $ra
    ctx->pc = 0x107758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107758u;
        // 0x10775c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107760u;
}
