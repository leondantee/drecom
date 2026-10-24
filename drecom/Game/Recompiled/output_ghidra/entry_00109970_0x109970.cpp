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

// Function: entry_00109970
// Address: 0x109970 - 0x109994
void entry_00109970_0x109970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109970_0x109970");
#endif

    switch (ctx->pc) {
        case 0x109978u: goto label_109978;
        default: break;
    }

    ctx->pc = 0x109970u;

    // 0x109970: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109970u;
    SET_GPR_U32(ctx, 31, 0x109978u);
    ctx->pc = 0x109974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109970u;
    // 0x109974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109970u, 0x109978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109978u;
label_109978:
    // 0x109978: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109978u;
    {
        const bool branch_taken_0x109978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109978u;
        // 0x10997c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109978) {
            ctx->pc = 0x109960u;
            return;
        }
    }
    ctx->pc = 0x109980u;
    // 0x109980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109984: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10998c: 0x3e00008  jr          $ra
    ctx->pc = 0x10998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10998Cu;
        // 0x109990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109994u;
}
