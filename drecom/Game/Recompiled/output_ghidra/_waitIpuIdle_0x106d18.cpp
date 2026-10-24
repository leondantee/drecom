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

// Function: _waitIpuIdle
// Address: 0x106d18 - 0x106dbc
void _waitIpuIdle_0x106d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle_0x106d18");
#endif

    switch (ctx->pc) {
        case 0x106d78u: goto label_106d78;
        case 0x106d8cu: goto label_106d8c;
        default: break;
    }

    ctx->pc = 0x106d18u;

    // 0x106d18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106d1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106d20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x106d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x106d24: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106d28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106d2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x106d30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106d34: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x106d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x106d38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106d44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x106d48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106d4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x106d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x106d50: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x106D50u;
    {
        const bool branch_taken_0x106d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D50u;
        // 0x106d54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d50) {
            ctx->pc = 0x106DA4u;
            goto label_106da4;
        }
    }
    ctx->pc = 0x106D58u;
    // 0x106d58: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x106d5c: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x106d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x106d60: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x106d60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x106d64: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x106d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x106d68: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x106d68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x106d6c: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x106d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x106d70: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x106d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d74: 0x0  nop
    ctx->pc = 0x106d74u;
    // NOP
label_106d78:
    // 0x106d78: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106d7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106D7Cu;
    {
        const bool branch_taken_0x106d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D7Cu;
        // 0x106d80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d7c) {
            ctx->pc = 0x106D90u;
            goto label_106d90;
        }
    }
    ctx->pc = 0x106D84u;
    // 0x106d84: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106D84u;
    SET_GPR_U32(ctx, 31, 0x106D8Cu);
    ctx->pc = 0x106D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D84u;
    // 0x106d88: 0x8e643bf4  lw          $a0, 0x3BF4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106D84u, 0x106D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D8Cu;
label_106d8c:
    // 0x106d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106d90:
    // 0x106d90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x106d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106d94: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x106d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x106d98: 0x1052fff7  beq         $v0, $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x106D98u;
    {
        const bool branch_taken_0x106d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x106D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D98u;
        // 0x106d9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d98) {
            ctx->pc = 0x106D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106d78;
        }
    }
    ctx->pc = 0x106DA0u;
    // 0x106da0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x106da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_106da4:
    // 0x106da4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106da8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106dac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106db4: 0x3e00008  jr          $ra
    ctx->pc = 0x106DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DB4u;
        // 0x106db8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106DBCu;
}
