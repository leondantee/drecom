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

// Function: entry_0010f868
// Address: 0x10f868 - 0x10f8a8
void entry_0010f868_0x10f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f868_0x10f868");
#endif

    switch (ctx->pc) {
        case 0x10f874u: goto label_10f874;
        default: break;
    }

    ctx->pc = 0x10f868u;

    // 0x10f868: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f86c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F86Cu;
    SET_GPR_U32(ctx, 31, 0x10F874u);
    ctx->pc = 0x10F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F86Cu;
    // 0x10f870: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F874u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F874u) { return; }
    ctx->pc = 0x10F874u;
label_10f874:
    // 0x10f874: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10f878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f87c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10f87cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10f880: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10f880u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10f884: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10f884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10f888: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10f888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f88c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10f88cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f890: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10f890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f894: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f898: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f89c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A0u;
        // 0x10f8a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8A8u;
}
