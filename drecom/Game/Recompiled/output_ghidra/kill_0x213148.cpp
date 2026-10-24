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

// Function: kill
// Address: 0x213148 - 0x213170
void kill_0x213148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kill_0x213148");
#endif

    switch (ctx->pc) {
        case 0x213160u: goto label_213160;
        default: break;
    }

    ctx->pc = 0x213148u;

    // 0x213148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21314c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213150: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213150u;
    {
        const bool branch_taken_0x213150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x213154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213150u;
        // 0x213154: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213150) {
            ctx->pc = 0x213160u;
            goto label_213160;
        }
    }
    ctx->pc = 0x213158u;
    // 0x213158: 0xc084990  jal         func_212640
    ctx->pc = 0x213158u;
    SET_GPR_U32(ctx, 31, 0x213160u);
    ctx->pc = 0x21315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213158u;
    // 0x21315c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x213158u, 0x213160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213160u;
label_213160:
    // 0x213160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213168: 0x3e00008  jr          $ra
    ctx->pc = 0x213168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213168u;
        // 0x21316c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213170u;
}
