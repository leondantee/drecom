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

// Function: _Balloc
// Address: 0x118d20 - 0x118dc8
void ps2__Balloc_0x118d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Balloc_0x118d20");
#endif

    switch (ctx->pc) {
        case 0x118d4cu: goto label_118d4c;
        case 0x118d90u: goto label_118d90;
        default: break;
    }

    ctx->pc = 0x118d20u;

    // 0x118d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118d24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118d2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d34: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x118d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x118d38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118D38u;
    {
        const bool branch_taken_0x118d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D38u;
        // 0x118d3c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d38) {
            ctx->pc = 0x118D58u;
            goto label_118d58;
        }
    }
    ctx->pc = 0x118D40u;
    // 0x118d40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118d44: 0xc04567c  jal         func_1159F0
    ctx->pc = 0x118D44u;
    SET_GPR_U32(ctx, 31, 0x118D4Cu);
    ctx->pc = 0x118D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D44u;
    // 0x118d48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159F0u;
    {
        ctx->pc = 0x118D4Cu;
        ps2_stubs::calloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118D4Cu) { return; }
    ctx->pc = 0x118D4Cu;
label_118d4c:
    // 0x118d4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118D4Cu;
    {
        const bool branch_taken_0x118d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D4Cu;
        // 0x118d50: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d4c) {
            ctx->pc = 0x118D9Cu;
            goto label_118d9c;
        }
    }
    ctx->pc = 0x118D54u;
    // 0x118d54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118d58:
    // 0x118d58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x118d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118d5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x118d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x118d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118d64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118D64u;
    {
        const bool branch_taken_0x118d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D64u;
        // 0x118d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d64) {
            ctx->pc = 0x118D78u;
            goto label_118d78;
        }
    }
    ctx->pc = 0x118D6Cu;
    // 0x118d6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118d70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x118D70u;
    {
        const bool branch_taken_0x118d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D70u;
        // 0x118d74: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d70) {
            ctx->pc = 0x118DA8u;
            goto label_118da8;
        }
    }
    ctx->pc = 0x118D78u;
label_118d78:
    // 0x118d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d7c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x118d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118d84: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x118d84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118d88: 0xc04567c  jal         func_1159F0
    ctx->pc = 0x118D88u;
    SET_GPR_U32(ctx, 31, 0x118D90u);
    ctx->pc = 0x118D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D88u;
    // 0x118d8c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159F0u;
    {
        ctx->pc = 0x118D90u;
        ps2_stubs::calloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118D90u) { return; }
    ctx->pc = 0x118D90u;
label_118d90:
    // 0x118d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d94: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D94u;
    {
        const bool branch_taken_0x118d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d94) {
            ctx->pc = 0x118D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118D94u;
            // 0x118d98: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118DA4u;
            goto label_118da4;
        }
    }
    ctx->pc = 0x118D9Cu;
label_118d9c:
    // 0x118d9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118D9Cu;
    {
        const bool branch_taken_0x118d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D9Cu;
        // 0x118da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d9c) {
            ctx->pc = 0x118DB4u;
            goto label_118db4;
        }
    }
    ctx->pc = 0x118DA4u;
label_118da4:
    // 0x118da4: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x118da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_118da8:
    // 0x118da8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x118da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x118dac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118db0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x118db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_118db4:
    // 0x118db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118db8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x118DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DC0u;
        // 0x118dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DC8u;
}
