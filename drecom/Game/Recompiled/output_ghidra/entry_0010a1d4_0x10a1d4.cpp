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

// Function: entry_0010a1d4
// Address: 0x10a1d4 - 0x10a204
void entry_0010a1d4_0x10a1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a1d4_0x10a1d4");
#endif

    switch (ctx->pc) {
        case 0x10a1e0u: goto label_10a1e0;
        default: break;
    }

    ctx->pc = 0x10a1d4u;

    // 0x10a1d4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10a1d8: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10A1D8u;
    SET_GPR_U32(ctx, 31, 0x10A1E0u);
    ctx->pc = 0x10A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1D8u;
    // 0x10a1dc: 0x2484c8a0  addiu       $a0, $a0, -0x3760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10A1D8u, 0x10A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1E0u;
label_10a1e0:
    // 0x10a1e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a1e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a1e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a1ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1FCu;
        // 0x10a200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A204u;
}
