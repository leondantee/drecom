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

// Function: entry_00109900
// Address: 0x109900 - 0x109928
void entry_00109900_0x109900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109900_0x109900");
#endif

    ctx->pc = 0x109900u;

    // 0x109900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109904: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x109904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109908: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10990c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10990cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109910: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109918: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10991c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10991cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109920: 0x3e00008  jr          $ra
    ctx->pc = 0x109920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109928u;
}
