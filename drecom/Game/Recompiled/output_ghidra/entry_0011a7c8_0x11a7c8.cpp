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

// Function: entry_0011a7c8
// Address: 0x11a7c8 - 0x11a7f4
void entry_0011a7c8_0x11a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a7c8_0x11a7c8");
#endif

    ctx->pc = 0x11a7c8u;

    // 0x11a7c8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x11a7c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11a7cc: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11a7d0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x11a7d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11a7d4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x11a7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11a7d8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x11a7d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a7dc: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x11a7dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a7e0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11a7e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a7e4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x11a7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a7e8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11a7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7ECu;
        // 0x11a7f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A7F4u;
}
