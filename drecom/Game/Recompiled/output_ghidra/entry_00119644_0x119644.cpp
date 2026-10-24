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

// Function: entry_00119644
// Address: 0x119644 - 0x119680
void entry_00119644_0x119644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119644_0x119644");
#endif

    switch (ctx->pc) {
        case 0x119654u: goto label_119654;
        default: break;
    }

    ctx->pc = 0x119644u;

    // 0x119644: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x119644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x119648: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11964c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x11964Cu;
    SET_GPR_U32(ctx, 31, 0x119654u);
    ctx->pc = 0x119650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11964Cu;
    // 0x119650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x11964Cu, 0x119654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119654u;
label_119654:
    // 0x119654: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x119654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119658: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x119658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11965c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11965cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119660: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119664: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119668: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11966c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11966cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119670: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119678: 0x3e00008  jr          $ra
    ctx->pc = 0x119678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119678u;
        // 0x11967c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119680u;
}
