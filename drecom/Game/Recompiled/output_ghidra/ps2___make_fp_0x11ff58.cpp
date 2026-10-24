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

// Function: __make_fp
// Address: 0x11ff58 - 0x11ff84
void ps2___make_fp_0x11ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x11ff58");
#endif

    switch (ctx->pc) {
        case 0x11ff78u: goto label_11ff78;
        default: break;
    }

    ctx->pc = 0x11ff58u;

    // 0x11ff58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ff5c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11ff60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ff64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff68: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x11ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x11ff6c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x11ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x11ff70: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FF70u;
    SET_GPR_U32(ctx, 31, 0x11FF78u);
    ctx->pc = 0x11FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF70u;
    // 0x11ff74: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FF70u, 0x11FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF78u;
label_11ff78:
    // 0x11ff78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF7Cu;
        // 0x11ff80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF84u;
}
