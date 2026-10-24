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

// Function: _extrainfo
// Address: 0x107990 - 0x1079c4
void _extrainfo_0x107990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extrainfo_0x107990");
#endif

    switch (ctx->pc) {
        case 0x1079a0u: goto label_1079a0;
        case 0x1079a8u: goto label_1079a8;
        case 0x1079b0u: goto label_1079b0;
        default: break;
    }

    ctx->pc = 0x107990u;

    // 0x107990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107994u;
    {
        const bool branch_taken_0x107994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107994u;
        // 0x107998: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107994) {
            ctx->pc = 0x1079A8u;
            goto label_1079a8;
        }
    }
    ctx->pc = 0x10799Cu;
    // 0x10799c: 0x0  nop
    ctx->pc = 0x10799cu;
    // NOP
label_1079a0:
    // 0x1079a0: 0xc041c58  jal         func_107160
    ctx->pc = 0x1079A0u;
    SET_GPR_U32(ctx, 31, 0x1079A8u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1079A0u, 0x1079A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079A8u;
label_1079a8:
    // 0x1079a8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1079A8u;
    SET_GPR_U32(ctx, 31, 0x1079B0u);
    ctx->pc = 0x1079ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079A8u;
    // 0x1079ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1079A8u, 0x1079B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079B0u;
label_1079b0:
    // 0x1079b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1079B0u;
    {
        const bool branch_taken_0x1079b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079b0) {
            ctx->pc = 0x1079A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1079a0;
        }
    }
    ctx->pc = 0x1079B8u;
    // 0x1079b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1079b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1079bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1079BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079BCu;
        // 0x1079c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1079BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1079C4u;
}
