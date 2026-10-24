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

// Function: kprintf
// Address: 0x214b50 - 0x214b88
void kprintf_0x214b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kprintf_0x214b50");
#endif

    switch (ctx->pc) {
        case 0x214b7cu: goto label_214b7c;
        default: break;
    }

    ctx->pc = 0x214b50u;

    // 0x214b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x214b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x214b54: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x214b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x214b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214b5c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x214b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x214b60: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x214b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x214b64: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x214b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x214b68: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x214b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x214b6c: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x214b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x214b70: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x214b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x214b74: 0xc085162  jal         func_214588
    ctx->pc = 0x214B74u;
    SET_GPR_U32(ctx, 31, 0x214B7Cu);
    ctx->pc = 0x214B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B74u;
    // 0x214b78: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214588u, 0x214B74u, 0x214B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B7Cu;
label_214b7c:
    // 0x214b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b80: 0x3e00008  jr          $ra
    ctx->pc = 0x214B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B80u;
        // 0x214b84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B88u;
}
