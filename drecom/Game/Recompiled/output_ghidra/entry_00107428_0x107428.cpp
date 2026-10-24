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

// Function: entry_00107428
// Address: 0x107428 - 0x107448
void entry_00107428_0x107428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107428_0x107428");
#endif

    switch (ctx->pc) {
        case 0x107430u: goto label_107430;
        default: break;
    }

    ctx->pc = 0x107428u;

    // 0x107428: 0xc041c0a  jal         func_107028
    ctx->pc = 0x107428u;
    SET_GPR_U32(ctx, 31, 0x107430u);
    ctx->pc = 0x10742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107428u;
    // 0x10742c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x107428u, 0x107430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107430u;
label_107430:
    // 0x107430: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x107430u;
    {
        const bool branch_taken_0x107430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x107434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107430u;
        // 0x107434: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107430) {
            ctx->pc = 0x107420u;
            return;
        }
    }
    ctx->pc = 0x107438u;
    // 0x107438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10743c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10743cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107440: 0x3e00008  jr          $ra
    ctx->pc = 0x107440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107440u;
        // 0x107444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107448u;
}
