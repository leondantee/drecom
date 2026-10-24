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

// Function: __sclose
// Address: 0x11aae0 - 0x11ab00
void ps2___sclose_0x11aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sclose_0x11aae0");
#endif

    switch (ctx->pc) {
        case 0x11aaf4u: goto label_11aaf4;
        default: break;
    }

    ctx->pc = 0x11aae0u;

    // 0x11aae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aae8: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x11aaec: 0xc0456ac  jal         func_115AB0
    ctx->pc = 0x11AAECu;
    SET_GPR_U32(ctx, 31, 0x11AAF4u);
    ctx->pc = 0x11AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAECu;
    // 0x11aaf0: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AB0u, 0x11AAECu, 0x11AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAF4u;
label_11aaf4:
    // 0x11aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x11AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF8u;
        // 0x11aafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB00u;
}
