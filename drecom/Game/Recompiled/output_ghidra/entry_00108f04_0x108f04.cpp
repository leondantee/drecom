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

// Function: entry_00108f04
// Address: 0x108f04 - 0x108f34
void entry_00108f04_0x108f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f04_0x108f04");
#endif

    switch (ctx->pc) {
        case 0x108f14u: goto label_108f14;
        default: break;
    }

    ctx->pc = 0x108f04u;

    // 0x108f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108f08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108f0c: 0xc042914  jal         func_10A450
    ctx->pc = 0x108F0Cu;
    SET_GPR_U32(ctx, 31, 0x108F14u);
    ctx->pc = 0x108F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F0Cu;
    // 0x108f10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x108F0Cu, 0x108F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F14u;
label_108f14:
    // 0x108f14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x108f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108f18: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108f18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108f1c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108f20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108f24: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108f28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F2Cu;
        // 0x108f30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108F34u;
}
