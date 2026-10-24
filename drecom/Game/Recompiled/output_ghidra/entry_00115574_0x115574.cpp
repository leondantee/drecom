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

// Function: entry_00115574
// Address: 0x115574 - 0x115594
void entry_00115574_0x115574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115574_0x115574");
#endif

    ctx->pc = 0x115574u;

    // 0x115574: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x115574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115578: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x115578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11557c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11557cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115580: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x115580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115584: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x115584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115588: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x115588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11558c: 0x3e00008  jr          $ra
    ctx->pc = 0x11558Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11558Cu;
        // 0x115590: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11558Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115594u;
}
