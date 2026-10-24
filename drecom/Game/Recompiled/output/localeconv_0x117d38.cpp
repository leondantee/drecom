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

// Function: localeconv
// Address: 0x117d38 - 0x117d5c
void localeconv_0x117d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("localeconv_0x117d38");
#endif

    switch (ctx->pc) {
        case 0x117d50u: goto label_117d50;
        default: break;
    }

    ctx->pc = 0x117d38u;

    // 0x117d38: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x117d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x117d3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117d40: 0x8c44490c  lw          $a0, 0x490C($v0)
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38490Cu));
    // 0x117d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117d48: 0xc045f3e  jal         func_117CF8
    ctx->pc = 0x117D48u;
    SET_GPR_U32(ctx, 31, 0x117D50u);
    ctx->pc = 0x117CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CF8u, 0x117D48u, 0x117D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D50u;
label_117d50:
    // 0x117d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d54: 0x3e00008  jr          $ra
    ctx->pc = 0x117D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D54u;
        // 0x117d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D5Cu;
}
