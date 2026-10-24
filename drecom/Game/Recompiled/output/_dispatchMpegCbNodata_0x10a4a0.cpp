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

// Function: _dispatchMpegCbNodata
// Address: 0x10a4a0 - 0x10a4c4
void _dispatchMpegCbNodata_0x10a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCbNodata_0x10a4a0");
#endif

    switch (ctx->pc) {
        case 0x10a4b8u: goto label_10a4b8;
        default: break;
    }

    ctx->pc = 0x10a4a0u;

    // 0x10a4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a4a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a4ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4b0: 0xc042914  jal         func_10A450
    ctx->pc = 0x10A4B0u;
    SET_GPR_U32(ctx, 31, 0x10A4B8u);
    ctx->pc = 0x10A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4B0u;
    // 0x10a4b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10A4B0u, 0x10A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4B8u;
label_10a4b8:
    // 0x10a4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4BCu;
        // 0x10a4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4C4u;
}
