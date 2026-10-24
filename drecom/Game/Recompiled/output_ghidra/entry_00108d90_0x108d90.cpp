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

// Function: entry_00108d90
// Address: 0x108d90 - 0x108de0
void entry_00108d90_0x108d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108d90_0x108d90");
#endif

    switch (ctx->pc) {
        case 0x108db4u: goto label_108db4;
        case 0x108dc0u: goto label_108dc0;
        default: break;
    }

    ctx->pc = 0x108d90u;

label_108d90:
    // 0x108d90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108d94: 0x0  nop
    ctx->pc = 0x108d94u;
    // NOP
    // 0x108d98: 0x0  nop
    ctx->pc = 0x108d98u;
    // NOP
    // 0x108d9c: 0x0  nop
    ctx->pc = 0x108d9cu;
    // NOP
    // 0x108da0: 0x0  nop
    ctx->pc = 0x108da0u;
    // NOP
    // 0x108da4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108DA4u;
    {
        const bool branch_taken_0x108da4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108da4) {
            ctx->pc = 0x108D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d90;
        }
    }
    ctx->pc = 0x108DACu;
    // 0x108dac: 0xc084d5c  jal         func_213570
    ctx->pc = 0x108DACu;
    SET_GPR_U32(ctx, 31, 0x108DB4u);
    ctx->pc = 0x108DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DACu;
    // 0x108db0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213570u;
    {
        ctx->pc = 0x108DB4u;
        ps2_syscalls::DisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108DB4u) { return; }
    ctx->pc = 0x108DB4u;
label_108db4:
    // 0x108db4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108db8: 0xc0849d4  jal         func_212750
    ctx->pc = 0x108DB8u;
    SET_GPR_U32(ctx, 31, 0x108DC0u);
    ctx->pc = 0x108DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DB8u;
    // 0x108dbc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212750u;
    {
        ctx->pc = 0x108DC0u;
        ps2_syscalls::RemoveDmacHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108DC0u) { return; }
    ctx->pc = 0x108DC0u;
label_108dc0:
    // 0x108dc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x108dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108dc4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108dc8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108dcc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108dd0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108dd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x108DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DD8u;
        // 0x108ddc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DE0u;
}
