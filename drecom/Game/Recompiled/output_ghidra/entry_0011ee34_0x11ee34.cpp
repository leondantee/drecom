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

// Function: entry_0011ee34
// Address: 0x11ee34 - 0x11ee68
void entry_0011ee34_0x11ee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ee34_0x11ee34");
#endif

    switch (ctx->pc) {
        case 0x11ee3cu: goto label_11ee3c;
        default: break;
    }

    ctx->pc = 0x11ee34u;

    // 0x11ee34: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EE34u, 0x11EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE3Cu;
label_11ee3c:
    // 0x11ee3c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x11ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11ee40: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x11ee40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11ee44: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x11ee44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11ee48: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x11ee48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11ee4c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x11ee4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ee50: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x11ee50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ee54: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11ee54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ee58: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x11ee58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ee5c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11ee5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE60u;
        // 0x11ee64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE68u;
}
