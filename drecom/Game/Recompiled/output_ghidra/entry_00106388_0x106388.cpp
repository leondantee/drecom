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

// Function: entry_00106388
// Address: 0x106388 - 0x1063a8
void entry_00106388_0x106388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106388_0x106388");
#endif

    ctx->pc = 0x106388u;

    // 0x106388: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x106388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10638c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106390: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106394: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x106394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106398: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x106398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10639c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10639cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1063a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1063A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A0u;
        // 0x1063a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1063A8u;
}
