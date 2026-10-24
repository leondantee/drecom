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

// Function: _decodeOrSkip
// Address: 0x10a8c0 - 0x10a8fc
void _decodeOrSkip_0x10a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkip_0x10a8c0");
#endif

    switch (ctx->pc) {
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a8f0u: goto label_10a8f0;
        default: break;
    }

    ctx->pc = 0x10a8c0u;

    // 0x10a8c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10a8c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a8c8: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x10a8cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a8d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A8D0u;
    {
        const bool branch_taken_0x10a8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8D0u;
        // 0x10a8d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8d0) {
            ctx->pc = 0x10A8E8u;
            goto label_10a8e8;
        }
    }
    ctx->pc = 0x10A8D8u;
    // 0x10a8d8: 0xc042a40  jal         func_10A900
    ctx->pc = 0x10A8D8u;
    SET_GPR_U32(ctx, 31, 0x10A8E0u);
    ctx->pc = 0x10A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A900u, 0x10A8D8u, 0x10A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8E0u;
label_10a8e0:
    // 0x10a8e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A8E0u;
    {
        const bool branch_taken_0x10a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E0u;
        // 0x10a8e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e0) {
            ctx->pc = 0x10A8F4u;
            goto label_10a8f4;
        }
    }
    ctx->pc = 0x10A8E8u;
label_10a8e8:
    // 0x10a8e8: 0xc0429e6  jal         func_10A798
    ctx->pc = 0x10A8E8u;
    SET_GPR_U32(ctx, 31, 0x10A8F0u);
    ctx->pc = 0x10A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A798u, 0x10A8E8u, 0x10A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8F0u;
label_10a8f0:
    // 0x10a8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a8f4:
    // 0x10a8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8F4u;
        // 0x10a8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A8FCu;
}
