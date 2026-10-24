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

// Function: _setlocale_r
// Address: 0x117c70 - 0x117cf4
void _setlocale_r_0x117c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setlocale_r_0x117c70");
#endif

    switch (ctx->pc) {
        case 0x117ca8u: goto label_117ca8;
        case 0x117cbcu: goto label_117cbc;
        default: break;
    }

    ctx->pc = 0x117c70u;

    // 0x117c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117c74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117c7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x117c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117c8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x117c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c90: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x117C90u;
    {
        const bool branch_taken_0x117c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C90u;
        // 0x117c94: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c90) {
            ctx->pc = 0x117CD0u;
            goto label_117cd0;
        }
    }
    ctx->pc = 0x117C98u;
    // 0x117c98: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x117c98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x117c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ca0: 0xc046ac0  jal         func_11AB00
    ctx->pc = 0x117CA0u;
    SET_GPR_U32(ctx, 31, 0x117CA8u);
    ctx->pc = 0x117CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CA0u;
    // 0x117ca4: 0x2665d9f0  addiu       $a1, $s3, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB00u;
    {
        ctx->pc = 0x117CA8u;
        ps2_stubs::strcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117CA8u) { return; }
    ctx->pc = 0x117CA8u;
label_117ca8:
    // 0x117ca8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117CA8u;
    {
        const bool branch_taken_0x117ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CA8u;
        // 0x117cac: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ca8) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117CB0u;
    // 0x117cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cb4: 0xc046ac0  jal         func_11AB00
    ctx->pc = 0x117CB4u;
    SET_GPR_U32(ctx, 31, 0x117CBCu);
    ctx->pc = 0x117CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CB4u;
    // 0x117cb8: 0x24a5d9e0  addiu       $a1, $a1, -0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB00u;
    {
        ctx->pc = 0x117CBCu;
        ps2_stubs::strcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117CBCu) { return; }
    ctx->pc = 0x117CBCu;
label_117cbc:
    // 0x117cbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117CBCu;
    {
        const bool branch_taken_0x117cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CBCu;
        // 0x117cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cbc) {
            ctx->pc = 0x117CD8u;
            goto label_117cd8;
        }
    }
    ctx->pc = 0x117CC4u;
label_117cc4:
    // 0x117cc4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x117cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x117cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117CC8u;
    {
        const bool branch_taken_0x117cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CC8u;
        // 0x117ccc: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cc8) {
            ctx->pc = 0x117CD4u;
            goto label_117cd4;
        }
    }
    ctx->pc = 0x117CD0u;
label_117cd0:
    // 0x117cd0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
label_117cd4:
    // 0x117cd4: 0x2662d9f0  addiu       $v0, $s3, -0x2610
    ctx->pc = 0x117cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957552));
label_117cd8:
    // 0x117cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117cec: 0x3e00008  jr          $ra
    ctx->pc = 0x117CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CECu;
        // 0x117cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117CF4u;
}
