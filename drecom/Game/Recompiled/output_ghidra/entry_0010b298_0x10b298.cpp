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

// Function: entry_0010b298
// Address: 0x10b298 - 0x10b2c4
void entry_0010b298_0x10b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b298_0x10b298");
#endif

    ctx->pc = 0x10b298u;

    // 0x10b298: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10b298u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10b29c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b2a0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10b2a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b2a4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10b2a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b2a8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10b2a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b2ac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b2b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b2b4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b2b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2BCu;
        // 0x10b2c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B2C4u;
}
