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

// Function: entry_0010b450
// Address: 0x10b450 - 0x10b470
void entry_0010b450_0x10b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b450_0x10b450");
#endif

    switch (ctx->pc) {
        case 0x10b458u: goto label_10b458;
        default: break;
    }

    ctx->pc = 0x10b450u;

    // 0x10b450: 0xc042914  jal         func_10A450
    ctx->pc = 0x10B450u;
    SET_GPR_U32(ctx, 31, 0x10B458u);
    ctx->pc = 0x10B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B450u;
    // 0x10b454: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10B450u, 0x10B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B458u;
label_10b458:
    // 0x10b458: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b45c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b460: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b464: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b468: 0x3e00008  jr          $ra
    ctx->pc = 0x10B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B468u;
        // 0x10b46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B470u;
}
