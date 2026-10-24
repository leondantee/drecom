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

// Function: entry_00213200
// Address: 0x213200 - 0x213214
void entry_00213200_0x213200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213200_0x213200");
#endif

    switch (ctx->pc) {
        case 0x213208u: goto label_213208;
        default: break;
    }

    ctx->pc = 0x213200u;

    // 0x213200: 0xc084b6c  jal         func_212DB0
    ctx->pc = 0x213200u;
    SET_GPR_U32(ctx, 31, 0x213208u);
    ctx->pc = 0x213204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213200u;
    // 0x213204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DB0u, 0x213200u, 0x213208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213208u;
label_213208:
    // 0x213208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21320c: 0x3e00008  jr          $ra
    ctx->pc = 0x21320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21320Cu;
        // 0x213210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21320Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213214u;
}
